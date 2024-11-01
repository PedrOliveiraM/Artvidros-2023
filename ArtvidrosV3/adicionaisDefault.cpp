#include "adicionaisdefault.h"
#include "ui_adicionaisdefault.h"

adicionaisDefault::adicionaisDefault(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adicionaisDefault)
{
    ui->setupUi(this);
}

adicionaisDefault::~adicionaisDefault()
{
    delete ui;
}
