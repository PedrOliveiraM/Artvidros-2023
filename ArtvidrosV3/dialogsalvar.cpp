#include "dialogsalvar.h"
#include "ui_dialogsalvar.h"
#include <QCalendarWidget>

DialogSalvar::DialogSalvar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogSalvar)
{
    ui->setupUi(this);

    QDate dataAtual = QDate::currentDate();
    QString dataFormatada = dataAtual.toString("dd/MM/yyyy");
    ui->lineEditData->setInputMask("xx/xx/xxxx");

    // Inicializa o QLineEdit com a data atual formatada
    ui->lineEditData->setText(dataFormatada);
}

DialogSalvar::~DialogSalvar()
{
    delete ui;
}

void DialogSalvar::on_pushButtonSalvar_clicked()
{

    QString cod = ui->lineEditCodigo->text();
    QString cliente = ui->lineEditCliente->text();
    QString preco = ui->lineEditPrice->text();
    QString lucro = ui->lineEditProfit->text();
    QString data =ui->lineEditData->text();
    QString vendedor= ui->lineEditVendedor->text();

}
