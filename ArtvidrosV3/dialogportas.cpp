#include "dialogportas.h"
#include "ui_dialogportas.h"

DialogPortas::DialogPortas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogPortas)
{
    ui->setupUi(this);
    this->setWindowTitle("ArtVidros");
}

DialogPortas::~DialogPortas()
{
    delete ui;
}

void DialogPortas::on_pushButtonPortaDeAbrir_clicked()
{
    portaAbrir = new PortaDeAbrir;
    portaAbrir->exec();
}

