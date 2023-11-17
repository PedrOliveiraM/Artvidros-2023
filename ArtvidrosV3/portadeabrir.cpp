#include "portadeabrir.h"
#include "qsqlquery.h"
#include "ui_portadeabrir.h"
#include <classportadeabrir.h>
#include "qsqldatabase.h"
PortaDeAbrir::PortaDeAbrir(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PortaDeAbrir)
{
    ui->setupUi(this);
    ui->lineEditLargura->setInputMask("X.XX");
    ui->lineEditAltura->setInputMask("X.XX");

    // parte do bd

    QString array[] = {"temperado", "puxador", "kitabrir" , "pelicula" , "trinco"};
    QSqlQuery query;

    for (const QString &tipo : array) {
        if (query.exec("SELECT * FROM product WHERE type = '" + tipo + "'")) {
            while (query.next()) {
                QString value = query.value(1).toString();  // Suponho que o valor desejado esteja na primeira coluna
                if (tipo == "temperado") {
                    ui->comboBoxVidros->addItem(value);
                } else if (tipo == "puxador") {
                    ui->comboBoxPuxador->addItem(value);
                } else if (tipo == "kitabrir") {
                    ui->comboBoxKit->addItem(value);
                } else if (tipo == "pelicula") {
                    ui->comboBoxPelicula->addItem(value);
                } else if (tipo == "trinco") {
                    ui->comboBoxTrinco->addItem(value);
                }
            }
        } else {
            qDebug() << "Erro ao executar a consulta para tipo ";
        }
    }
}

PortaDeAbrir::~PortaDeAbrir()
{
    delete ui;
}

void PortaDeAbrir::on_pushButtonCalcular_clicked()
{
    //calcular orçamento
    float width = ui->lineEditLargura->text().toFloat();
    float height = ui->lineEditAltura->text().toFloat();
    QString glass = ui->comboBoxVidros->currentText();
    QString puller = ui->comboBoxPuxador->currentText();
    QString kit = ui->comboBoxKit->currentText();
    QString film = ui->comboBoxPelicula->currentText();
    QString latch = ui->comboBoxTrinco->currentText();

    ClassPortaDeAbrir door(width,height,glass,puller,kit,film,latch);

    QString price = QString::number(door.calculatePrice());
    QString profit = QString::number(door.calculateProfit());

    ui->lineEditValor->setText(price);
    ui->lineEditLucro->setText(profit);
}

