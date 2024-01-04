#include "dialogareaorcamentos.h"
#include "ui_dialogareaorcamentos.h"
#include <QSqlQuery>
#include <sqldatabasecontrol.h>
#include <QMessageBox>
#include <pdfgenerator.h>
#include <QFileDialog>
#include <pdfobjeto.h>
#include <QDesktopServices>
#include <QUrl>
#include <qsqlerror.h>

Dialogareaorcamentos::Dialogareaorcamentos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogareaorcamentos)
{
    ui->setupUi(this);
    this->setWindowTitle("ArtVidros");
    showBD();
    connect(ui->lineEditPesquisa, &QLineEdit::textChanged, this, &Dialogareaorcamentos::onLineEditTextChanged);
}

Dialogareaorcamentos::~Dialogareaorcamentos()
{
    delete ui;
}

#include <QPushButton>

// ... (outras inclusões necessárias)

void Dialogareaorcamentos::showBD()
{
    ui->tableWidget->setRowCount(0);
    QSqlQuery query;

    query.prepare("SELECT * FROM sale");
    if (query.exec()) {
        int linha = 0;
        ui->tableWidget->setColumnCount(8); // Agora são 8 colunas
        while (query.next()) {
            QTableWidgetItem *itemCodSale = new QTableWidgetItem(query.value(0).toString());
            QTableWidgetItem *itemCustomer = new QTableWidgetItem(query.value(1).toString());
            QTableWidgetItem *itemProduct = new QTableWidgetItem(query.value(2).toString());
            QTableWidgetItem *itemPrice = new QTableWidgetItem(query.value(3).toString());
            QTableWidgetItem *itemProfit = new QTableWidgetItem(query.value(4).toString());
            QTableWidgetItem *itemDate = new QTableWidgetItem(query.value(5).toString());
            QTableWidgetItem *itemSeller = new QTableWidgetItem(query.value(6).toString());

            // Adicionando widgets de botões à célula da coluna "Ações"
            QPushButton *btnRemover = new QPushButton;
            btnRemover->setIcon(QIcon(":/imagens/vendas.png"));

            // Conectar o slot antes de adicioná-lo à célula
            connect(btnRemover, &QPushButton::clicked, this, &Dialogareaorcamentos::vendido);


            // Obtendo a quantidade de linhas tem na grid
            int linha = ui->tableWidget->rowCount();
            // Incluindo uma linha na grid
            ui->tableWidget->insertRow(linha);
            ui->tableWidget->setItem(linha, 0, itemCodSale);
            ui->tableWidget->setItem(linha, 1, itemCustomer);
            ui->tableWidget->setItem(linha, 2, itemProduct);
            ui->tableWidget->setItem(linha, 3, itemPrice);
            ui->tableWidget->setItem(linha, 4, itemProfit);
            ui->tableWidget->setItem(linha, 5, itemDate);
            ui->tableWidget->setItem(linha, 6, itemSeller);
            ui->tableWidget->setCellWidget(linha, 7, btnRemover); // Agora é a coluna 7
            ui->tableWidget->setRowHeight(linha, 20);
            linha++;
        }
    }

    QStringList rotulo = {"Código Venda", "Cliente", "Produto", "Valor", "Lucro", "Data", "Vendedor", ""};
    ui->tableWidget->setColumnWidth(0, 117);
    ui->tableWidget->setColumnWidth(1, 157);
    ui->tableWidget->setColumnWidth(2, 455);
    ui->tableWidget->setColumnWidth(3, 115);
    ui->tableWidget->setColumnWidth(4, 115);
    ui->tableWidget->setColumnWidth(5, 115);
    ui->tableWidget->setColumnWidth(6, 125);
    ui->tableWidget->setColumnWidth(7, 45);

    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->setHorizontalHeaderLabels(rotulo);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setStyleSheet("QTableView QHeaderView::section { font-weight: bold; }");
    ui->tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
}

void Dialogareaorcamentos::vendido()
{

    if (!ui->tableWidget->selectedItems().isEmpty()) {
        // Obtém o item da célula selecionada
        QTableWidgetItem *itemCodSale = ui->tableWidget->selectedItems().at(0);
        QTableWidgetItem *itemCustomer = ui->tableWidget->selectedItems().at(1);
        QTableWidgetItem *itemProduct = ui->tableWidget->selectedItems().at(2);
        QTableWidgetItem *itemPrice = ui->tableWidget->selectedItems().at(3);
        QTableWidgetItem *itemProfit = ui->tableWidget->selectedItems().at(4);
        QTableWidgetItem *itemDate = ui->tableWidget->selectedItems().at(5);
        QTableWidgetItem *itemSeller = ui->tableWidget->selectedItems().at(6);
        sqlDataBaseControl aux;

        if (aux.insertBDVendido(itemCodSale->text(),itemCustomer->text(),itemProduct->text(),itemPrice->text(),itemProfit->text(),itemDate->text(),itemSeller->text()))
            QMessageBox::about(this,"","Adicionado como Vendido");
        else
            QMessageBox::warning(this,"ERRO","Não foi possível Adicionar como Vendido");
    }
}


