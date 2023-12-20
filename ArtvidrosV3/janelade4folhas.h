#ifndef JANELADE4FOLHAS_H
#define JANELADE4FOLHAS_H
#include <QDialog>
#include <adicionaisref.h>
#include <dialogsalvar.h>
#include <classjanelade2folhas.h>

namespace Ui {
class JanelaDe4Folhas;
}

class JanelaDe4Folhas : public QDialog
{
    Q_OBJECT

public:
    explicit JanelaDe4Folhas(QWidget *parent = nullptr);
    ~JanelaDe4Folhas();

    std::list<AdicionaisOBJ> listaDeAdicionais;
    std::list<AdicionaisOBJ> getListaDeAdicionais() const;
    void setListaDeAdicionais(const std::list<AdicionaisOBJ> &newListaDeAdicionais);
private slots:
    void on_pushButtonRefatorando_clicked();

    void on_pushButtonCalcular_clicked();

    void atualizarValoresImportados(const QString& valor, const QString& lucro);

    void on_pushButtonDesconto_clicked();

    void on_pushButtonLimpar_clicked();

    void on_pushButtonSalvar_clicked();
private:
    Ui::JanelaDe4Folhas *ui;
    AdicionaisRef *telaAdicionais;
    DialogSalvar *telaSalvar;
};

#endif // JANELADE4FOLHAS_H
