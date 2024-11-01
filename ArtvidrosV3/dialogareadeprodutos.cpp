#include "dialogareadeprodutos.h"
#include "qpushbutton.h"
#include "sqldatabasecontrol.h"
#include "ui_dialogareadeprodutos.h"
#include "QMessageBox"
#include <QtSql>
#include<QString>
#include <QTabWidget>

DialogAreaDeProdutos::DialogAreaDeProdutos(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogAreaDeProdutos)
{
    ui->setupUi(this);
    connect(ui->lineEditPesquisa, &QLineEdit::textChanged, this, &DialogAreaDeProdutos::onLineEditTextChanged);
    showBD();
    this->setWindowTitle("ArtVidros");
}

void DialogAreaDeProdutos::showBD()
{
    ui->tableWidget->setRowCount(0);
    QSqlQuery query;

    query.prepare("SELECT * FROM product ORDER BY name_product");
    if (query.exec()){
        int linha = 0;
        ui->tableWidget->setColumnCount(4);
        while (query.next()) {
            QTableWidgetItem *itemCod = new QTableWidgetItem(query.value(0).toString());
            QTableWidgetItem *itemProduto = new QTableWidgetItem(query.value(1).toString());
            QTableWidgetItem *itemValor = new QTableWidgetItem(query.value(2).toString());
            QTableWidgetItem *itemCategoria = new QTableWidgetItem(query.value(3).toString());
            QPushButton *btnVender = new QPushButton;
            btnVender->setText("Vender");
            btnVender->setIcon(QIcon(":/imagens/vendas.png"));


            connect(btnVender, &QPushButton::clicked, this, &DialogAreaDeProdutos::vender);


            //Obtendo a quantidade de linhas tem na grid
            int linha = ui->tableWidget->rowCount();
            //incluindo uma linha na grid
            ui->tableWidget->insertRow(linha);
            ui->tableWidget->setItem(linha,0,itemCod);
            ui->tableWidget->setItem(linha,1,itemProduto);
            ui->tableWidget->setItem(linha,2,itemValor);
            ui->tableWidget->setItem(linha,3,itemCategoria);
            ui->tableWidget->setCellWidget(linha,4,btnVender);
            ui->tableWidget->setColumnWidth(4, 120);
            ui->tableWidget->setRowHeight(linha,30);
            linha++;
        }
    }
    QStringList rotulo = {"codigo","Produto","Valor","categoria",""};
    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->setHorizontalHeaderLabels(rotulo);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->setStyleSheet("QTableView {selection-background-color:orange}");
    ui->tableWidget->setStyleSheet("QTableView QHeaderView::section { font-weight: bold; }");
}

void DialogAreaDeProdutos::vender()
{
    if (!ui->tableWidget->selectedItems().isEmpty()) {
        QString id;
        QString produto;
        if (!ui->tableWidget->selectedItems().isEmpty()) {
            // Obtém o item da célula selecionada
            QTableWidgetItem *item = ui->tableWidget->selectedItems().at(0);
            QTableWidgetItem *product = ui->tableWidget->selectedItems().at(1);
            // Obtém o valor do texto da célula
            id = item->text();
            produto = product->text();
        }
        sqlDataBaseControl aux;
        QString profit = QString::number(aux.buscarNoBDprofitID(id));
        QString price = QString::number(aux.buscarNoBDpriceID(id));

        telaSalvar = new DialogSalvar(this,produto,price,profit);
        telaSalvar->exec();

    } else {
        QMessageBox::about(this,"ERRO","Nenhum item foi selecionado");
    }

}

DialogAreaDeProdutos::~DialogAreaDeProdutos()
{
    delete ui;
}




void DialogAreaDeProdutos::onLineEditTextChanged(const QString &text)
{
    // Limpar a tabela
    ui->tableWidget->setRowCount(0);

    // Consultar o banco de dados com base no texto inserido
    QSqlQuery query;
    query.prepare("SELECT * FROM product WHERE name_product LIKE :text");
    query.bindValue(":text", "%" + text + "%");

    if (query.exec()){
        int linha = 0;
        ui->tableWidget->setColumnCount(4);
        while (query.next()) {
            QTableWidgetItem *itemCod = new QTableWidgetItem(query.value(0).toString());
            QTableWidgetItem *itemProduto = new QTableWidgetItem(query.value(1).toString());
            QTableWidgetItem *itemValor = new QTableWidgetItem(query.value(2).toString());
            QPushButton *btnVender = new QPushButton;
            btnVender->setText("Vender");
            btnVender->setIcon(QIcon(":/imagens/vendas.png"));


            connect(btnVender, &QPushButton::clicked, this, &DialogAreaDeProdutos::vender);


            //Obtendo a quantidade de linhas tem na grid
            int linha = ui->tableWidget->rowCount();
            //incluindo uma linha na grid
            ui->tableWidget->insertRow(linha);
            ui->tableWidget->setItem(linha,0,itemCod);
            ui->tableWidget->setItem(linha,1,itemProduto);
            ui->tableWidget->setItem(linha,2,itemValor);
            ui->tableWidget->setCellWidget(linha,3,btnVender);
            ui->tableWidget->setColumnWidth(3, 120);
            ui->tableWidget->setRowHeight(linha,30);
            linha++;
        }
    }
    QStringList rotulo = {"codigo","Produto","Valor",""};
    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->setHorizontalHeaderLabels(rotulo);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->setStyleSheet("QTableView {selection-background-color:orange}");
    ui->tableWidget->setStyleSheet("QTableView QHeaderView::section { font-weight: bold; }");

    // Restante do código para definir larguras de colunas, estilos, etc.
    void showBD();
}