void Dialogareaorcamentos::on_pushButton_Excluir_clicked()
{
    QString id;
    QString name;
    if (!ui->tableWidget->selectedItems().isEmpty()) {
        // Obtém o item da célula selecionada
        QTableWidgetItem *item = ui->tableWidget->selectedItems().at(0);
        QTableWidgetItem *item2 = ui->tableWidget->selectedItems().at(1);
        // Obtém o valor do texto da célula
        id = item->text();
        name = item2->text();
    }
    sqlDataBaseControl aux;

    if(aux.deleteBDSalvar(id , name))
        QMessageBox::about(this,"","O Item selecionado foi Deletado");
    else
        QMessageBox::warning(this,"ERRO","O Item selecionado Não foi Deletado");

    showBD();
}


void Dialogareaorcamentos::on_pushButtonGerarPDF_clicked()
{

    QString row;
    QTableWidgetItem *ID = nullptr;
    QTableWidgetItem *client;
    QTableWidgetItem *date = nullptr;
    QString cliente;
    QString data;

    if (!ui->tableWidget->selectedItems().isEmpty()) {
        int selectedRow = ui->tableWidget->selectedItems().at(0)->row();

        // Obtém os itens da célula na linha selecionada
        ID = ui->tableWidget->item(selectedRow, 0);
        client = ui->tableWidget->item(selectedRow, 1);
        date = ui->tableWidget->item(selectedRow, 5);

        cliente = client->text();
        data = date->text(); // armazenar a data

        PDFarea telaPDF(this,cliente,data);
        telaPDF.exec();

        cliente = telaPDF.getCliente();
        QString cpf = telaPDF.getCpf();
        QString telefone = telaPDF.getTelefone();
        QString endereco = telaPDF.getEndereco();
        QString data = telaPDF.getData();

        // consultar todos os orçamentos com mesmo id
        QString id = ID->text();
        std::list<PDFobjeto> lista;

        QSqlQuery query;
        query.prepare("SELECT * FROM sale WHERE cod_sale = '" + id + "' ");
        if (query.exec()) {
            while (query.next()) {
                QString produto = query.value(2).toString();
                QString valor = query.value(3).toString();
                QString lucro = query.value(4).toString();

                PDFobjeto obj(produto,valor,lucro);
                lista.push_back(obj);
            }
        } else {
            qDebug() << "Erro na consulta:";
        }

        // Criar uma instância do QFileDialog para seleção de arquivo

        QString defaultFileName = "nome_predefinido.pdf";
        QString filePath = QFileDialog::getSaveFileName(this, tr("Salvar PDF"), QDir::homePath(), tr("Arquivos PDF (*.pdf)"));

        if (filePath.isEmpty()) {
            // O usuário cancelou a escolha do arquivo ou ocorreu um erro
            return;
        }

        // Criar uma instância do PDFGenerator com o caminho escolhido
        PDFGenerator pdfGenerator(filePath);

        // Adicionar a imagem de fundo (template) ao PDF
        QImage backgroundImage(":/imagens/Template_QT_pdf.jpg");  // Substitua pelo caminho real da sua imagem
        pdfGenerator.addBackgroundImage(backgroundImage);

        //pdfGenerator.addProductToImage(cpf,150,400);

        pdfGenerator.addProductToImage(cliente,152,352);
        pdfGenerator.addProductToImage(telefone,152,377);
        pdfGenerator.addProductToImage(endereco,152,402);
        pdfGenerator.addProductToImage(data,480,348);



        // Adicionar produtos e valores
        float valorTotal = 0.0;

        int posX = 135;
        int posXValor = 580;
        int posY = 500;
        int cont = 0;
        while (!lista.empty()){
            if (cont < 8){
                //pdfGenerator.addProduct(lista.front().getProduto(),lista.front().getPreco().toDouble());
                pdfGenerator.addProductToImage(lista.front().getProduto(), posX,posY);
                pdfGenerator.addProductToImage(lista.front().getPreco(), posXValor,posY);

                valorTotal += lista.front().getPreco().toFloat();

                lista.pop_front();
                posY += 30;
                cont++;
            }
        }

        // valor total
        pdfGenerator.addProductToImage(QString::number(valorTotal),580,780);

        // Salvar o PDF
        pdfGenerator.savePDF();

        //abrir para visualizar o pdf
        QDesktopServices::openUrl(QUrl::fromLocalFile(filePath));
    } else {
        QMessageBox::about(this,"Erro","Nenhum item foi selecionado !");
    }
}


