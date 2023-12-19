<<<<<<< HEAD
#include "portade4folhas.h"
#include "ui_portade4folhas.h"

PortaDe4Folhas::PortaDe4Folhas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PortaDe4Folhas)
{
    ui->setupUi(this);
    ui->lineEditLargura->setInputMask("X.XX");
    ui->lineEditAltura->setInputMask("X.XX");
    ui->lineEditLucro->setEnabled(false);
    ui->lineEditValor->setEnabled(false);

    QString array[] = {"temperado", "puxador","fechadura", "aluminio" , "pelicula" , "trinco" , "rodana" , "tubo"};
    QSqlQuery query;

    for (const QString &tipo : array) {
        if (query.exec("SELECT * FROM product WHERE type = '" + tipo + "' ORDER BY name_product ASC")) {
            while (query.next()) {
                QString value = query.value(1).toString();  // Suponho que o valor desejado esteja na primeira coluna
                if (tipo == "temperado") {
                    ui->comboBoxVidros->addItem(value);
                } else if (tipo == "puxador") {
                    ui->comboBoxPuxador->addItem(value);
                }else if (tipo == "fechadura") {
                    ui->comboBoxFechadura->addItem(value);
                } else if (tipo == "aluminio") {
                    ui->comboBoxKitAluminio->addItem(value);
                } else if (tipo == "pelicula") {
                    ui->comboBoxPelicula->addItem(value);
                } else if (tipo == "trinco") {
                    ui->comboBoxTrinco->addItem(value);
                } else if (tipo == "rodana") {
                    ui->comboBoxRodana->addItem(value);
                }
            }
        } else {
            qDebug() << "Erro ao executar a consulta para tipo ";
        }
    }
}

PortaDe4Folhas::~PortaDe4Folhas()
{
    delete ui;
}

std::list<AdicionaisOBJ> PortaDe4Folhas::getListaDeAdicionais() const
{
    return listaDeAdicionais;
}

void PortaDe4Folhas::setListaDeAdicionais(const std::list<AdicionaisOBJ> &newListaDeAdicionais)
{
    listaDeAdicionais = newListaDeAdicionais;
}

void PortaDe4Folhas::on_pushButtonCalcular_clicked()
{
    //calcular orçamento
    float width = ui->lineEditLargura->text().toFloat();
    float height = ui->lineEditAltura->text().toFloat();
    QString glass = ui->comboBoxVidros->currentText();
    QString puller = ui->comboBoxPuxador->currentText();
    QString fechadura = ui->comboBoxFechadura->currentText();
    QString kitAluminio = ui->comboBoxKitAluminio->currentText();
    QString film = ui->comboBoxPelicula->currentText();
    QString latch = ui->comboBoxTrinco->currentText();
    QString rodana = ui->comboBoxRodana->currentText();

    ClassPortaDe4Folhas door(width,height,glass,puller,fechadura,kitAluminio,film,latch,rodana);
    sqlDataBaseControl aux;

    QString price = QString::number(door.calculatePrice());
    QString profit = QString::number(door.calculateProfit());

    ui->lineEditValor->setText(price);
    ui->lineEditLucro->setText(profit);
}

void PortaDe4Folhas::atualizarValoresImportados(const QString &valor, const QString &lucro)
{
    on_pushButtonCalcular_clicked();

    float price = ui->lineEditValor->text().toFloat();
    float profit = ui->lineEditLucro->text().toFloat();

    price = price + valor.toFloat();
    profit = profit + lucro.toFloat();

    ui->lineEditValor->setText(QString::number(price));
    ui->lineEditLucro->setText(QString::number(profit));

}


void PortaDe4Folhas::on_pushButtonDesconto_clicked()
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


void PortaDe4Folhas::on_pushButtonSalvar_clicked()
{
    QString width = ui->lineEditLargura->text();
    QString height = ui->lineEditAltura->text();
    QString glass = ui->comboBoxVidros->currentText();
    QString puller = ui->comboBoxPuxador->currentText();
    QString kitAluminio = ui->comboBoxKitAluminio->currentText();
    QString film = ui->comboBoxPelicula->currentText();
    QString latch = ui->comboBoxTrinco->currentText();

    QString price = ui->lineEditValor->text();
    QString profit = ui->lineEditLucro->text();

    QString produto = width + " x " + height +" "+ glass +" "+ puller +" "+ kitAluminio +" "+ film +" "+ latch;
    telaSalvar = new DialogSalvar(this,produto,price,profit);
    telaSalvar->exec();

}


void PortaDe4Folhas::on_pushButtonLimpar_clicked()
{
    ui->lineEditLargura->clear();
    ui->lineEditAltura->clear();
    ui->comboBoxVidros->setCurrentIndex(-1);
    ui->comboBoxFechadura->setCurrentIndex(-1);
    ui->comboBoxKitAluminio->setCurrentIndex(-1);
    ui->comboBoxPuxador->setCurrentIndex(-1);
    ui->comboBoxPelicula->setCurrentIndex(-1);
    ui->comboBoxTrinco->setCurrentIndex(-1);
    ui->lineEditLucro->clear();
    ui->lineEditValor->clear();
}


