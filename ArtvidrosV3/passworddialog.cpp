#include "passworddialog.h"
#include "sqldatabasecontrol.h"
#include "ui_passworddialog.h"

PasswordDialog::PasswordDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PasswordDialog)
{
    ui->setupUi(this);
    connect(ui->pushButtonEntrar, &QPushButton::clicked, this, &PasswordDialog::on_pushButtonEntrar_clicked);

}

PasswordDialog::~PasswordDialog()
{
    delete ui;
}

void PasswordDialog::on_pushButtonEntrar_clicked()
{
    const QString password = ui->lineEdit_password->text();
    sqlDataBaseControl aux;

    if (aux.login("INICIAL",password)) {
        accept(); // Fecha o diálogo e permite que a mainwindow abra
    } else {
        QMessageBox::warning(this, "Senha incorreta", "Senha incorreta. Tente novamente.");
        ui->lineEdit_password->clear();
    }
}

