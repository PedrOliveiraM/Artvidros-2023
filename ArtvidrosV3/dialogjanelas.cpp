#include "dialogjanelas.h"
#include "ui_dialogjanelas.h"

DialogJanelas::DialogJanelas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogJanelas)
{
    ui->setupUi(this);
}

DialogJanelas::~DialogJanelas()
{
    delete ui;
}

void DialogJanelas::on_pushButtonJanela2Folhas_clicked()
{
    janela2Folhas = new JanelaDe2Folhas(this);
    janela2Folhas->exec();
}


void DialogJanelas::on_pushButtonJanelaDe4Folhas_clicked()
{
    janela4Folhas = new JanelaDe4Folhas(this);
    janela4Folhas->exec();
}


void DialogJanelas::on_pushButtonPivotante_clicked()
{
    pivotante = new Pivotante(this);
    pivotante->exec();
}


void DialogJanelas::on_pushButtonBascola_clicked()
{
    bascula = new Bascola(this);
    bascula->exec();
}

