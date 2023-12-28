#include "dialogareaorcamentosql.h"
#include "sqldatabasecontrol.h"
#include "ui_dialogareaorcamentosql.h"
#include <QMessageBox>
#include <adicionaisobj.h>
DialogAreaOrcamentoSQL::DialogAreaOrcamentoSQL(QWidget *parent ,QString tipo,QString id,QString tela) :
    QDialog(parent),
    ui(new Ui::DialogAreaOrcamentoSQL)
{
    ui->setupUi(this);
    setType(tipo);
    setTela(tela);
    QSqlQuery query;
    //combo box id
    if (query.exec("SELECT * FROM sale")) {
        while (query.next()) {
            QString value = query.value(0).toString();  // Suponho que o valor desejado esteja na primeira coluna
            ui->comboBoxID->addItem(value);
        }
    }

    if (tipo == "ADD")
        ui->pushButtonAdicionar->setText("Adicionar");
    else{
        ui->pushButtonAdicionar->setText("Alterar");

        query.prepare("SELECT * FROM sale WHERE cod_sale = '" + id + "' ");
        if (query.exec()) {
            while (query.next()) {
                ui->comboBoxID->setCurrentText(id);
                ui->lineEditCliente->setText(query.value(1).toString());
                ui->lineEditProduct->setText(query.value(2).toString());
                ui->lineEditPrice->setText(query.value(3).toString());
                ui->lineEditProfit->setText(query.value(4).toString());
                ui->lineEditData->setText(query.value(5).toString());
                ui->lineEditVendedor->setText(query.value(6).toString());
            }
        } else {
            qDebug() << "Erro na consulta:";
        }
    }

}

DialogAreaOrcamentoSQL::~DialogAreaOrcamentoSQL()
{
    delete ui;
}

QString DialogAreaOrcamentoSQL::getTela() const
{
    return tela;
}

void DialogAreaOrcamentoSQL::setTela(const QString &newTela)
{
    tela = newTela;
}

QString DialogAreaOrcamentoSQL::getType() const
{
    return type;
}

void DialogAreaOrcamentoSQL::setType(const QString &newType)
{
    type = newType;
}

void DialogAreaOrcamentoSQL::on_pushButtonAdicionar_clicked()
{
    if (type == "ADD"){
        sqlDataBaseControl aux;
        AdicionaisOBJ aux2;

        QString cod = ui->comboBoxID->currentText();

        if (cod == "")
            cod = aux2.geraID();

        QString cliente = ui->lineEditCliente->text().toUpper();
        QString produto = ui->lineEditProduct->text();
        QString preco = ui->lineEditPrice->text();
        QString lucro = ui->lineEditProfit->text();
        QString data =ui->lineEditData->text();
        QString vendedor= ui->lineEditVendedor->text().toUpper();

        if(tela == "vendas"){
            if (aux.insertBDVendido(cod,cliente,produto,preco,lucro,data,vendedor))
                QMessageBox::about(this,"Mensagem","Salvo com Sucesso");
            else
                QMessageBox::warning(this,"Mensagem","Falha ao Salvar");
        }else{
            if (aux.insertBDSalvar(cod,cliente,produto,preco,lucro,data,vendedor))
                QMessageBox::about(this,"Mensagem","Salvo com Sucesso");
            else
                QMessageBox::warning(this,"Mensagem","Falha ao Salvar");
        }

        close();
    }else{
        sqlDataBaseControl aux;
        AdicionaisOBJ aux2;

        QString cod = ui->comboBoxID->currentText();

        if (cod == "")
            cod = aux2.geraID();

        QString cliente = ui->lineEditCliente->text().toUpper();
        QString produto = ui->lineEditProduct->text();
        QString preco = ui->lineEditPrice->text();
        QString lucro = ui->lineEditProfit->text();
        QString data =ui->lineEditData->text();
        QString vendedor= ui->lineEditVendedor->text().toUpper();

        if (tela == "vendas"){
            if (aux.toAlterBDVendido(cod,cliente,produto,preco,lucro,data,vendedor))
                QMessageBox::about(this,"Mensagem","Alterado com Sucesso");
            else
                QMessageBox::warning(this,"Mensagem","Falha ao Alterar");
        }else{
            if (aux.toAlterBDSalvar(cod,cliente,produto,preco,lucro,data,vendedor))
                QMessageBox::about(this,"Mensagem","Alterado com Sucesso");
            else
                QMessageBox::warning(this,"Mensagem","Falha ao Alterar");
        }


        close();
    }
}


void DialogAreaOrcamentoSQL::on_pushButtonMostrar_clicked()
{
    QSqlQuery query;
    QString id = ui->comboBoxID->currentText();
    if (id == ""){
        ui->labelNomeOrcamento->setText(" ");
        ui->lineEditCliente->setText(" ");
    }
    if (query.exec("SELECT * FROM sale where cod_sale = '"+id+"'")) {
        while (query.next()) {
            QString value = query.value(1).toString();  // Suponho que o valor desejado esteja na primeira coluna
            ui->labelNomeOrcamento->setText(value);
            ui->lineEditCliente->setText(value.toUpper());
        }
    }
    query.prepare("SELECT * FROM sale WHERE cod_sale = '" + id + "' ");
    if (query.exec()) {
        while (query.next()) {
            ui->comboBoxID->setCurrentText(id);
            ui->lineEditCliente->setText(query.value(1).toString());
            ui->lineEditProduct->setText(query.value(2).toString());
            ui->lineEditPrice->setText(query.value(3).toString());
            ui->lineEditProfit->setText(query.value(4).toString());
            ui->lineEditData->setText(query.value(5).toString());
            ui->lineEditVendedor->setText(query.value(6).toString());
        }
    } else {
        qDebug() << "Erro na consulta:";
    }
}

