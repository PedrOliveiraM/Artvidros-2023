#include "adicionais.h"
#include "ui_adicionais.h"

Adicionais::Adicionais(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Adicionais)
{
    ui->setupUi(this);
}

Adicionais::~Adicionais()
{
    delete ui;
}
