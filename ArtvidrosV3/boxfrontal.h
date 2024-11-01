#ifndef BOXFRONTAL_H
#define BOXFRONTAL_H
#include <adicionaisref.h>
#include <dialogsalvar.h>
#include <QInputDialog>
#include <classbox.h>
#include <QDialog>

namespace Ui {
class BoxFrontal;
}

class BoxFrontal : public QDialog
{
    Q_OBJECT

public:
    explicit BoxFrontal(QWidget *parent = nullptr);
    ~BoxFrontal();

    std::list<AdicionaisOBJ> listaDeAdicionais;
    std::list<AdicionaisOBJ> getListaDeAdicionais() const;
    void setListaDeAdicionais(const std::list<AdicionaisOBJ> &newListaDeAdicionais);

private slots :

    void on_pushButtonRefatorando_clicked();

    void on_pushButtonCalcular_clicked();

    void atualizarValoresImportados(const QString& valor, const QString& lucro);

    void on_pushButtonDesconto_clicked();

    void on_pushButtonSalvar_clicked();

    void on_pushButtonLimpar_clicked();

private:
    Ui::BoxFrontal *ui;
    AdicionaisRef *telaAdicionais;
    DialogSalvar *telaSalvar;
};

#endif // BOXFRONTAL_H
