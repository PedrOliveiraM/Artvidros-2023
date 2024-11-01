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
    this->setWindowTitle("ArtVidros");
    ui->lineEditLargura->setInputMask("X.XX");
    ui->lineEditAltura->setInputMask("X.XX");
    ui->lineEditLucro->setEnabled(false);
    ui->lineEditValor->setEnabled(false);
    ui->lineEditLucro->setVisible(false);
    ui->label_6->setVisible(false);
    QString array[] = {"temperado", "puxador", "kitabrir" , "pelicula" , "trinco"};
    QSqlQuery query;

    for (const QString &tipo : array) {
        if (query.exec("SELECT * FROM product WHERE type = '" + tipo + "' ORDER BY name_product ASC")) {
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
    ui->lineEditLargura->clear();
    ui->lineEditAltura->clear();
    ui->comboBoxVidros->setCurrentIndex(-1);
    ui->comboBoxKit->setCurrentIndex(-1);
    ui->comboBoxPuxador->setCurrentIndex(-1);
    ui->comboBoxPelicula->setCurrentIndex(-1);
    ui->comboBoxTrinco->setCurrentIndex(-1);
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

    // Solicitar ao usuário que escolha entre desconto ou acréscimo
    QStringList items;
    items << tr("Desconto") << tr("Acréscimo");
    QString itemSelecionado = QInputDialog::getItem(this, tr("Escolha"), tr("Escolha o tipo de alteração:"), items, 0, false, &ok);

    if (!ok || itemSelecionado.isEmpty()) {
        return;  // O usuário cancelou a operação ou não escolheu um item
    }

    double percentualAlteracao = QInputDialog::getDouble(this, tr("Desconto/Acréscimo"), tr("Digite a porcentagem de %1:").arg(itemSelecionado), 0, -100, 100, 2, &ok);

    if (ok) {
        float valorAtual = ui->lineEditValor->text().toFloat();
        float lucroAtual = ui->lineEditLucro->text().toFloat();

        // Calcule os novos valores após o desconto ou acréscimo
        float fator = 1.0 + (itemSelecionado == "Acréscimo" ? percentualAlteracao / 100.0 : -percentualAlteracao / 100.0);
        float novoValor = valorAtual * fator;
        float novoLucro = lucroAtual * fator;

        // Atualize as caixas de texto
        ui->lineEditValor->setText(QString::number(novoValor));
        ui->lineEditLucro->setText(QString::number(novoLucro));
    }
}

