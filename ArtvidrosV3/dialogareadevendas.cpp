#include "dialogareadevendas.h"
#include "ui_dialogareadevendas.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <sqldatabasecontrol.h>
#include <qsqlerror.h>
DialogAreaDeVendas::DialogAreaDeVendas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAreaDeVendas)
{
    ui->setupUi(this);
    this->setWindowTitle("ArtVidros");
    showBD();


    // colocar na combo box

    QSqlQuery query;
    query.prepare("SELECT DISTINCT substr(data, 1, 2) AS dia, "
                  "                substr(data, 4, 2) AS mes, "
                  "                substr(data, 7, 4) AS ano "
                  "FROM vendas");

    if (query.exec()) {
        while (query.next()) {
            QString dia = query.value("dia").toString();
            QString mes = query.value("mes").toString();
            QString ano = query.value("ano").toString();

            // Adicione esses valores às ComboBoxes correspondentes
            ui->comboBox_Dia->addItem(dia);
            ui->comboBox_Mes->addItem(mes);
            ui->comboBox_Ano->addItem(ano);
        }
    } else {
        qDebug() << "Erro na consulta: " << query.lastError().text();
    }

}

DialogAreaDeVendas::~DialogAreaDeVendas()
{
    delete ui;
}

void DialogAreaDeVendas::showBD()
{
    ui->tableWidget->setRowCount(0);
    QSqlQuery query;

    query.prepare("SELECT * FROM vendas");
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
/*
SELECT *
FROM sale
WHERE substr(data, 4, 2) = '12'  -- Substitua '05' pelo número do mês desejado
    AND substr(data, 7, 4) = '2023'



SELECT
    SUM(CAST(price AS REAL)) AS total_price,
    SUM(CAST(profit AS REAL)) AS total_profit
FROM sale
WHERE substr(data, 4, 2) = '12'  -- Substitua '05' pelo número do mês desejado
    AND substr(data, 7, 4) = '2023';  -- Substitua '2023' pelo ano desejado


*/

void DialogAreaDeVendas::on_pushButton_Buscar_clicked()
{
    QString dia = ui->comboBox_Dia->currentText();
    QString mes = ui->comboBox_Mes->currentText();
    QString ano = ui->comboBox_Ano->currentText();

    if (dia == "Dia")
        dia = "";
    if (mes == "Mês")
        mes = "";
    if (ano == "Ano")
        ano = "";

    ui->tableWidget->setRowCount(0);
    QSqlQuery query;
    query.prepare("SELECT * FROM vendas "
                  "WHERE (substr(data, 1, 2) = :dia OR :dia IS NULL OR :dia = '') "
                  "AND (substr(data, 4, 2) = :mes OR :mes IS NULL OR :mes = '') "
                  "AND (substr(data, 7, 4) = :ano OR :ano IS NULL OR :ano = '')");


    query.bindValue(":dia", dia);
    query.bindValue(":mes", mes);
    query.bindValue(":ano", ano);

    if (query.exec()) {
        int linha = 0;
        ui->tableWidget->setColumnCount(8); // Agora são 8 colunas

        while (query.next()) {
            QTableWidgetItem *itemCodSale = new QTableWidgetItem(query.value(0).toString());
            QTableWidgetItem *itemCustomer = new QTableWidgetItem(query.value(1).toString());
            QTableWidgetItem *itemProduct = new QTableWidgetItem(query.value(2).toString());
            QTableWidgetItem *itemPrice = new QTableWidgetItem(query.value(3).toString());
            QTableWidgetItem *itemProfit = new QTableWidgetItem(query.value(4).toString());
            QTableWidgetItem *itemDate = new QTableWidgetItem(query.value(5).toString());
            QTableWidgetItem *itemSeller = new QTableWidgetItem(query.value(6).toString());

            int linha = ui->tableWidget->rowCount();
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
    } else {
        qDebug() << "Erro na consulta: ";
    }

    QStringList rotulo = {"Código Venda", "Cliente", "Produto", "Valor", "Lucro", "Data", "Vendedor", };
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

void DialogAreaDeVendas::on_pushButtonVerResultados_clicked()
{
    QString dia = ui->comboBox_Dia->currentText();
    QString mes = ui->comboBox_Mes->currentText();
    QString ano = ui->comboBox_Ano->currentText();

    if (dia == "Dia")
        dia = "";
    if (mes == "Mês")
        mes = "";
    if (ano == "Ano")
        ano = "";

    QSqlQuery query;
    if (dia != "Dia" && mes != "Mes" && ano != "Ano") {
        query.prepare("SELECT "
                      "SUM(CAST(price AS REAL)) AS total_price, "
                      "SUM(CAST(profit AS REAL)) AS total_profit "
                      "FROM vendas "
                      "WHERE (substr(data, 1, 2) = :dia OR :dia IS NULL OR :dia = '') "
                      "AND (substr(data, 4, 2) = :mes OR :mes IS NULL OR :mes = '') "
                      "AND (substr(data, 7, 4) = :ano OR :ano IS NULL OR :ano = '')");

        query.bindValue(":dia", dia);
        query.bindValue(":mes", mes);
        query.bindValue(":ano", ano);
    } else {
        query.prepare("SELECT "
                      "SUM(CAST(price AS REAL)) AS total_price, "
                      "SUM(CAST(profit AS REAL)) AS total_profit "
                      "FROM vendas ");
    }

    if (query.exec()) {
        while (query.next()) {
            QString totalSum = query.value("total_price").toString();
            QString lucroSum = query.value("total_profit").toString();

            ui->label_ValorTotal->setText(totalSum);
            ui->label_LucroTotal->setText(lucroSum);
        }
    } else {
        qDebug() << "Erro na consulta: " << query.lastError().text();
    }

}

void DialogAreaDeVendas::on_pushButton_Adicionar_clicked()
{
    telaOrcamentos = new DialogAreaOrcamentoSQL(this,"ADD","","vendas");
    telaOrcamentos->exec();
}


void DialogAreaDeVendas::on_pushButtonAlterar_clicked()
{
    telaOrcamentos = new DialogAreaOrcamentoSQL(this,"ALT","","vendas");
    telaOrcamentos->exec();
}


void DialogAreaDeVendas::on_pushButton_Excluir_clicked()
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

    if(aux.deleteBDVendido(id , name))
        QMessageBox::about(this,"","O Item selecionado foi Deletado");
    else
        QMessageBox::warning(this,"ERRO","O Item selecionado Não foi Deletado");

    showBD();
}

