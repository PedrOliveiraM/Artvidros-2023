#include "moldura.h"
#include "ui_moldura.h"
#include <QSqlQuery>
#include <classmoldura.h>

Moldura::Moldura(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Moldura)
{
    ui->setupUi(this);
    this->setWindowTitle("ArtVidros");
    ui->lineEditLargura->setInputMask("X.XX");
    ui->lineEditAltura->setInputMask("X.XX");
    ui->lineEditLucro->setEnabled(false);
    ui->lineEditValor->setEnabled(false);
    QString array[] = {"pendurador","acabamento"};
    QSqlQuery query;

    for (const QString &tipo : array) {
        if (query.exec("SELECT * FROM product WHERE type = '" + tipo + "' ORDER BY name_product ASC")) {
            while (query.next()) {
                QString value = query.value(1).toString();  // Suponho que o valor desejado esteja na primeira coluna
                if (tipo == "pendurador") {
                    ui->comboBoxAcessorios->addItem(value);
                }else if (tipo == "acabamento") {
                    ui->comboBoxAcabamento->addItem(value);
                }
            }
        } else {
            qDebug() << "Erro ao executar a consulta para tipo ";
        }
    }
}

Moldura::~Moldura()
{
    delete ui;
}

void Moldura::on_pushButtonCalcular_clicked()
{
    //calcular orçamento
    float width = ui->lineEditLargura->text().toFloat();
    float height = ui->lineEditAltura->text().toFloat();
    float valueMold = ui->lineEditValorMoldura->text().toFloat();
    QString espessura = ui->comboBoxEspessura->currentText();
    QString acabamento = ui->comboBoxAcabamento->currentText();
    QString acessorios = ui->comboBoxAcessorios->currentText();
    int quant = ui->spinBox_Acessorios->text().toInt();

    ClassMoldura moldu(width,height,valueMold,espessura,acabamento,acessorios,quant);
    sqlDataBaseControl aux;

    QString price = QString::number(moldu.calculatePrice());
    QString profit = QString::number(moldu.calculateProfit());

    ui->lineEditValor->setText(price);
    ui->lineEditLucro->setText(profit);
}


void Moldura::on_pushButtonDesconto_clicked()
{

}


void Moldura::on_pushButtonSalvar_clicked()
{

}


void Moldura::on_pushButtonLimpar_clicked()
{

}


void Moldura::on_pushButtonRefatorando_clicked()
{

}

