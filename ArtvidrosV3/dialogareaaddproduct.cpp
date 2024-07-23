#include "dialogareaaddproduct.h"
#include "ui_dialogareaaddproduct.h"

DialogAreaAddProduct::DialogAreaAddProduct(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogAreaAddProduct)
{
    ui->setupUi(this);
}

DialogAreaAddProduct::~DialogAreaAddProduct()
{
    delete ui;
}
