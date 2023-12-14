#include "portadeabrir.h"
#include "qsqlquery.h"
#include "ui_portadeabrir.h"
#include <classportadeabrir.h>
#include "qsqldatabase.h"
#include <adicionaisdef.h>
PortaDeAbrir::PortaDeAbrir(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PortaDeAbrir)
{
    ui->setupUi(this);
    ui->lineEditLargura->setInputMask("X.XX");
    ui->lineEditAltura->setInputMask("X.XX");
    ui->lineEditLucro->setEnabled(false);
    ui->lineEditValor->setEnabled(false);

    QString array[] = {"temperado", "puxador", "kitabrir" , "pelicula" , "trinco"};
    QSqlQuery query;

    for (const QString &tipo : array) {
        if (query.exec("SELECT * FROM product WHERE type = '" + tipo + "'")) {
            while (query.next()) {
                QString value = query.value(1).toString();  // Suponho que o valor desejado esteja na primeira coluna
                if (tipo == "temperado") {
                    ui->comboBoxVidros->addItem(value);
                } else if (tipo == "puxador") {
                    ui->comboBoxPuxador->addItem(value);
                } else if (tipo == "kitabrir") {
                    ui->comboBoxKit->addItem(value);
                } else if (tipo == "pelicula") {
                    ui->comboBoxPelicula->addItem(value);
                } else if (tipo == "trinco") {
                    ui->comboBoxTrinco->addItem(value);
                }
            }
        } else {
            qDebug() << "Erro ao executar a consulta para tipo ";
        }
    }
}

PortaDeAbrir::~PortaDeAbrir()
{
    delete ui;
}

std::list<AdicionaisOBJ> PortaDeAbrir::getListaDeAdicionais() const
{
    return listaDeAdicionais;
}

void PortaDeAbrir::setListaDeAdicionais(const std::list<AdicionaisOBJ> &newListaDeAdicionais)
{
    listaDeAdicionais = newListaDeAdicionais;
}


void PortaDeAbrir::on_pushButtonCalcular_clicked()
{
    //calcular orçamento
    float width = ui->lineEditLargura->text().toFloat();
    float height = ui->lineEditAltura->text().toFloat();
    QString glass = ui->comboBoxVidros->currentText();
    QString puller = ui->comboBoxPuxador->currentText();
    QString kit = ui->comboBoxKit->currentText();
    QString film = ui->comboBoxPelicula->currentText();
    QString latch = ui->comboBoxTrinco->currentText();

    ClassPortaDeAbrir door(width,height,glass,puller,kit,film,latch);

    QString price = QString::number(door.calculatePrice());
    QString profit = QString::number(door.calculateProfit());

    ui->lineEditValor->setText(price);
    ui->lineEditLucro->setText(profit);
}



void PortaDeAbrir::atualizarValoresImportados(const QString &valor, const QString &lucro)
{

    on_pushButtonCalcular_clicked();

    float price = ui->lineEditValor->text().toFloat();
    float profit = ui->lineEditLucro->text().toFloat();

    price = price + valor.toFloat();
    profit = profit + lucro.toFloat();

    ui->lineEditValor->setText(QString::number(price));
    ui->lineEditLucro->setText(QString::number(profit));
}


void PortaDeAbrir::on_pushButtonLimpar_clicked()
{
    ui->lineEditLucro->clear();
    ui->lineEditValor->clear();
}


void PortaDeAbrir::on_pushButtonSalvar_clicked()
{
    QString width = ui->lineEditLargura->text();
    QString height = ui->lineEditAltura->text();
    QString glass = ui->comboBoxVidros->currentText();
    QString puller = ui->comboBoxPuxador->currentText();
    QString kit = ui->comboBoxKit->currentText();
    QString film = ui->comboBoxPelicula->currentText();
    QString latch = ui->comboBoxTrinco->currentText();

    QString price = ui->lineEditValor->text();
    QString profit = ui->lineEditLucro->text();

    QString produto = width + " x " + height +" "+ glass +" "+ puller +" "+ kit +" "+ film +" "+ latch;
    telaSalvar = new DialogSalvar(this,produto,price,profit);
    telaSalvar->exec();
}


void PortaDeAbrir::on_pushButtonRefatorando_clicked()
{
    AdicionaisRef telaAdicionais(this,listaDeAdicionais,"PortaDeAbrir");
    telaAdicionais.exec();

    QString valorRetornado = telaAdicionais.getPrice();
    QString lucroRetornado = telaAdicionais.getLucro();

    listaDeAdicionais = telaAdicionais.getListaDeAdicionais();
    atualizarValoresImportados(valorRetornado,lucroRetornado);
}


void PortaDeAbrir::on_pushButtonDesconto_clicked()
{
    bool ok;
    double percentualDesconto = QInputDialog::getDouble(this, tr("Desconto"), tr("Digite a porcentagem de desconto:"), 0, 0, 100, 2, &ok);

    if (ok) {
        float valorAtual = ui->lineEditValor->text().toFloat();
        float lucroAtual = ui->lineEditLucro->text().toFloat();

        // Calcule os novos valores após o desconto
        float novoValor = valorAtual * (1.0 - percentualDesconto / 100.0);
        float novoLucro = lucroAtual * (1.0 - percentualDesconto / 100.0);

        // Atualize as caixas de texto
        ui->lineEditValor->setText(QString::number(novoValor));
        ui->lineEditLucro->setText(QString::number(novoLucro));
    }
}

