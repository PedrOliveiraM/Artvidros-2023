#include "moldura.h"
#include "ui_moldura.h"
#include <QSqlQuery>
#include <classmoldura.h>
#include <QInputDialog>

Moldura::Moldura(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Moldura)
{
    ui->setupUi(this);
    this->setWindowTitle("ArtVidros");
    ui->lineEditLargura->setInputMask("X.XX");
    ui->lineEditAltura->setInputMask("X.XX");
    ui->lineEditLucro->setEnabled(false);
    ui->lineEditValor->setEnabled(false);
    ui->lineEditLucro->setVisible(false);
    ui->label_6->setVisible(false);
    QString array[] = {"pendurador","acabamento"};
    QSqlQuery query;

    for (const QString &tipo : array) {
        if (query.exec("SELECT * FROM product WHERE type = '" + tipo + "' ORDER BY name_product ASC")) {
            while (query.next()) {
                QString value = query.value(1).toString();  // Suponho que o valor desejado esteja na primeira coluna
                if (tipo == "pendurador") {
                    ui->comboBoxAcessorios->addItem(value);
                }else if (tipo == "acabamento") {
                    ui->comboBoxAcabamento->addItem(value);
                }
            }
        } else {
            qDebug() << "Erro ao executar a consulta para tipo ";
        }
    }
}

Moldura::~Moldura()
{
    delete ui;
}

void Moldura::on_pushButtonCalcular_clicked()
{
    //calcular orçamento
    float width = ui->lineEditLargura->text().toFloat();
    float height = ui->lineEditAltura->text().toFloat();
    float valueMold = ui->lineEditValorMoldura->text().toFloat();
    QString espessura = ui->comboBoxEspessura->currentText();
    QString acabamento = ui->comboBoxAcabamento->currentText();
    QString acessorios = ui->comboBoxAcessorios->currentText();
    int quant = ui->spinBox_Acessorios->text().toInt();

    ClassMoldura moldu(width,height,valueMold,espessura,acabamento,acessorios,quant);
    sqlDataBaseControl aux;

    QString price = QString::number(moldu.calculatePrice());
    QString profit = QString::number(moldu.calculateProfit());

    ui->lineEditValor->setText(price);
    ui->lineEditLucro->setText(profit);
}


void Moldura::on_pushButtonDesconto_clicked()
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


void Moldura::on_pushButtonSalvar_clicked()
{
    QString width = ui->lineEditLargura->text();
    QString height = ui->lineEditAltura->text();

    QString acessorio = ui->comboBoxAcessorios->currentText();
    QString acabamento = ui->comboBoxAcabamento->currentText();
    QString price = ui->lineEditValor->text();
    QString profit = ui->lineEditLucro->text();

    QString produto = "Moldura de :" + width + " x " + height +" acabamento em : "+ acabamento + " e " + acessorio ;

    telaSalvar = new DialogSalvar(this,produto,price,profit);
    telaSalvar->exec();
}


void Moldura::on_pushButtonLimpar_clicked()
{
    ui->lineEditAltura->clear();
    ui->lineEditLargura->clear();
    ui->lineEditLucro->clear();
    ui->lineEditValor->clear();
    ui->lineEditValorMoldura->clear();
    ui->comboBoxAcabamento->setCurrentIndex(-1);
    ui->comboBoxAcessorios->setCurrentIndex(-1);
    ui->comboBoxEspessura->setCurrentIndex(-1);
    ui->spinBox_Acessorios->clear();

}



