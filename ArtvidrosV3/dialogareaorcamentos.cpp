#include "dialogareaorcamentos.h"
#include "ui_dialogareaorcamentos.h"
#include <QSqlQuery>
Dialogareaorcamentos::Dialogareaorcamentos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogareaorcamentos)
{
    ui->setupUi(this);
    this->setWindowTitle("ArtVidros");
    showBD();
}

Dialogareaorcamentos::~Dialogareaorcamentos()
{
    delete ui;
}

void Dialogareaorcamentos::showBD()
{
    ui->tableWidget->setRowCount(0);
    QSqlQuery query;

    query.prepare("SELECT * FROM sale");
    if (query.exec()){
        int linha = 0;
        ui->tableWidget->setColumnCount(7); // Definindo o número correto de colunas
        while (query.next()) {
            QTableWidgetItem *itemCodSale = new QTableWidgetItem(query.value(0).toString());
            QTableWidgetItem *itemCustomer = new QTableWidgetItem(query.value(1).toString());
            QTableWidgetItem *itemProduct = new QTableWidgetItem(query.value(2).toString());
            QTableWidgetItem *itemPrice = new QTableWidgetItem(query.value(3).toString());
            QTableWidgetItem *itemProfit = new QTableWidgetItem(query.value(4).toString());
            QTableWidgetItem *itemDate = new QTableWidgetItem(query.value(5).toString());
            QTableWidgetItem *itemSeller = new QTableWidgetItem(query.value(6).toString());

            // Obtendo a quantidade de linhas tem na grid
            int linha = ui->tableWidget->rowCount();
            // Incluindo uma linha na grid
            ui->tableWidget->insertRow(linha);
            ui->tableWidget->setItem(linha, 0, itemCodSale);
            ui->tableWidget->setItem(linha, 1, itemCustomer);
            ui->tableWidget->setItem(linha, 2, itemProduct);
            ui->tableWidget->setItem(linha, 3, itemPrice);
            ui->tableWidget->setItem(linha, 4, itemProfit);
            ui->tableWidget->setItem(linha, 5, itemDate);
            ui->tableWidget->setItem(linha, 6, itemSeller);
            ui->tableWidget->setRowHeight(linha, 20);
            linha++;
        }
    }

    QStringList rotulo = {"Código Venda", "Cliente", "Produto", "Valor", "Lucro", "Data", "Vendedor"};
                         ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->setHorizontalHeaderLabels(rotulo);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

}

