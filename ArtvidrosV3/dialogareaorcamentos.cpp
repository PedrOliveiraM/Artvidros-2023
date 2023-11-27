#include "dialogareaorcamentos.h"
#include "ui_dialogareaorcamentos.h"
#include <QSqlQuery>
Dialogareaorcamentos::Dialogareaorcamentos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogareaorcamentos)
{
    ui->setupUi(this);
    this->setWindowTitle("ArtVidros");
}

Dialogareaorcamentos::~Dialogareaorcamentos()
{
    delete ui;
}

void Dialogareaorcamentos::showBD()
{
    ui->tableWidget->setRowCount(0);
    QSqlQuery query;

    query.prepare("SELECT * FROM orca");
    if (query.exec()){
        int linha = 0;
        ui->tableWidget->setColumnCount(5);
        while (query.next()) {
            QTableWidgetItem *itemCodigo = new QTableWidgetItem(query.value(0).toString());
            QTableWidgetItem *itemProduto = new QTableWidgetItem(query.value(1).toString());
            QTableWidgetItem *itemValor = new QTableWidgetItem(query.value(2).toString());
            QTableWidgetItem *itemTipo = new QTableWidgetItem(query.value(3).toString());
            QTableWidgetItem *itemLucro = new QTableWidgetItem(query.value(4).toString());

            //Obtendo a quantidade de linhas tem na grid
            int linha = ui->tableWidget->rowCount();
            //incluindo uma linha na grid
            ui->tableWidget->insertRow(linha);
            ui->tableWidget->setItem(linha,0,itemCodigo);
            ui->tableWidget->setItem(linha,1,itemProduto);
            ui->tableWidget->setItem(linha,2,itemValor);
            ui->tableWidget->setItem(linha,3,itemTipo);
            ui->tableWidget->setItem(linha,4,itemLucro);
            ui->tableWidget->setRowHeight(linha,20);
            linha++;
        }
    }
    QStringList rotulo = {"Código","Produto","Valor","Tipo","Lucro"};
                         ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->setHorizontalHeaderLabels(rotulo);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->setStyleSheet("QTableView {selection-background-color:orange}");
}

