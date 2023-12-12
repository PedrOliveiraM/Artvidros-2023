#ifndef PORTADE4FOLHAS_H
#define PORTADE4FOLHAS_H
#include <QDialog>
#include <adicionais.h>
#include <adicionaisref.h>
#include <dialogsalvar.h>
#include "qsqlquery.h"
#include "qsqldatabase.h"
#include <adicionaisdef.h>
#include <classportade4folhas.h>

namespace Ui {
class PortaDe4Folhas;
}

class PortaDe4Folhas : public QDialog
{
    Q_OBJECT

public:
    explicit PortaDe4Folhas(QWidget *parent = nullptr);
    ~PortaDe4Folhas();

    std::list<AdicionaisOBJ> listaDeAdicionais;
    std::list<AdicionaisOBJ> getListaDeAdicionais() const;
    void setListaDeAdicionais(const std::list<AdicionaisOBJ> &newListaDeAdicionais);

private slots:
    void on_pushButtonCalcular_clicked();

    void atualizarValoresImportados(const QString& valor, const QString& lucro);

    void on_pushButtonLimpar_clicked();

    void on_pushButtonSalvar_clicked();

    void on_pushButtonRefatorando_clicked();

private:
    Ui::PortaDe4Folhas *ui;
    AdicionaisRef *telaAdicionais;
    DialogSalvar *telaSalvar;
};

#endif // PORTADE4FOLHAS_H
