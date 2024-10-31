#include "dialoglogin.h"
#include "QMessageBox"
#include "ui_dialoglogin.h"

DialogLogin::DialogLogin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogLogin)
{
    ui->setupUi(this);
}

DialogLogin::~DialogLogin()
{
    delete ui;
}

void DialogLogin::on_pushButtonEntrar_clicked()
{
    QString nome = ui->lineEditNome->text();
    QString senha = ui->lineEditSenha->text();


    if (nome == "Admin" && senha == "WWE2024"){
        w = new MainWindow;
        w->show();
    } else {
        QMessageBox::about(this,"Erro ao entrar","Senha ou usuario incorretos!");
    }
}

