#ifndef JANELADE2FOLHAS_H
#define JANELADE2FOLHAS_H
#include <QDialog>
#include <adicionaisref.h>
#include <dialogsalvar.h>
#include <classjanelade2folhas.h>
namespace Ui {
class JanelaDe2Folhas;
}

class JanelaDe2Folhas : public QDialog
{
    Q_OBJECT

public:
    explicit JanelaDe2Folhas(QWidget *parent = nullptr);
    ~JanelaDe2Folhas();

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
    Ui::JanelaDe2Folhas *ui;
    AdicionaisRef *telaAdicionais;
    DialogSalvar *telaSalvar;
};

#endif // JANELADE2FOLHAS_H
