#include "dialogareadevendas.h"
#include "ui_dialogareadevendas.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <sqldatabasecontrol.h>
#include <qsqlerror.h>
#include <QSqlError>
DialogAreaDeVendas::DialogAreaDeVendas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAreaDeVendas)
{
    ui->setupUi(this);
    this->setWindowTitle("ArtVidros");
    showBD();
}

DialogAreaDeVendas::~DialogAreaDeVendas()
{
    delete ui;
}

void DialogAreaDeVendas::showBD()
{
    ui->tableWidget->setRowCount(0);
    QSqlQuery query;

    query.prepare("SELECT * FROM vendas");
    if (query.exec()){
        int linha = 0;
        ui->tableWidget->setColumnCount(7); // Definindo o número correto de colunas
        while (query.next()) {
            QTableWidgetItem *itemCodSale = new QTableWidgetItem(query.value(0).toString());
            QTableWidgetItem *itemCustomer = new QTableWidgetItem(query.value(1).toString());
            QTableWidgetItem *itemProduct = new QTableWidgetItem(query.value(2).toString());
            QTableWidgetItem *itemPrice = new QTableWidgetItem(query.value(3).toString());
            QTableWidgetItem *itemProfit = new QTableWidgetItem(query.value(4).toString());
            QTableWidgetItem *itemDate = new QTableWidgetItem(query.value(5).toString());
            QTableWidgetItem *itemSeller = new QTableWidgetItem(query.value(6).toString());

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

    atualizaCombo();
    on_pushButtonVerResultados_clicked();
}

void DialogAreaDeVendas::atualizaCombo()
{
    // Limpa os itens existentes nas ComboBoxes
    ui->comboBox_Dia->clear();
    ui->comboBox_Mes->clear();
    ui->comboBox_Ano->clear();
    ui->comboBox_Vendedor->clear();

    // Adiciona um item padrão
    ui->comboBox_Dia->addItem("Dia");
    ui->comboBox_Mes->addItem("Mês");
    ui->comboBox_Ano->addItem("Ano");
    ui->comboBox_Vendedor->addItem("Vendedor");

    // Consulta SQL para obter valores distintos
    QSqlQuery query;
    query.prepare("SELECT DISTINCT substr(data, 1, 2) AS dia, "
                  "                substr(data, 4, 2) AS mes, "
                  "                substr(data, 7, 4) AS ano "
                  "FROM vendas");

    if (query.exec()) {
        while (query.next()) {
            QString dia = query.value("dia").toString();
            QString mes = query.value("mes").toString();
            QString ano = query.value("ano").toString();

            // Adicione esses valores às ComboBoxes correspondentes
            if (ui->comboBox_Dia->findText(dia) == -1)
                ui->comboBox_Dia->addItem(dia);

            if (ui->comboBox_Mes->findText(mes) == -1)
                ui->comboBox_Mes->addItem(mes);

            if (ui->comboBox_Ano->findText(ano) == -1)
                ui->comboBox_Ano->addItem(ano);
        }

        QSqlQuery query;
        query.prepare("SELECT DISTINCT seller FROM vendas");

        if (query.exec()) {
            while (query.next()) {
                QString vendedor = query.value("seller").toString();

                if (ui->comboBox_Vendedor->findText(vendedor) == -1)
                    ui->comboBox_Vendedor->addItem(vendedor);
            }
        }

    } else {
        // Lide com erros durante a execução da consulta
        qDebug() << "Erro na consulta: " << query.lastError().text();
    }

}

void DialogAreaDeVendas::on_pushButton_Buscar_clicked()
{
    QString dia = ui->comboBox_Dia->currentText();
    QString mes = ui->comboBox_Mes->currentText();
    QString ano = ui->comboBox_Ano->currentText();
    QString vendedor = ui->comboBox_Vendedor->currentText();

    if (dia == "Dia")
        dia = "";
    if (mes == "Mês")
        mes = "";
    if (ano == "Ano")
        ano = "";
    if (vendedor == "Vendedor")
        vendedor = "";

    ui->tableWidget->setRowCount(0);
    QSqlQuery query;
    query.prepare("SELECT * FROM vendas "
                  "WHERE (substr(data, 1, 2) = :dia OR :dia IS NULL OR :dia = '') "
                  "AND (substr(data, 4, 2) = :mes OR :mes IS NULL OR :mes = '') "
                  "AND (substr(data, 7, 4) = :ano OR :ano IS NULL OR :ano = '') "
                  "AND (seller = :vendedor OR :vendedor IS NULL OR :vendedor = '')");

    query.bindValue(":dia", dia);
    query.bindValue(":mes", mes);
    query.bindValue(":ano", ano);
    query.bindValue(":vendedor", vendedor);

    // Restante do código permanece inalterado *********************************************************************************

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
    } else {
        qDebug() << "Erro na consulta: "<<query.lastError().text();
    }

    QStringList rotulo = {"Código Venda", "Cliente", "Produto", "Valor", "Lucro", "Data", "Vendedor", };
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

    on_pushButtonVerResultados_clicked();
}

void DialogAreaDeVendas::on_pushButtonVerResultados_clicked()
{

    QString dia = ui->comboBox_Dia->currentText();
    QString mes = ui->comboBox_Mes->currentText();
    QString ano = ui->comboBox_Ano->currentText();
    QString vendedor = ui->comboBox_Vendedor->currentText();

    // Verifica se os valores são os padrões e os transforma em strings vazias
    dia = (dia == "Dia") ? "" : dia;
    mes = (mes == "Mês") ? "" : mes;
    ano = (ano == "Ano") ? "" : ano;
    vendedor = (vendedor == "Vendedor") ? "" : vendedor;

    QSqlQuery query;

    if (!dia.isEmpty() || !mes.isEmpty() || !ano.isEmpty() || !vendedor.isEmpty()) {
        query.prepare("SELECT "
                      "SUM(CAST(price AS REAL)) AS total_price, "
                      "SUM(CAST(profit AS REAL)) AS total_profit "
                      "FROM vendas "
                      "WHERE (substr(data, 1, 2) = :dia OR :dia IS NULL OR :dia = '') "
                      "AND (substr(data, 4, 2) = :mes OR :mes IS NULL OR :mes = '') "
                      "AND (substr(data, 7, 4) = :ano OR :ano IS NULL OR :ano = '') "
                      "AND (seller = :vendedor OR :vendedor IS NULL OR :vendedor = '')");

        query.bindValue(":dia", dia);
        query.bindValue(":mes", mes);
        query.bindValue(":ano", ano);
        query.bindValue(":vendedor", vendedor);

        qDebug() << "Entrou na primeira consulta.";

        // Pegar os valores
        if (query.exec()) {
            if (query.next()) {
                QString totalSum = query.value("total_price").toString();
                QString lucroSum = query.value("total_profit").toString();

                // Convertendo para double
                double totalValue = totalSum.toDouble();
                double lucroValue = lucroSum.toDouble();

                // Limitando a 2 casas decimais
                totalSum = QString::number(totalValue, 'f', 2);
                lucroSum = QString::number(lucroValue, 'f', 2);

                ui->label_ValorTotal->setText(totalSum);
                ui->label_LucroTotal->setText(lucroSum);
            } else {
                qDebug() << "Nenhum resultado retornado.";
            }
        } else {
            qDebug() << "Erro na consulta: " << query.lastError().text();
        }
    } else {
        qDebug() << "Nenhum critério de consulta fornecido.";

        query.prepare("SELECT "
                      "SUM(CAST(price AS REAL)) AS total_price, "
                      "SUM(CAST(profit AS REAL)) AS total_profit "
                      "FROM vendas ");
            // Pegar os valores
            if (query.exec()) {
                if (query.next()) {
                    QString totalSum = query.value("total_price").toString();
                    QString lucroSum = query.value("total_profit").toString();

                    ui->label_ValorTotal->setText(totalSum);
                    ui->label_LucroTotal->setText(lucroSum);
                } else {
                    qDebug() << "Nenhum resultado retornado.";
                }
            } else {
                qDebug() << "Erro na consulta: " << query.lastError().text();
            }
    }


}

void DialogAreaDeVendas::on_pushButton_Adicionar_clicked()
{
    telaOrcamentos = new DialogAreaOrcamentoSQL(this,"ADD","","vendas");
    telaOrcamentos->exec();
    showBD();
}


void DialogAreaDeVendas::on_pushButtonAlterar_clicked()
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
        telaOrcamentos = new DialogAreaOrcamentoSQL(this,"ALT",id,"vendas");
        telaOrcamentos->exec();
    }else{
        QMessageBox::about(this,"Erro","Selecione a venda que deseja alterar.");
    }
showBD();
}


void DialogAreaDeVendas::on_pushButton_Excluir_clicked()
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

    if(aux.deleteBDVendido(id , name))
        QMessageBox::about(this,"","O Item selecionado foi Deletado");
    else
        QMessageBox::warning(this,"ERRO","O Item selecionado Não foi Deletado");

showBD();
}

