#include "dialogareaorcamentos.h"
#include "ui_dialogareaorcamentos.h"
#include <QSqlQuery>
#include <sqldatabasecontrol.h>
#include <QMessageBox>
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
    ui->tableWidget->setColumnWidth(0, 117);
    ui->tableWidget->setColumnWidth(1, 157);
    ui->tableWidget->setColumnWidth(2, 455);
    ui->tableWidget->setColumnWidth(3, 115);
    ui->tableWidget->setColumnWidth(4, 115);
    ui->tableWidget->setColumnWidth(5, 115);
    ui->tableWidget->setColumnWidth(6, 125);

    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->setHorizontalHeaderLabels(rotulo);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setStyleSheet("QTableView QHeaderView::section { font-weight: bold; }");
    ui->tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);


}


void Dialogareaorcamentos::on_pushButton_Excluir_clicked()
{
    QString id;
    QString name;
    if (!ui->tableWidget->selectedItems().isEmpty()) {
        // Obtém o item da célula selecionada
        QTableWidgetItem *item = ui->tableWidget->selectedItems().at(0);
        QTableWidgetItem *item2 = ui->tableWidget->selectedItems().at(1);
        // Obtém o valor do texto da célula
        id = item->text();
        name = item2->text();
    }
    sqlDataBaseControl aux;

    if(aux.deleteBDSalvar(id , name))
        QMessageBox::about(this,"","O Item selecionado foi Deletado");
    else
        QMessageBox::warning(this,"ERRO","O Item selecionado Não foi Deletado");

    showBD();
}

