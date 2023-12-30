#include "pdfarea.h"
#include "ui_pdfarea.h"
#include <pdfgenerator.h>

PDFarea::PDFarea(QWidget *parent,QString cliente, QString data) :
    QDialog(parent),
    ui(new Ui::PDFarea)
{
    ui->setupUi(this);
    this->setWindowTitle("ArtVidros");
    ui->lineEditCliente->setText(cliente);
    ui->lineEditData->setText(data);
    ui->lineEditCNPJ_CPF->setInputMask("XXX.XXX.XXX-XX");
    ui->lineEditTelefone->setInputMask("(XX) X XXXX-XXXX");
    ui->lineEditData->setInputMask("XX/XX/XXXX");
}

PDFarea::~PDFarea()
{
    delete ui;
}

QString PDFarea::getEndereco() const
{
    return endereco;
}

void PDFarea::setEndereco(const QString &newEndereco)
{
    endereco = newEndereco;
}

QString PDFarea::getTelefone() const
{
    return telefone;
}

void PDFarea::setTelefone(const QString &newTelefone)
{
    telefone = newTelefone;
}

QString PDFarea::getCpf() const
{
    return cpf;
}

void PDFarea::setCpf(const QString &newCpf)
{
    cpf = newCpf;
}

QString PDFarea::getCliente() const
{
    return cliente;
}

void PDFarea::setCliente(const QString &newCliente)
{
    cliente = newCliente;
}

QString PDFarea::getData() const
{
    return data;
}

void PDFarea::setData(const QString &newData)
{
    data = newData;
}

void PDFarea::on_pushButtonAdicionar_clicked()
{
    // retornar dados da tela e emitir o cpf

    setCliente(ui->lineEditCliente->text());
    setCpf(ui->lineEditCNPJ_CPF->text());
    setTelefone(ui->lineEditTelefone->text());
    setEndereco(ui->lineEditEndereco->text());
    setData(ui->lineEditData->text());

    close();
}


void PDFarea::on_pushButtonVoltar_clicked()
{
    close();
}


void PDFarea::on_pushButtonLimpar_clicked()
{
    ui->lineEditCNPJ_CPF->clear();
    ui->lineEditCliente->clear();
    ui->lineEditData->clear();
    ui->lineEditEndereco->clear();
    ui->lineEditTelefone->clear();
}

