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
}


void MainWindow::on_pushButtonFechamentoPia_clicked()
{
    //botao fechamento de pia

}


void MainWindow::on_pushButtonBox_clicked()
{
    //botao box
}


void MainWindow::on_pushButtonMoldura_clicked()
{
    // botao moldura
}


void MainWindow::on_pushButtonVidrosComuns_clicked()
{
    // botao vidros comuns
}


void MainWindow::on_pushButtonOrcamentos_clicked()
{
    telaAreaOrcamento = new Dialogareaorcamentos;
    telaAreaOrcamento->exec();
}


void MainWindow::on_pushButtonAreaPrecos_clicked()
{
    // botao area de preços

    telaAreaPreco = new DialogAreaPrecos;
    telaAreaPreco->exec();

}


void MainWindow::on_actionOr_amentos_triggered()
{
    telaAreaOrcamento = new Dialogareaorcamentos;
    telaAreaOrcamento->exec();
}


void MainWindow::on_actionPre_os_triggered()
{   //Preços
    telaAreaPreco = new DialogAreaPrecos;
    telaAreaPreco->exec();
}


void MainWindow::on_actionVendas_triggered()
{
    //vendas
}


void MainWindow::on_pushButtonAdicionais_clicked()
{
    //adicionais
    telaAdicionais = new Adicionais(this,"mainWindow");
    telaAdicionais->exec();

}


