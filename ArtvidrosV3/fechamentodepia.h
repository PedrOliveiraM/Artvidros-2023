#ifndef FECHAMENTODEPIA_H
#define FECHAMENTODEPIA_H
#include <QDialog>
#include <adicionaisref.h>
#include <dialogsalvar.h>
#include <classfechamentodepia.h>
#include <QInputDialog>
namespace Ui {
class FechamentoDePia;
}

class FechamentoDePia : public QDialog
{
    Q_OBJECT

public:
    explicit FechamentoDePia(QWidget *parent = nullptr);
    ~FechamentoDePia();
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
    Ui::FechamentoDePia *ui;
    AdicionaisRef *telaAdicionais;
    DialogSalvar *telaSalvar;
};

#endif // FECHAMENTODEPIA_H
