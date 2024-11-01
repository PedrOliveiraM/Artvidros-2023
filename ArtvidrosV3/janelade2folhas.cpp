#include "janelade2folhas.h"
#include "ui_janelade2folhas.h"
#include <QInputDialog>
JanelaDe2Folhas::JanelaDe2Folhas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::JanelaDe2Folhas)
{
    ui->setupUi(this);
    this->setWindowTitle("ArtVidros");
    ui->lineEditLargura->setInputMask("X.XX");
    ui->lineEditAltura->setInputMask("X.XX");
    ui->lineEditLucro->setEnabled(false);
    ui->lineEditValor->setEnabled(false);
    ui->lineEditLucro->setVisible(false);
    ui->label_6->setVisible(false);

    QString array[] = {"temperado", "batefecha" , "pelicula" , "trinco","kitaluminio"};
    QSqlQuery query;

    for (const QString &tipo : array) {
        if (query.exec("SELECT * FROM product WHERE type = '" + tipo + "' ORDER BY name_product ASC")) {
            while (query.next()) {
                QString value = query.value(1).toString();  // Suponho que o valor desejado esteja na primeira coluna
                if (tipo == "temperado") {
                    ui->comboBoxVidros->addItem(value);
                } else if (tipo == "batefecha") {
                    ui->comboBoxBateFecha->addItem(value);
                } else if (tipo == "pelicula") {
                    ui->comboBoxPelicula->addItem(value);
                } else if (tipo == "trinco") {
                    ui->comboBoxTrinco->addItem(value);
                }else if (tipo == "kitaluminio") {
                ui->comboBoxKit->addItem(value);
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
    QString kitAluminio = ui->comboBoxKit->currentText();
    float  height = ui->lineEditAltura->text().toFloat();


    AdicionaisRef telaAdicionais(this,listaDeAdicionais,"janelaDe2Folhas",kitAluminio,height);
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
    QString kit = ui->comboBoxKit->currentText();
    QString bateFecha = ui->comboBoxBateFecha->currentText();
    QString film = ui->comboBoxPelicula->currentText();
    QString latch = ui->comboBoxTrinco->currentText();
    QString rodana = "RODANA";
    ClassJanelaDe2Folhas windows(width,height,glass,bateFecha,kit,rodana,latch,film);
    sqlDataBaseControl aux;

    QString price = QString::number(windows.calculatePrice());
    QString profit = QString::number(windows.calculateProfit());

    ui->lineEditValor->setText(price);
    ui->lineEditLucro->setText(profit);

    on_pushButtonRefatorando_clicked();
}
void JanelaDe2Folhas::atualizarValoresImportados(const QString &valor, const QString &lucro)
{
    //calcular orçamento
    float width = ui->lineEditLargura->text().toFloat();
    float height = ui->lineEditAltura->text().toFloat();
    QString glass = ui->comboBoxVidros->currentText();
    QString kit = ui->comboBoxKit->currentText();
    QString bateFecha = ui->comboBoxBateFecha->currentText();
    QString film = ui->comboBoxPelicula->currentText();
    QString latch = ui->comboBoxTrinco->currentText();
    QString rodana = "RODANA";
    ClassJanelaDe2Folhas windows(width,height,glass,bateFecha,kit,rodana,latch,film);
    sqlDataBaseControl aux;

    QString price = QString::number(windows.calculatePrice());
    QString profit = QString::number(windows.calculateProfit());

    ui->lineEditValor->setText(price);
    ui->lineEditLucro->setText(profit);

    float price2 = ui->lineEditValor->text().toFloat();
    float profit2 = ui->lineEditLucro->text().toFloat();

    price2 = price2 + valor.toFloat();
    profit2 = profit2 + lucro.toFloat();

    ui->lineEditValor->setText(QString::number(price2));
    ui->lineEditLucro->setText(QString::number(profit2));
}


void JanelaDe2Folhas::on_pushButtonDesconto_clicked()
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


void JanelaDe2Folhas::on_pushButtonLimpar_clicked()
{
    ui->lineEditLargura->clear();
    ui->lineEditAltura->clear();
    ui->comboBoxVidros->setCurrentIndex(-1);
    ui->comboBoxKit->setCurrentIndex(-1);
    ui->comboBoxBateFecha->setCurrentIndex(-1);
    ui->comboBoxPelicula->setCurrentIndex(-1);
    ui->comboBoxTrinco->setCurrentIndex(-1);

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

