#ifndef ADICIONAIS_H
#define ADICIONAIS_H
#include <list>
#include <QDialog>
#include <adicionaisobj.h>

namespace Ui {
class Adicionais;
}

class Adicionais : public QDialog
{
    Q_OBJECT

public:
    explicit Adicionais(QWidget *parent = nullptr);
    ~Adicionais();

    void mostrarAdicoes();
    void atualizarValores();

    QString getValor();
    QString getLucro();

    float getSumPrice();
    float getSumProfit();

    std::list<AdicionaisOBJ> listaDeAdicionais;

signals:
    void valoresImportados(const QString& valor, const QString& lucro);

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
};

#endif // ADICIONAIS_H
