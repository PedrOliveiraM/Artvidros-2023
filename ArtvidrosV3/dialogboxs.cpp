#include "dialogboxs.h"
#include "ui_dialogboxs.h"

DialogBoxs::DialogBoxs(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogBoxs)
{
    ui->setupUi(this);
    this->setWindowTitle("ArtVidros");
}

DialogBoxs::~DialogBoxs()
{
    delete ui;
}

void DialogBoxs::on_pushButtonBoxFrontal_clicked()
{
    telaBoxFrontal = new BoxFrontal;
    telaBoxFrontal->exec();
}


void DialogBoxs::on_pushButtonBoxCanto_clicked()
{
    telaBoxCanto = new BoxCanto;
    telaBoxCanto->exec();
}

