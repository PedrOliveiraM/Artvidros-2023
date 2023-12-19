#include "sqlarea.h"
#include "qsqlquery.h"
#include "ui_sqlarea.h"
#include "sqldatabasecontrol.h"
#include <QMessageBox>

SQLarea::SQLarea(QWidget *parent,QString type, QString id) :
    QDialog(parent),
    ui(new Ui::SQLarea)
{

    ui->setupUi(this);
    this->setWindowTitle("ArtVidros");
    ui->lineEditTipo->setVisible(false);
    ui->checkBox->setVisible(false);
    setTipo(type);

    QString name = "";
    QSqlQuery query;

    std::vector<std::string> tipos = {
        "acabamento", "aluminio", "batefecha", "box", "cantoneira",
        "comum", "fechadura", "kitabrir", "kitboxcanto", "kitboxfrontal",
        "kitpia", "pelicula", "puxador", "temperado", "trinco"
    };

    // Loop para adicionar os itens à QComboBox
    for (const auto& tipo : tipos) {
        ui->comboBoxType->addItem(QString::fromStdString(tipo));
    }


    // separação das telas
    if (type == "add"){
        name = "Área de Inclusão";
        ui->lineEditID->setText(id);
        ui->lineEditID->setEnabled(false); // disable field
        ui->pushButtonAdicionar->setText("Adicionar");
    }else{
        name = "Área de Alteração";
        ui->pushButtonAdicionar->setText("Alterar");
        if (query.exec("SELECT * FROM product WHERE cod_product = '"+id+"' ")) {
            while (query.next()) {
                ui->lineEditID->setText(query.value(0).toString());
                ui->lineEditProduct->setText(query.value(1).toString());
                ui->lineEditPrice->setText(query.value(2).toString());
                ui->comboBoxType->setCurrentText(query.value(3).toString());
                ui->lineEditProductProfit->setText(query.value(4).toString());
                ui->lineEditID->setEnabled(false); // disable field
            }
        }else {
            qDebug()<<"NÃO FOI POSSIVEL MOSTRAR OS DADOS";
        }
    }
}

SQLarea::~SQLarea()
{
    delete ui;
}

QString SQLarea::getTipo() const
{
    return tipo;
}

void SQLarea::setTipo(const QString &newTipo)
{
    tipo = newTipo;
}

void SQLarea::on_pushButtonAdicionar_clicked()
{

    QString codID = ui->lineEditID->text();
    QString product = ui->lineEditProduct->text();
    QString price =  ui->lineEditPrice->text();
    price = price.replace(",", ".");
    QString type = ui->comboBoxType->currentText();
    QString profit = ui->lineEditProductProfit->text();
    profit = profit.replace(",", ".");


    if (ui->checkBox->isChecked()) {
        // O QCheckBox está marcado
        type = ui->lineEditTipo->text();
        qDebug() << "O checkbox está marcado!";
    }
    sqlDataBaseControl aux;
    if (tipo == "add"){
        if(aux.insertBD(codID,product,price,type,profit))
            QMessageBox::about(this,"","O Item foi Inserido");
        else
            QMessageBox::warning(this,"ERRO","O Item Não foi Inserido");

    }else{
        if(aux.toAlterBD(codID,product,price,type,profit))
            QMessageBox::about(this,"","O Item selecionado foi Alterado");
        else
            QMessageBox::warning(this,"ERRO","O Item selecionado Não foi Alterado");
    }
    close();
}




void SQLarea::on_pushButtonLimpar_clicked()
{
    QMessageBox::StandardButton resposta;
    resposta = QMessageBox::question(this, "Confirmação", "Tudo será apagado "
                                                          "Você tem certeza ?" ,
                                     QMessageBox::Yes | QMessageBox::No);

    if (resposta == QMessageBox::Yes) {
        if (tipo == "add"){
            ui->lineEditProduct->clear();
            ui->lineEditPrice->clear();
            ui->lineEditProductProfit->clear();
            ui->comboBoxType->setCurrentIndex(-1);
        }else{
            ui->lineEditProduct->clear();
            ui->lineEditPrice->clear();
            ui->lineEditProductProfit->clear();
            ui->comboBoxType->setCurrentIndex(-1);
        }
    }

}


void SQLarea::on_pushButtonVoltar_clicked()
{
    close();
}


void SQLarea::on_pushButtonExcecao_clicked()
{
   ui->lineEditTipo->setVisible(true);
   ui->checkBox->setVisible(true);
}

