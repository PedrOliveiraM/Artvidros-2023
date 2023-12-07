#include "portade2folhas.h"
#include "ui_portade2folhas.h"

PortaDe2Folhas::PortaDe2Folhas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PortaDe2Folhas)
{
    ui->setupUi(this);
    ui->lineEditLargura->setInputMask("X.XX");
    ui->lineEditAltura->setInputMask("X.XX");
    ui->lineEditLucro->setEnabled(false);
    ui->lineEditValor->setEnabled(false);

    QString array[] = {"temperado", "puxador","fechadura", "aluminio" , "pelicula" , "trinco" , "rodana" , "tubo"};
    QSqlQuery query;

    for (const QString &tipo : array) {
        if (query.exec("SELECT * FROM product WHERE type = '" + tipo + "'")) {
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
                }else if (tipo == "tubo") {
                    ui->comboBoxTubo->addItem(value);
                }
            }
        } else {
            qDebug() << "Erro ao executar a consulta para tipo ";
        }
    }
}

PortaDe2Folhas::~PortaDe2Folhas()
{
    delete ui;
}



std::list<AdicionaisOBJ> PortaDe2Folhas::getListaDeAdicionais() const
{
    return listaDeAdicionais;
}

void PortaDe2Folhas::setListaDeAdicionais(const std::list<AdicionaisOBJ> &newListaDeAdicionais)
{
    listaDeAdicionais = newListaDeAdicionais;
}


void PortaDe2Folhas::on_pushButtonCalcular_clicked()
{
    //calcular orçamento
    float width = ui->lineEditLargura->text().toFloat();
    float height = ui->lineEditAltura->text().toFloat();
    QString glass = ui->comboBoxVidros->currentText();
    QString puller = ui->comboBoxPuxador->currentText();
    QString kitAluminio = ui->comboBoxKitAluminio->currentText();
    QString film = ui->comboBoxPelicula->currentText();
    QString latch = ui->comboBoxTrinco->currentText();
    QString tubo = ui->comboBoxTubo->currentText();
    QString rodana = ui->comboBoxRodana->currentText();

    ClassPortaDe2Folhas door(width,height,glass,puller,kitAluminio,film,latch,rodana,tubo);

    QString price = QString::number(door.calculatePrice());
    QString profit = QString::number(door.calculateProfit());

    ui->lineEditValor->setText(price);
    ui->lineEditLucro->setText(profit);
}



void PortaDe2Folhas::atualizarValoresImportados(const QString &valor, const QString &lucro)
{

    on_pushButtonCalcular_clicked();

    float price = ui->lineEditValor->text().toFloat();
    float profit = ui->lineEditLucro->text().toFloat();

    price = price + valor.toFloat();
    profit = profit + lucro.toFloat();

    ui->lineEditValor->setText(QString::number(price));
    ui->lineEditLucro->setText(QString::number(profit));
}


void PortaDe2Folhas::on_pushButtonLimpar_clicked()
{
    ui->lineEditLucro->clear();
    ui->lineEditValor->clear();
}


void PortaDe2Folhas::on_pushButtonSalvar_clicked()
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


void PortaDe2Folhas::on_pushButtonRefatorando_clicked()
{
    AdicionaisRef telaAdicionais(this,listaDeAdicionais,"PortaDe2Folhas");
    telaAdicionais.exec();

    QString valorRetornado = telaAdicionais.getPrice();
    QString lucroRetornado = telaAdicionais.getLucro();

    listaDeAdicionais = telaAdicionais.getListaDeAdicionais();
    atualizarValoresImportados(valorRetornado,lucroRetornado);
}
