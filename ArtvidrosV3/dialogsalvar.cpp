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

}
