#include "boxfrontal.h"
#include "ui_boxfrontal.h"

BoxFrontal::BoxFrontal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BoxFrontal)
{
    ui->setupUi(this);
    this->setWindowTitle("ArtVidros");
    ui->lineEditLargura->setInputMask("X.XX");
    ui->lineEditAltura->setInputMask("X.XX");
    ui->lineEditLucro->setEnabled(false);
    ui->lineEditValor->setEnabled(false);

    QString array[] = {"box","pelicula","kitboxfrontal"};
    QSqlQuery query;

    for (const QString &tipo : array) {
        if (query.exec("SELECT * FROM product WHERE type = '" + tipo + "' ORDER BY name_product ASC")) {
            while (query.next()) {
                QString value = query.value(1).toString();  // Suponho que o valor desejado esteja na primeira coluna
                if (tipo == "box") {
                    ui->comboBoxVidros->addItem(value);
                } else if (tipo == "pelicula") {
                    ui->comboBoxPelicula->addItem(value);
                }else if (tipo == "kitboxfrontal") {
                    ui->comboBoxKit->addItem(value);
                }
            }
        } else {
            qDebug() << "Erro ao executar a consulta para tipo ";
        }
    }
}

BoxFrontal::~BoxFrontal()
{
    delete ui;
}

std::list<AdicionaisOBJ> BoxFrontal::getListaDeAdicionais() const
{
    return listaDeAdicionais;
}

void BoxFrontal::setListaDeAdicionais(const std::list<AdicionaisOBJ> &newListaDeAdicionais)
{
    listaDeAdicionais = newListaDeAdicionais;
}

void BoxFrontal::on_pushButtonRefatorando_clicked()
{
    AdicionaisRef telaAdicionais(this,listaDeAdicionais,"Bascula");
    telaAdicionais.exec();

    QString valorRetornado = telaAdicionais.getPrice();
    QString lucroRetornado = telaAdicionais.getLucro();

    listaDeAdicionais = telaAdicionais.getListaDeAdicionais();
    atualizarValoresImportados(valorRetornado,lucroRetornado);
}

void BoxFrontal::on_pushButtonCalcular_clicked()
{
    //calcular orçamento
    float width = ui->lineEditLargura->text().toFloat();
    float height = ui->lineEditAltura->text().toFloat();
    QString glass = ui->comboBoxVidros->currentText();
    QString kit = ui->comboBoxKit->currentText();
    QString film = ui->comboBoxPelicula->currentText();
    QString rodana = "rodana";
    QString tipo = "kitboxfrontal";
    ClassBox bascu(width,height,glass,kit,rodana,film);
    sqlDataBaseControl aux;

    QString price = QString::number(bascu.calculatePrice(tipo));
    QString profit = QString::number(bascu.calculateProfit(tipo));

    ui->lineEditValor->setText(price);
    ui->lineEditLucro->setText(profit);
}

void BoxFrontal::atualizarValoresImportados(const QString &valor, const QString &lucro)
{
    on_pushButtonCalcular_clicked();

    float price = ui->lineEditValor->text().toFloat();
    float profit = ui->lineEditLucro->text().toFloat();

    price = price + valor.toFloat();
    profit = profit + lucro.toFloat();

    ui->lineEditValor->setText(QString::number(price));
    ui->lineEditLucro->setText(QString::number(profit));
}

void BoxFrontal::on_pushButtonDesconto_clicked()
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

void BoxFrontal::on_pushButtonSalvar_clicked()
{
    QString width = ui->lineEditLargura->text();
    QString height = ui->lineEditAltura->text();
    QString glass = ui->comboBoxVidros->currentText();
    QString kit = ui->comboBoxKit->currentText();
    QString film = ui->comboBoxPelicula->currentText();

    QString price = ui->lineEditValor->text();
    QString profit = ui->lineEditLucro->text();

    QString produto = "Box " + width + " x " + height +" "+ glass +" "+ kit +" " + film +" ";
    telaSalvar = new DialogSalvar(this,produto,price,profit);
    telaSalvar->exec();
}

void BoxFrontal::on_pushButtonLimpar_clicked()
{
    ui->lineEditLargura->clear();
    ui->lineEditAltura->clear();
    ui->comboBoxVidros->setCurrentIndex(-1);
    ui->comboBoxKit->setCurrentIndex(-1);
    ui->comboBoxPelicula->setCurrentIndex(-1);

    ui->lineEditLucro->clear();
    ui->lineEditValor->clear();
}