void PortaDe4Folhas::on_pushButtonRefatorando_clicked()
{
    AdicionaisRef telaAdicionais(this,listaDeAdicionais,"PortaDe4Folhas");
    telaAdicionais.exec();

    QString valorRetornado = telaAdicionais.getPrice();
    QString lucroRetornado = telaAdicionais.getLucro();

    listaDeAdicionais = telaAdicionais.getListaDeAdicionais();
    atualizarValoresImportados(valorRetornado,lucroRetornado);
}

=======
#include "portade4folhas.h"
#include "ui_portade4folhas.h"

PortaDe4Folhas::PortaDe4Folhas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PortaDe4Folhas)
{
    ui->setupUi(this);
    ui->setupUi(this);
    ui->lineEditLargura->setInputMask("X.XX");
    ui->lineEditAltura->setInputMask("X.XX");
    ui->lineEditLucro->setEnabled(false);
    ui->lineEditValor->setEnabled(false);

    QString array[] = {"temperado", "puxador","fechadura", "aluminio" , "pelicula" , "trinco" , "rodana" , "tubo"};
    QSqlQuery query;

    for (const QString &tipo : array) {
        if (query.exec("SELECT * FROM product WHERE type = '" + tipo + "' ORDER BY name_product ASC")) {
            while (query.next()) {
                QString value = query.value(1).toString();  // Suponho que o valor desejado esteja na primeira coluna
                if (tipo == "temperado") {
                    ui->comboBoxVidros->addItem(value);
                } else if (tipo == "puxador") {
                    ui->comboBoxPuxador->addItem(value);
                }else if (tipo == "fechadura") {
                    ui->comboBoxFechadura->addItem(value);
                } else if (tipo == "aluminio") {
                    ui->comboBoxKitAluminio->addItem(value);
                } else if (tipo == "pelicula") {
                    ui->comboBoxPelicula->addItem(value);
                } else if (tipo == "trinco") {
                    ui->comboBoxTrinco->addItem(value);
                } else if (tipo == "rodana") {
                    ui->comboBoxRodana->addItem(value);
                }
            }
        } else {
            qDebug() << "Erro ao executar a consulta para tipo ";
        }
    }
}

PortaDe4Folhas::~PortaDe4Folhas()
{
    delete ui;
}
std::list<AdicionaisOBJ> PortaDe4Folhas::getListaDeAdicionais() const
{
    return listaDeAdicionais;
}

void PortaDe4Folhas::setListaDeAdicionais(const std::list<AdicionaisOBJ> &newListaDeAdicionais)
{
    listaDeAdicionais = newListaDeAdicionais;
}


void PortaDe4Folhas::on_pushButtonCalcular_clicked()
{
    //calcular orçamento
    float width = ui->lineEditLargura->text().toFloat();
    float height = ui->lineEditAltura->text().toFloat();
    QString glass = ui->comboBoxVidros->currentText();
    QString puller = ui->comboBoxPuxador->currentText();
    QString fechadura = ui->comboBoxFechadura->currentText();
    QString kitAluminio = ui->comboBoxKitAluminio->currentText();
    QString film = ui->comboBoxPelicula->currentText();
    QString latch = ui->comboBoxTrinco->currentText();
    QString rodana = ui->comboBoxRodana->currentText();

    ClassPortaDe4Folhas door(width,height,glass,puller,fechadura,kitAluminio,film,latch,rodana);
    sqlDataBaseControl aux;

    QString price = QString::number(door.calculatePrice());
    QString profit = QString::number(door.calculateProfit());

    ui->lineEditValor->setText(price);
    ui->lineEditLucro->setText(profit);
}



void PortaDe4Folhas::atualizarValoresImportados(const QString &valor, const QString &lucro)
{

    on_pushButtonCalcular_clicked();

    float price = ui->lineEditValor->text().toFloat();
    float profit = ui->lineEditLucro->text().toFloat();

    price = price + valor.toFloat();
    profit = profit + lucro.toFloat();

    ui->lineEditValor->setText(QString::number(price));
    ui->lineEditLucro->setText(QString::number(profit));
}


void PortaDe4Folhas::on_pushButtonLimpar_clicked()
{
    ui->lineEditLucro->clear();
    ui->lineEditValor->clear();
}


void PortaDe4Folhas::on_pushButtonSalvar_clicked()
{
    QString width = ui->lineEditLargura->text();
    QString height = ui->lineEditAltura->text();
    QString glass = ui->comboBoxVidros->currentText();
    QString puller = ui->comboBoxPuxador->currentText();
    QString kitAluminio = ui->comboBoxKitAluminio->currentText();
    QString film = ui->comboBoxPelicula->currentText();
    QString latch = ui->comboBoxTrinco->currentText();

    QString price = ui->lineEditValor->text();
    QString profit = ui->lineEditLucro->text();

    QString produto = width + " x " + height +" "+ glass +" "+ puller +" "+ kitAluminio +" "+ film +" "+ latch;
    telaSalvar = new DialogSalvar(this,produto,price,profit);
    telaSalvar->exec();
}


void PortaDe4Folhas::on_pushButtonRefatorando_clicked()
{
    AdicionaisRef telaAdicionais(this,listaDeAdicionais,"PortaDe4Folhas");
    telaAdicionais.exec();

    QString valorRetornado = telaAdicionais.getPrice();
    QString lucroRetornado = telaAdicionais.getLucro();

    listaDeAdicionais = telaAdicionais.getListaDeAdicionais();
    atualizarValoresImportados(valorRetornado,lucroRetornado);
}

>>>>>>> origin/RefactV2
