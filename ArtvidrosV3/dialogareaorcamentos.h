#ifndef DIALOGAREAORCAMENTOS_H
#define DIALOGAREAORCAMENTOS_H
#include <dialogareaorcamentosql.h>
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

    void vendido();
private slots:
    void on_pushButton_Excluir_clicked();

    void on_pushButtonGerarPDF_clicked();

    void onLineEditTextChanged(const QString &text);

    void on_pushButton_Adicionar_clicked();

    void on_pushButtonLimpar_clicked();

    void on_pushButton_Alterar_clicked();

    void on_pushButtonApagarTODOS_clicked();

private:
    Ui::Dialogareaorcamentos *ui;
    PDFarea *telaPDF;
    DialogAreaOrcamentoSQL *telaOrcamentos;

};

#endif // DIALOGAREAORCAMENTOS_H
