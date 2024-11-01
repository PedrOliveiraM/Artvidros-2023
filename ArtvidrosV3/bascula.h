#ifndef BASCULA_H
#define BASCULA_H
#include <QDialog>
#include <adicionaisref.h>
#include <dialogsalvar.h>
#include <classpivobascula.h>
#include <QInputDialog>
namespace Ui {
class Bascola;
}

class Bascola : public QDialog
{
    Q_OBJECT

public:
    explicit Bascola(QWidget *parent = nullptr);
    ~Bascola();

    std::list<AdicionaisOBJ> listaDeAdicionais;
    std::list<AdicionaisOBJ> getListaDeAdicionais() const;
    void setListaDeAdicionais(const std::list<AdicionaisOBJ> &newListaDeAdicionais);

private slots:
    void on_pushButtonCalcular_clicked();

    void atualizarValoresImportados(const QString& valor, const QString& lucro);

    void on_pushButtonDesconto_clicked();

    void on_pushButtonSalvar_clicked();

    void on_pushButtonLimpar_clicked();

    void on_pushButtonRefatorando_clicked();

private:
    Ui::Bascola *ui;
    AdicionaisRef *telaAdicionais;
    DialogSalvar *telaSalvar;
};

#endif // BASCULA_H
