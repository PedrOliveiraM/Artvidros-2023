#include "dialogsalvar.h"
#include "ui_dialogsalvar.h"
#include <QCalendarWidget>
#include <sqldatabasecontrol.h>
#include <QMessageBox>
#include <QSqlQuery>
#include <adicionaisobj.h>

DialogSalvar::DialogSalvar(QWidget *parent , QString produto , QString price , QString profit) :
    QDialog(parent),
    ui(new Ui::DialogSalvar)
{
    ui->setupUi(this);
    this->setWindowTitle("ArtVidros");
    ui->lineEditPrice->setText(price);
    ui->lineEditProfit->setText(profit);
    ui->lineEditProfit->setVisible(false);
    ui->label_profit->setVisible(false);
    QSqlQuery query;
    //combo box id
    if (query.exec("SELECT * FROM sale")) {
        while (query.next()) {
            QString value = query.value(0).toString();  // Suponho que o valor desejado esteja na primeira coluna
            ui->comboBoxID->addItem(value);
        }
    }

    QDate dataAtual = QDate::currentDate();
    QString dataFormatada = dataAtual.toString("dd/MM/yyyy");
    ui->lineEditData->setInputMask("xx/xx/xxxx");
    ui->lineEditProduct->setText(produto);
    // Inicializa o QLineEdit com a data atual formatada
    ui->lineEditData->setText(dataFormatada);
}

DialogSalvar::~DialogSalvar()
{
    delete ui;
}

void DialogSalvar::on_pushButtonAdicionar_clicked()
{
    sqlDataBaseControl aux;
    AdicionaisOBJ aux2;

    QString cod = ui->comboBoxID->currentText();
    if (cod == "")
        cod = aux2.geraID();
    QString cliente = ui->lineEditCliente->text().toUpper();
    QString produto = ui->lineEditProduct->text();
    QString preco = ui->lineEditPrice->text();
    QString lucro = ui->lineEditProfit->text();
    QString data =ui->lineEditData->text();
    QString vendedor= ui->lineEditVendedor->text().toUpper();

    if (aux.insertBDSalvar(cod,cliente,produto,preco,lucro,data,vendedor))
        QMessageBox::about(this,"Mensagem","Salvo com Sucesso");
    else
        QMessageBox::warning(this,"Mensagem","Falha ao Salvar");

    close();
}


void DialogSalvar::on_pushButtonLimpar_clicked()
{
    ui->comboBoxID->setCurrentIndex(0);
    ui->lineEditCliente->clear();
    ui->lineEditProduct->clear();
    ui->lineEditPrice->clear();
    ui->lineEditProfit->clear();
    ui->lineEditData->clear();
    ui->lineEditVendedor->clear();
}


void DialogSalvar::on_pushButtonVoltar_clicked()
{
    close();
}


void DialogSalvar::on_pushButtonMostrar_clicked()
{
    QSqlQuery query;
    QString id = ui->comboBoxID->currentText();
    if (id == ""){
        ui->labelNomeOrcamento->setText(" ");
        ui->lineEditCliente->setText(" ");
    }
    if (query.exec("SELECT * FROM sale where cod_sale = '"+id+"'")) {
        while (query.next()) {
            QString value = query.value(1).toString();  // Suponho que o valor desejado esteja na primeira coluna
            ui->labelNomeOrcamento->setText(value);
            ui->lineEditCliente->setText(value.toUpper());
        }
    }
}

