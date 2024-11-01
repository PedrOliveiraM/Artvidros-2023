#ifndef ADICIONAIS_H
#define ADICIONAIS_H
#include <list>
#include <QDialog>
#include <adicionaisobj.h>
#include <dialogsalvar.h>

namespace Ui {
class Adicionais;
}

class Adicionais : public QDialog
{
    Q_OBJECT

public:
    explicit Adicionais(QWidget *parent = nullptr);
    ~Adicionais();


    QString tipo;
    std::list<AdicionaisOBJ> listaDeAdicionais;

    void mostrarAdicoes();
    void atualizarValores();

    QString getValor();
    QString getLucro();


    float getSumPrice();
    float getSumProfit();

    void exporAdicionais();

private slots:
    void removerLinha();

    void on_pushButtonADDvidro_clicked();

    void on_pushButtonADDkit_clicked();

    void on_pushButtonADDaluminios_clicked();

    void on_pushButtonADDfechadura_clicked();

    void on_pushButtonADDpuxador_clicked();

    void on_pushButtonADDtrinco_clicked();

    void on_pushButtonIncluirNoOrcamento_clicked();

private:
    Ui::Adicionais *ui;
    DialogSalvar *telaSalvar;
};

#endif // ADICIONAIS_H
