#include "dialogareaprecos.h"
#include "ui_dialogareaprecos.h"
#include "sqldatabasecontrol.h"
#include "QMessageBox"
#include <QtSql>
#include<QString>
#include <QTabWidget>
DialogAreaPrecos::DialogAreaPrecos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAreaPrecos)
{
    ui->setupUi(this);
    this->setWindowTitle("ArtVidros");
    setOrdenacaoCrescente(true);
    showBD();
}

DialogAreaPrecos::~DialogAreaPrecos()
{
    delete ui;
}

QString DialogAreaPrecos::returnTyperByOrder()
{
    QString typeOrder = ui->comboBox_OrdenarPor->currentText();
    QString orderColumn;

    if (typeOrder == "Produto") {
        orderColumn = "name_product";
    } else if (typeOrder == "Valor") {
        orderColumn = "value";
    } else if (typeOrder == "Tipo") {
        orderColumn = "type";
    } else if (typeOrder == "Lucro") {
        orderColumn = "profit";
    } else {
        orderColumn = "cod_product";
    }
    qDebug()<<" converter ";
    return orderColumn;

}

bool DialogAreaPrecos::getOrdenacaoCrescente() const
{
    return ordenacaoCrescente;
}

void DialogAreaPrecos::setOrdenacaoCrescente(bool newOrdenacaoCrescente)
{
    ordenacaoCrescente = newOrdenacaoCrescente;
}

void DialogAreaPrecos::mostrarDadosOrdeandos(QString typeOrder , QString order)
{
   ui->tableWidget->setRowCount(0);
   QSqlQuery query;
   query.prepare("SELECT * FROM product ORDER BY "+typeOrder+" "+order+" ");
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

void DialogAreaPrecos::showBD()
{
    ui->tableWidget->setRowCount(0);
    QSqlQuery query;

    query.prepare("SELECT * FROM product");
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
    ui->tableWidget->setStyleSheet("QTableView QHeaderView::section { font-weight: bold; }");
}

void DialogAreaPrecos::on_pushButtonADD_clicked()
{
    QSqlQuery query;
    QString numberRow;

    if (query.exec("SELECT MAX(cod_product) FROM product")) {
        if (query.next()) {
            QVariant value = query.value(0);
            numberRow = QString::number(value.toInt() + 1);
        }
    } else {
        QMessageBox::about(this,"ERRO","Erro ao abrir a tela");
        qDebug() << "Erro na consulta:" << query.lastError().text();
    }

    telaSQL = new SQLarea(this,"add",numberRow);
    telaSQL->exec();
    on_pushButtonOrdem_clicked();
}


void DialogAreaPrecos::on_pushButtonALTER_clicked()
{
    QString row;

    if (!ui->tableWidget->selectedItems().isEmpty()) {
        // Obtém o item da célula selecionada
        QTableWidgetItem *item = ui->tableWidget->selectedItems().at(0);
        // Obtém o valor do texto da célula
        row = item->text();
    }
    if (row == ""){
        QMessageBox::about(this,"Erro","Nenhum item foi selecionado !");
    }else{
        telaSQL = new SQLarea(this,"alter",row);
        telaSQL->exec();
    }
    on_pushButtonOrdem_clicked();
}


void DialogAreaPrecos::on_pushButtonDELETE_clicked()
{
    QString id;
    if (!ui->tableWidget->selectedItems().isEmpty()) {
        // Obtém o item da célula selecionada
        QTableWidgetItem *item = ui->tableWidget->selectedItems().at(0);
        // Obtém o valor do texto da célula
        id = item->text();
    }
    sqlDataBaseControl aux;

    if(aux.deleteBD(id))
        QMessageBox::about(this,"","O Item selecionado foi Deletado");
    else
        QMessageBox::warning(this,"ERRO","O Item selecionado Não foi Deletado");

    on_pushButtonOrdem_clicked();
}


void DialogAreaPrecos::on_pushButtonOrdem_clicked()
{

    QString orderPor = "";
    if (ordenacaoCrescente) {
        // Lógica para ordenação crescente
        orderPor = "ASC";
        mostrarDadosOrdeandos(returnTyperByOrder(),orderPor);

    } else {
        // Lógica para ordenação decrescente
        orderPor = "DESC";
        mostrarDadosOrdeandos(returnTyperByOrder(),orderPor);
    }

    // Alterne o estado do botão para a próxima ordenação
    ordenacaoCrescente = !ordenacaoCrescente;
}