void Dialogareaorcamentos::onLineEditTextChanged(const QString &text)
{
    // Limpar a tabela
    ui->tableWidget->setRowCount(0);

    // Consultar o banco de dados com base no texto inserido
    QSqlQuery query;
    query.prepare("SELECT * FROM sale WHERE customer LIKE :text");
    query.bindValue(":text", "%" + text + "%");

    if (query.exec()) {
        int linha = 0;
        ui->tableWidget->setColumnCount(7);

        while (query.next()) {
            QTableWidgetItem *itemCodSale = new QTableWidgetItem(query.value(0).toString());
            QTableWidgetItem *itemCustomer = new QTableWidgetItem(query.value(1).toString());
            QTableWidgetItem *itemProduct = new QTableWidgetItem(query.value(2).toString());
            QTableWidgetItem *itemPrice = new QTableWidgetItem(query.value(3).toString());
            QTableWidgetItem *itemProfit = new QTableWidgetItem(query.value(4).toString());
            QTableWidgetItem *itemDate = new QTableWidgetItem(query.value(5).toString());
            QTableWidgetItem *itemSeller = new QTableWidgetItem(query.value(6).toString());

            int linha = ui->tableWidget->rowCount();
            ui->tableWidget->insertRow(linha);
            ui->tableWidget->setItem(linha, 0, itemCodSale);
            ui->tableWidget->setItem(linha, 1, itemCustomer);
            ui->tableWidget->setItem(linha, 2, itemProduct);
            ui->tableWidget->setItem(linha, 3, itemPrice);
            ui->tableWidget->setItem(linha, 4, itemProfit);
            ui->tableWidget->setItem(linha, 5, itemDate);
            ui->tableWidget->setItem(linha, 6, itemSeller);
            ui->tableWidget->setRowHeight(linha, 20);
            linha++;
        }
    }
    QStringList rotulo = {"Código Venda", "Cliente", "Produto", "Valor", "Lucro", "Data", "Vendedor"};

    ui->tableWidget->setColumnWidth(0, 117);
    ui->tableWidget->setColumnWidth(1, 157);
    ui->tableWidget->setColumnWidth(2, 455);
    ui->tableWidget->setColumnWidth(3, 115);
    ui->tableWidget->setColumnWidth(4, 115);
    ui->tableWidget->setColumnWidth(5, 115);
    ui->tableWidget->setColumnWidth(6, 125);

    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->setHorizontalHeaderLabels(rotulo);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setStyleSheet("QTableView QHeaderView::section { font-weight: bold; }");
    ui->tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    // Restante do código para definir larguras de colunas, estilos, etc.
}


void Dialogareaorcamentos::on_pushButton_Adicionar_clicked()
{
    telaOrcamentos = new DialogAreaOrcamentoSQL(this,"ADD","");
    telaOrcamentos->exec();
}


void Dialogareaorcamentos::on_pushButtonLimpar_clicked()
{
    ui->lineEditPesquisa->clear();
}


void Dialogareaorcamentos::on_pushButton_Alterar_clicked()
{

    QString id;
    QString name;
    if (!ui->tableWidget->selectedItems().isEmpty()) {
        // Obtém o item da célula selecionada
        QTableWidgetItem *item = ui->tableWidget->selectedItems().at(0);
        id = item->text();
    }

    telaOrcamentos = new DialogAreaOrcamentoSQL(this,"ALT",id);
    telaOrcamentos->exec();
}


void Dialogareaorcamentos::on_pushButtonApagarTODOS_clicked()
{
    QMessageBox::StandardButton resposta;
    QMessageBox msgBox(QMessageBox::Question,
                       "Confirmação",
                       "Tem certeza que deseja remover todos os orçamentos? Não será possível desfazer essa ação !",
                       QMessageBox::Yes | QMessageBox::No,
                       this);

    msgBox.setButtonText(QMessageBox::Yes, "Sim , Deletar"); // Alterando o texto do botão "Yes" para "Ok"
    msgBox.setButtonText(QMessageBox::No, "Não Deletar"); // Alterando o texto do botão "No" para "Não Deletar"

    resposta = static_cast<QMessageBox::StandardButton>(msgBox.exec());

    // Se o usuário confirmar
    if (resposta == QMessageBox::Yes) {
        // Executar o comando SQL para excluir todos os registros
        QSqlQuery query;
        query.prepare("DELETE FROM sales");

        if (query.exec()) {
            QMessageBox::information(this, "Sucesso", "Todos os orçamentos foram removidos com sucesso.");
        } else {
            QMessageBox::critical(this, "Erro", "Erro ao remover orçamentos: " + query.lastError().text());
        }
    }
}

