#include "pdfarea.h"
#include "ui_pdfarea.h"
#include <pdfgenerator.h>

PDFarea::PDFarea(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PDFarea)
{
    ui->setupUi(this);
}

PDFarea::~PDFarea()
{
    delete ui;
}

void PDFarea::on_pushButtonAdicionar_clicked()
{

}

