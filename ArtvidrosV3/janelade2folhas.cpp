#include "janelade2folhas.h"
#include "ui_janelade2folhas.h"

JanelaDe2Folhas::JanelaDe2Folhas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::JanelaDe2Folhas)
{
    ui->setupUi(this);
    ui->lineEditLargura->setInputMask("X.XX");
    ui->lineEditAltura->setInputMask("X.XX");
    ui->lineEditLucro->setEnabled(false);
    ui->lineEditValor->setEnabled(false);

    QString array[] = {"temperado", "batefecha" , "pelicula" , "trinco","rodana"};
    QSqlQuery query;

    for (const QString &tipo : array) {
        if (query.exec("SELECT * FROM product WHERE type = '" + tipo + "' ORDER BY name_product ASC")) {
            while (query.next()) {
                QString value = query.value(1).toString();  // Suponho que o valor desejado esteja na primeira coluna
                if (tipo == "temperado") {
                    ui->comboBoxVidros->addItem(value);
                } else if (tipo == "batefecha") {
                    ui->comboBoxKit->addItem(value);
                } else if (tipo == "pelicula") {
                    ui->comboBoxPelicula->addItem(value);
                } else if (tipo == "trinco") {
                    ui->comboBoxTrinco->addItem(value);
                }else if (tipo == "rodana") {
                    ui->comboBoxRodana->addItem(value);
                }
            }
        } else {
            qDebug() << "Erro ao executar a consulta para tipo ";
        }
    }


}

JanelaDe2Folhas::~JanelaDe2Folhas()
{
    delete ui;
}

std::list<AdicionaisOBJ> JanelaDe2Folhas::getListaDeAdicionais() const
{
    return listaDeAdicionais;
}

void JanelaDe2Folhas::setListaDeAdicionais(const std::list<AdicionaisOBJ> &newListaDeAdicionais)
{
    listaDeAdicionais = newListaDeAdicionais;
}

void JanelaDe2Folhas::on_pushButtonRefatorando_clicked()
{
    AdicionaisRef telaAdicionais(this,listaDeAdicionais,"PortaDe2Folhas");
    telaAdicionais.exec();

    QString valorRetornado = telaAdicionais.getPrice();
    QString lucroRetornado = telaAdicionais.getLucro();

    listaDeAdicionais = telaAdicionais.getListaDeAdicionais();
    atualizarValoresImportados(valorRetornado,lucroRetornado);
}


void JanelaDe2Folhas::on_pushButtonCalcular_clicked()
{
    //calcular orçamento
    float width = ui->lineEditLargura->text().toFloat();
    float height = ui->lineEditAltura->text().toFloat();
    QString glass = ui->comboBoxVidros->currentText();
    QString film = ui->comboBoxPelicula->currentText();
    QString latch = ui->comboBoxTrinco->currentText();
    QString rodana = ui->comboBoxRodana->currentText();

   // ClassJanelaDe2Folhas door(width,height,glass,film,latch,rodana);
    sqlDataBaseControl aux;

    //QString price = QString::number(door.calculatePrice());
    //QString profit = QString::number(door.calculateProfit());

    //ui->lineEditValor->setText(price);
    //ui->lineEditLucro->setText(profit);
}
void JanelaDe2Folhas::atualizarValoresImportados(const QString &valor, const QString &lucro)
{
    on_pushButtonCalcular_clicked();

    float price = ui->lineEditValor->text().toFloat();
    float profit = ui->lineEditLucro->text().toFloat();

    price = price + valor.toFloat();
    profit = profit + lucro.toFloat();

    ui->lineEditValor->setText(QString::number(price));
    ui->lineEditLucro->setText(QString::number(profit));
}


void JanelaDe2Folhas::on_pushButtonDesconto_clicked()
{

}


void JanelaDe2Folhas::on_pushButtonLimpar_clicked()
{
    ui->lineEditLucro->clear();
    ui->lineEditValor->clear();
}


void JanelaDe2Folhas::on_pushButtonSalvar_clicked()
{
    QString width = ui->lineEditLargura->text();
    QString height = ui->lineEditAltura->text();
    QString glass = ui->comboBoxVidros->currentText();

    QString film = ui->comboBoxPelicula->currentText();
    QString latch = ui->comboBoxTrinco->currentText();

    QString price = ui->lineEditValor->text();
    QString profit = ui->lineEditLucro->text();

    QString produto = width + " x " + height +" "+ glass +" " + film +" "+ latch;
    telaSalvar = new DialogSalvar(this,produto,price,profit);
    telaSalvar->exec();
}

