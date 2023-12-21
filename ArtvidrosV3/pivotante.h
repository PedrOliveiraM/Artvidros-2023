#ifndef PIVOTANTE_H
#define PIVOTANTE_H
#include <QDialog>
#include <adicionaisref.h>
#include <dialogsalvar.h>
#include <classpivotantebasc.h>
#include <QInputDialog>
namespace Ui {
class Pivotante;
}

class Pivotante : public QDialog
{
    Q_OBJECT

public:
    explicit Pivotante(QWidget *parent = nullptr);
    ~Pivotante();

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
    Ui::Pivotante *ui;
    AdicionaisRef *telaAdicionais;
    DialogSalvar *telaSalvar;
};

#endif // PIVOTANTE_H
