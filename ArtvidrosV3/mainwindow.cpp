#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QResizeEvent>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("ArtVidros");
    ui->statusbar->showMessage("Versão 4.0 10/2023");

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonPortas_clicked()
{
    //botao porta
    telaPortas = new DialogPortas;
    telaPortas->exec();
}


void MainWindow::on_pushButtonJanelas_clicked()
{
    //botao janela
    telaJanelas = new DialogJanelas;
    telaJanelas->exec();
}


void MainWindow::on_pushButtonFechamentoPia_clicked()
{
    //botao fechamento de pia
    telaFechamento = new FechamentoDePia;
    telaFechamento->exec();

}


void MainWindow::on_pushButtonBox_clicked()
{
    //botao box
    telaBox = new DialogBoxs;
    telaBox->exec();
}


void MainWindow::on_pushButtonMoldura_clicked()
{
    // botao moldura
    telaMoldura = new Moldura;
    telaMoldura->exec();
}


void MainWindow::on_pushButtonVidrosComuns_clicked()
{
    // botao vidros comuns
    telaVidrosComuns = new VidrosComuns;
    telaVidrosComuns->exec();
}


void MainWindow::on_pushButtonOrcamentos_clicked()
{
    telaAreaOrcamento = new Dialogareaorcamentos;
    telaAreaOrcamento->exec();
}


void MainWindow::on_pushButtonAdicionais_clicked()
{
    //adicionais
    std::list<AdicionaisOBJ> null;
    telaAdicionais = new AdicionaisRef(this,null,"Main");
    telaAdicionais->exec();

}


void MainWindow::on_pushButtonProdutos_clicked()
{
    telaAreaProdutos = new DialogAreaDeProdutos;
    telaAreaProdutos->exec();
}


void MainWindow::on_pushButtonAreaPrecos_2_clicked()
{
    bool ok;
    QString password = QInputDialog::getText(this, tr("Verificação de Senha"),
                                             tr("Digite a senha:"), QLineEdit::Password,
                                             "", &ok);
    if (ok && !password.isEmpty()) {
        if (checkPassword(password)) {
            telaAreaPreco = new DialogAreaPrecos;
            telaAreaPreco->exec();
            delete telaAreaPreco;
        } else {
            QMessageBox::warning(this, tr("Senha Incorreta"),
                                 tr("A senha que você digitou está incorreta. Tente novamente."));
        }
    } else if (ok && password.isEmpty()) {
        QMessageBox::warning(this, tr("Campo de senha vazio"),
                             tr("O campo de senha não pode estar vazio. Tente novamente."));
    }
}
bool MainWindow::checkPassword(const QString& password) {
    sqlDataBaseControl aux;
    return aux.login("PRECOS",password);
}

bool MainWindow::checkPasswordVendas(const QString &password)
{
    sqlDataBaseControl aux;
    return aux.login("VENDAS",password);
}


void MainWindow::on_pushButtonAreaVendas_clicked()
{
    bool ok;
    QString password = QInputDialog::getText(this, tr("Verificação de Senha"),
                                             tr("Digite a senha:"), QLineEdit::Password,
                                             "", &ok);
    if (ok && !password.isEmpty()) {
        if (checkPasswordVendas(password)) {
            telaAreaVendas = new DialogAreaDeVendas;
            telaAreaVendas->exec();
            delete telaAreaVendas;
        } else {
            QMessageBox::warning(this, tr("Senha Incorreta"),
                                 tr("A senha que você digitou está incorreta. Tente novamente."));
        }
    } else if (ok && password.isEmpty()) {
        QMessageBox::warning(this, tr("Campo de senha vazio"),
                             tr("O campo de senha não pode estar vazio. Tente novamente."));
    }
}


void MainWindow::on_pushButtonAdmin_clicked()
{
    telaHelp = new DialogHelp;
    telaHelp->exec();
    delete telaHelp;
}



void MainWindow::on_actionSenhas_triggered()
{
    telaSenhas = new DialogPasswords;
    telaSenhas->exec();
    delete telaSenhas;
}

