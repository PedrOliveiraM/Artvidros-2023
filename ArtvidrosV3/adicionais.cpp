#include "adicionais.h"
#include "ui_adicionais.h"
#include "qsqldatabase.h"
#include <QSqlQuery>
#include <QString>
#include <adicionaisobj.h>
#include <sqldatabasecontrol.h>
Adicionais::Adicionais(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Adicionais)
{   
    ui->setupUi(this);
    ui->lineEditAltura->setInputMask("X.XX");
    ui->lineEditLargura->setInputMask("X.XX");
    ui->lineEditComprimento->setInputMask("X.XX");

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
    ui->tableWidget->setColumnCount(5);

    for (const AdicionaisOBJ& adicional : listaDeAdicionais) {
        QTableWidgetItem *itemCodigo = new QTableWidgetItem(const_cast<AdicionaisOBJ&>(adicional).geraID());
        QTableWidgetItem *itemProduto = new QTableWidgetItem(adicional.getName());
        QTableWidgetItem *itemQuant = new QTableWidgetItem(adicional.getQuant());
        QTableWidgetItem *itemPreco = new QTableWidgetItem(adicional.getPrice());
        QTableWidgetItem *itemLucro = new QTableWidgetItem(adicional.getProfit());

        // Obtendo a quantidade de linhas na grid
        int linha = ui->tableWidget->rowCount();
        // Incluindo uma linha na grid
        ui->tableWidget->insertRow(linha);
        ui->tableWidget->setItem(linha, 0, itemCodigo);
        ui->tableWidget->setItem(linha, 1, itemProduto);
        ui->tableWidget->setItem(linha, 2, itemQuant);
        ui->tableWidget->setItem(linha, 3, itemPreco);
        ui->tableWidget->setItem(linha, 4, itemLucro);
        ui->tableWidget->setRowHeight(linha, 20);
        linha++;
    }

    QStringList rotulo = {"Código", "Produto", "Quant", "Valor", "Lucro"};
                         ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->setHorizontalHeaderLabels(rotulo);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->setStyleSheet("QTableView {selection-background-color:orange}");
}

void Adicionais::on_pushButtonADDkit_clicked()
{
    QString quant = ui->spinBox_kit->text();
    ui->lineEditValor->setText(quant);
}


void Adicionais::on_pushButtonADDvidro_clicked()
{
    //adicionar vidro

    sqlDataBaseControl BD;
    AdicionaisOBJ aux;

    QString id = QString::number(aux.geraID().toInt() + 1);
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

