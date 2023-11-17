#include "dialogareaorcamentos.h"
#include "ui_dialogareaorcamentos.h"

Dialogareaorcamentos::Dialogareaorcamentos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogareaorcamentos)
{
    ui->setupUi(this);
    this->setWindowTitle("ArtVidros");
}

Dialogareaorcamentos::~Dialogareaorcamentos()
{
    delete ui;
}
