#ifndef PORTADE2FOLHAS_H
#define PORTADE2FOLHAS_H
#include <QDialog>
#include <adicionais.h>
#include <adicionaisref.h>
#include <dialogsalvar.h>
#include <adicionaisdef.h>
#include <classportade2folhas.h>
#include <QMessageBox>
#include <QInputDialog>

namespace Ui {
class PortaDe2Folhas;
}

class PortaDe2Folhas : public QDialog
{
    Q_OBJECT

public:
    explicit PortaDe2Folhas(QWidget *parent = nullptr);
    ~PortaDe2Folhas();

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
    Ui::PortaDe2Folhas *ui;
    AdicionaisRef *telaAdicionais;
    DialogSalvar *telaSalvar;
};

#endif // PORTADE2FOLHAS_H