#include "vidroscomuns.h"
#include "ui_vidroscomuns.h"

VidrosComuns::VidrosComuns(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VidrosComuns)
{
    ui->setupUi(this);
    this->setWindowTitle("ArtVidros");
    ui->lineEditLargura->setInputMask("X.XX");
    ui->lineEditAltura->setInputMask("X.XX");
    ui->lineEditLucro->setEnabled(false);
    ui->lineEditValor->setEnabled(false);
    QString array[] = {"comum","acessorios","polido"};
    QSqlQuery query;

    for (const QString &tipo : array) {
        if (query.exec("SELECT * FROM product WHERE type = '" + tipo + "' ORDER BY name_product ASC")) {
            while (query.next()) {
                QString value = query.value(1).toString();  // Suponho que o valor desejado esteja na primeira coluna
                if (tipo == "comum") {
                    ui->comboBoxVidros->addItem(value);
                } else if (tipo == "acessorios") {
                    ui->comboBoxAcessorios->addItem(value);
                }else if (tipo == "polido") {
                    ui->comboBoxPolido->addItem(value);
                }
            }
        } else {
            qDebug() << "Erro ao executar a consulta para tipo ";
        }
    }
}

VidrosComuns::~VidrosComuns()
{
    delete ui;
}

std::list<AdicionaisOBJ> VidrosComuns::getListaDeAdicionais() const
{
    return listaDeAdicionais;
}

void VidrosComuns::setListaDeAdicionais(const std::list<AdicionaisOBJ> &newListaDeAdicionais)
{
    listaDeAdicionais = newListaDeAdicionais;
}

void VidrosComuns::on_pushButtonRefatorando_clicked()
{

}

void VidrosComuns::on_pushButtonCalcular_clicked()
{
    //calcular orçamento
    float width = ui->lineEditLargura->text().toFloat();
    float height = ui->lineEditAltura->text().toFloat();
    QString glass = ui->comboBoxVidros->currentText();
    QString acessorios = ui->comboBoxAcessorios->currentText();
    int quant = ui->spinBox_Acessorios->text().toInt();
    QString polido = ui->comboBoxPolido->currentText();

    ClassVidrosComuns vidro(width,height,glass,polido,acessorios);
    sqlDataBaseControl aux;

    QString price = QString::number(vidro.calculatePrice(quant));
    QString profit = QString::number(vidro.calculateProfit(quant));

    ui->lineEditValor->setText(price);
    ui->lineEditLucro->setText(profit);
}

void VidrosComuns::atualizarValoresImportados(const QString &valor, const QString &lucro)
{
    on_pushButtonCalcular_clicked();

    float price = ui->lineEditValor->text().toFloat();
    float profit = ui->lineEditLucro->text().toFloat();

    price = price + valor.toFloat();
    profit = profit + lucro.toFloat();

    ui->lineEditValor->setText(QString::number(price));
    ui->lineEditLucro->setText(QString::number(profit));

}

void VidrosComuns::on_pushButtonDesconto_clicked()
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

void VidrosComuns::on_pushButtonSalvar_clicked()
{
    QString width = ui->lineEditLargura->text();
    QString height = ui->lineEditAltura->text();
    QString glass = ui->comboBoxVidros->currentText();
    QString acessorios = ui->comboBoxAcessorios->currentText();
    int quant = ui->spinBox_Acessorios->text().toInt();
    QString polido = ui->comboBoxPolido->currentText();

    QString price = ui->lineEditValor->text();
    QString profit = ui->lineEditLucro->text();

    QString produto = glass + width + " x " + height +" "+ glass + " ";
    telaSalvar = new DialogSalvar(this,produto,price,profit);
    telaSalvar->exec();
}

void VidrosComuns::on_pushButtonLimpar_clicked()
{

}
