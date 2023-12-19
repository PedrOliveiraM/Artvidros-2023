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


void DialogPortas::on_pushButtonPortaDe2Folhas_clicked()
{
    porta2Folhas = new PortaDe2Folhas;
    porta2Folhas->exec();
}


void DialogPortas::on_pushButtonPortaDeCorrer_clicked()
{
    porta1Folha = new PortaDe1Folha;
    porta1Folha->exec();
}


void DialogPortas::on_pushButtonPortaDe4Folhas_clicked()
{
    porta4Folhas = new PortaDe4Folhas;
    porta4Folhas->exec();
}

