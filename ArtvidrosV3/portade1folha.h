#ifndef PORTADE1FOLHA_H
#define PORTADE1FOLHA_H
#include <QDialog>
#include <adicionais.h>
#include <adicionaisref.h>
#include <dialogsalvar.h>
#include <adicionaisdef.h>
#include <classportade1folha.h>
#include <QMessageBox>
#include <QInputDialog>
#include <QDialog>

namespace Ui {
class PortaDe1Folha;
}

class PortaDe1Folha : public QDialog
{
    Q_OBJECT

public:
    explicit PortaDe1Folha(QWidget *parent = nullptr);
    ~PortaDe1Folha();

    std::list<AdicionaisOBJ> listaDeAdicionais;
    std::list<AdicionaisOBJ> getListaDeAdicionais() const;
    void setListaDeAdicionais(const std::list<AdicionaisOBJ> &newListaDeAdicionais);

private slots:
    void on_pushButtonCalcular_clicked();

    void atualizarValoresImportados(const QString& valor, const QString& lucro);

    void on_pushButtonLimpar_clicked();

    void on_pushButtonSalvar_clicked();

    void on_pushButtonRefatorando_clicked();

    void on_pushButtonDesconto_clicked();

private:
    Ui::PortaDe1Folha *ui;
    AdicionaisRef *telaAdicionais;
    DialogSalvar *telaSalvar;
};

#endif // PORTADE1FOLHA_H
