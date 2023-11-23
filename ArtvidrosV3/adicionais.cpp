#include "adicionais.h"
#include "ui_adicionais.h"
#include "qsqldatabase.h"
#include <QSqlQuery>
#include <QString>
#include <adicionaisobj.h>
#include <sqldatabasecontrol.h>
#include <QMessageBox>
#include <algorithm>
Adicionais::Adicionais(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Adicionais)
{
    ui->setupUi(this);
    ui->lineEditAltura->setInputMask("X.XX");
    ui->lineEditLargura->setInputMask("X.XX");
    ui->lineEditComprimento->setInputMask("X.XX");

    QSpinBox* spinBoxes[] = {
        ui->spinBoxVidro,
        ui->spinBox_Aluminio,
        ui->spinBox_fechadura,
        ui->spinBox_kit,
        ui->spinBox_puxador,
        ui->spinBox_trinco
    };

    for (QSpinBox* spinBox : spinBoxes) {
        spinBox->setMinimum(1);
        spinBox->setValue(1);
    }

    QString array[] = {"temperado","aluminio", "kit", "kitabrir" ,"fechadura", "puxador", "trinco"};
    QSqlQuery query;

    for (const QString &tipo : array) {
        if (query.exec("SELECT * FROM product WHERE type = '" + tipo + "'")) {
            while (query.next()) {
                QString value = query.value(1).toString();  // Suponho que o valor desejado esteja na primeira coluna
                if (tipo == "temperado") {
                    ui->comboBoxVidros->addItem(value);

                } else if (tipo == "aluminio") {
                    ui->comboBoxAluminio->addItem(value);

                } else if (tipo == "kitabrir" || tipo == "kit") {
                    ui->comboBoxKit->addItem(value);

                } else if (tipo == "fechadura") {
                    ui->comboBoxFechadura->addItem(value);

                } else if (tipo == "puxador") {
                    ui->comboBoxPuxador->addItem(value);

                } else if (tipo == "trinco") {
                    ui->comboBoxTrinco->addItem(value);
                }
            }
        } else {
            qDebug() << "Erro ao executar a consulta para tipo ";
        }
    }

}


Adicionais::~Adicionais()
{
    delete ui;
}

void Adicionais::mostrarAdicoes()
{
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(6); // Adicionando uma coluna extra para os botões

    for (const AdicionaisOBJ& adicional : listaDeAdicionais) {
        int linha = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(linha);

        // Adicionando dados às células
        QTableWidgetItem *itemCodigo = new QTableWidgetItem(adicional.getId());
        QTableWidgetItem *itemProduto = new QTableWidgetItem(adicional.getName());
        QTableWidgetItem *itemQuant = new QTableWidgetItem(adicional.getQuant());
        QTableWidgetItem *itemPreco = new QTableWidgetItem(adicional.getPrice());
        QTableWidgetItem *itemLucro = new QTableWidgetItem(adicional.getProfit());

        // Adicionando widgets de botões à célula da coluna "Ações"
        QPushButton *btnRemover = new QPushButton;
        btnRemover->setIcon(QIcon(":/imagens/excluir.png"));
        connect(btnRemover, &QPushButton::clicked, this, &Adicionais::removerLinha);
        ui->tableWidget->setCellWidget(linha, 5, btnRemover);

        ui->tableWidget->setItem(linha, 0, itemCodigo);
        ui->tableWidget->setItem(linha, 1, itemProduto);
        ui->tableWidget->setItem(linha, 2, itemQuant);
        ui->tableWidget->setItem(linha, 3, itemPreco);
        ui->tableWidget->setItem(linha, 4, itemLucro);
        ui->tableWidget->setRowHeight(linha, 20);
        linha++;
    }

    QStringList rotulo = {"Código", "Produto", "Quant", "Valor", "Lucro", ""};
    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->setHorizontalHeaderLabels(rotulo);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->setStyleSheet("QTableView {selection-background-color:orange}");
    ui->tableWidget->setStyleSheet("QTableView QHeaderView::section { font-weight: bold; }");

    ui->label_price->setText(QString::number(getSumPrice()));
    ui->label_profit->setText(QString::number(getSumProfit()));
}

float Adicionais::getSumPrice()
{
    float soma = 0.0; // Inicialize a variável soma com 0.0
    for (const AdicionaisOBJ& adicional : listaDeAdicionais) {
        soma += adicional.getPrice().toFloat();
    }
    return soma;
}

float Adicionais::getSumProfit()
{
    float soma = 0.0; // Inicialize a variável soma com 0.0
    for (const AdicionaisOBJ& adicional : listaDeAdicionais) {
        soma += adicional.getProfit().toFloat();
    }
    return soma;

}

void Adicionais::removerLinha()
{
    // Obtém a linha selecionada
    int linhaSelecionada = ui->tableWidget->currentRow();

    // Verifica se uma linha está selecionada
    if (linhaSelecionada >= 0)
    {
        // Obtém o código na primeira coluna da linha selecionada
        QString codigoParaRemover = ui->tableWidget->item(linhaSelecionada, 0)->text();

        // Remove o item da listaDeAdicionais com base no código
        auto it = std::remove_if(listaDeAdicionais.begin(), listaDeAdicionais.end(), [&](const AdicionaisOBJ& objeto) {
            return objeto.getId() == codigoParaRemover;
        });

        // Remove o item da listaDeAdicionais
        listaDeAdicionais.erase(it, listaDeAdicionais.end());

        // Remove a linha da tableWidget
        ui->tableWidget->removeRow(linhaSelecionada);
    }
    mostrarAdicoes();
}
void Adicionais::on_pushButtonADDkit_clicked()
{

}


void Adicionais::on_pushButtonADDvidro_clicked()
{
    //adicionar vidro

    sqlDataBaseControl BD;
    AdicionaisOBJ aux;

    QString id = aux.geraID();
    float largura = ui->lineEditLargura->text().toFloat();
    float altura = ui->lineEditAltura->text().toFloat();

    QString vidro = ui->comboBoxVidros->currentText();
    QString tipo = "temperado";

    QString quant = ui->spinBoxVidro->text();
    int quantInt = quant.toInt();
    float price; // vai buscar
    float profit;// vai buscar

    price = BD.buscarNoBDprice(vidro,tipo);
    price = aux.calcularPreco(price,aux.metrage(largura,altura),quantInt);

    profit = BD.buscarNoBDprofit(vidro,tipo);
    profit = aux.calcularPreco(profit,aux.metrage(largura,altura),quantInt);

    QString QSprice = QString::number(price); // vai buscar
    QString QSprofit = QString::number(profit);// vai buscar

    AdicionaisOBJ adicional(id,vidro,quant,QSprice,QSprofit);

    listaDeAdicionais.push_front(adicional);

    mostrarAdicoes();
}

