#ifndef BOXCANTO_H
#define BOXCANTO_H
#include <adicionaisref.h>
#include <dialogsalvar.h>
#include <QInputDialog>
#include <classbox.h>
#include <QDialog>

namespace Ui {
class BoxCanto;
}

class BoxCanto : public QDialog
{
    Q_OBJECT

public:
    explicit BoxCanto(QWidget *parent = nullptr);
    ~BoxCanto();

    std::list<AdicionaisOBJ> listaDeAdicionais;

    std::list<AdicionaisOBJ> getListaDeAdicionais() const;
    void setListaDeAdicionais(const std::list<AdicionaisOBJ> &newListaDeAdicionais);

private slots:
    void on_pushButtonRefatorando_clicked();

    void on_pushButtonCalcular_clicked();

    void atualizarValoresImportados(const QString& valor, const QString& lucro);

    void on_pushButtonDesconto_clicked();

    void on_pushButtonSalvar_clicked();

    void on_pushButtonLimpar_clicked();


private:
    Ui::BoxCanto *ui;
    AdicionaisRef *telaAdicionais;
    DialogSalvar *telaSalvar;
};

#endif // BOXCANTO_H
