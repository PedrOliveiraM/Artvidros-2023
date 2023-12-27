#ifndef DIALOGAREAORCAMENTOS_H
#define DIALOGAREAORCAMENTOS_H
#include <pdfarea.h>
#include <QDialog>

namespace Ui {
class Dialogareaorcamentos;
}

class Dialogareaorcamentos : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogareaorcamentos(QWidget *parent = nullptr);
    ~Dialogareaorcamentos();

    void showBD();
private slots:
    void on_pushButton_Excluir_clicked();

    void on_pushButtonGerarPDF_clicked();

private:
    Ui::Dialogareaorcamentos *ui;
    PDFarea *telaPDF;

};

#endif // DIALOGAREAORCAMENTOS_H
