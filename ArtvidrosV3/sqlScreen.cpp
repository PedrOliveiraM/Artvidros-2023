#include "sqlScreen.h"
#include "ui_sqlScreen.h"
#include <qsqlquery.h>

SQLadd::SQLadd(QWidget *parent, QString type , QString id) :
    QDialog(parent),
    ui(new Ui::SQLadd)
{
    ui->setupUi(this);
    this->setWindowTitle("ArtVidros");
    QString name = "";
    QSqlQuery query;


    if (type == "add"){
        name = "Área de Inclusão";
    }else{
        name = "Área de Alteração";
        if (query.exec("SELECT * FROM product WHERE cod_product = '"+id+"' ")) {
            while (query.next()) {
                ui->lineEditID->setText(query.value(0).toString());
                ui->lineEditProduct->setText(query.value(1).toString());
                ui->lineEditPrice->setText(query.value(2).toString());
                ui->comboBoxType;// escolher o item da combobox que é = query.value(3)
                ui->lineEditProductProfit->setText(query.value(4).toString());
            }
        }else {
            qDebug()<<"NÃO FOI POSSIVEL MOSTRAR OS DADOS";
        }
    }
}

SQLadd::~SQLadd()
{
    delete ui;
}
