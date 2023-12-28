#ifndef DIALOGAREADEVENDAS_H
#define DIALOGAREADEVENDAS_H
#include <dialogareaorcamentosql.h>
#include <QDialog>

namespace Ui {
class DialogAreaDeVendas;
}

class DialogAreaDeVendas : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAreaDeVendas(QWidget *parent = nullptr);
    ~DialogAreaDeVendas();

    void showBD();
private slots:
    void on_pushButton_Buscar_clicked();

    void on_pushButtonVerResultados_clicked();

    void on_pushButton_Adicionar_clicked();

    void on_pushButtonAlterar_clicked();

    void on_pushButton_Excluir_clicked();

private:
    Ui::DialogAreaDeVendas *ui;
    DialogAreaOrcamentoSQL *telaOrcamentos;
};

#endif // DIALOGAREADEVENDAS_H
