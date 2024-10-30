#include "dialogpasswords.h"
#include "qmessagebox.h"
#include "sqldatabasecontrol.h"
#include "ui_dialogpasswords.h"

DialogPasswords::DialogPasswords(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogPasswords)
{
    ui->setupUi(this);
}

DialogPasswords::~DialogPasswords()
{
    delete ui;
}

void DialogPasswords::on_pushButtonEntrar_clicked()
{
    QString tipo = ui->comboBox->currentText();
    QString senhaAtual = ui->lineEdit_password->text();
    QString novaSenha = ui->lineEdit_new_password->text();

    sqlDataBaseControl aux;

    if(aux.login(tipo,senhaAtual)){
        if(aux.changePassword(tipo,senhaAtual,novaSenha))
            QMessageBox::about(this,"Sucesso","Senha Alterada Com Sucesso");
        else
            QMessageBox::warning(this,"Erro","A Senha Não foi Alterada, Verifique a senha antiga !");
    } else {
        QMessageBox::warning(this,"Erro","A senha antiga está incorreta!");
    }
}

