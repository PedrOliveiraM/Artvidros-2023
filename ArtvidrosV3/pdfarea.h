#ifndef PDFAREA_H
#define PDFAREA_H

#include <QDialog>

namespace Ui {
class PDFarea;
}

class PDFarea : public QDialog
{
    Q_OBJECT

public:
    explicit PDFarea(QWidget *parent = nullptr);
    ~PDFarea();

private slots:
    void on_pushButtonAdicionar_clicked();

private:
    Ui::PDFarea *ui;
};

#endif // PDFAREA_H
