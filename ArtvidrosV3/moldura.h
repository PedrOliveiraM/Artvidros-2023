#ifndef MOLDURA_H
#define MOLDURA_H
#include <adicionaisref.h>
#include <adicionaisobj.h>
#include <QDialog>

namespace Ui {
class Moldura;
}

class Moldura : public QDialog
{
    Q_OBJECT

public:
    explicit Moldura(QWidget *parent = nullptr);
    ~Moldura();

    std::list<AdicionaisOBJ> listaDeAdicionais;

private slots:
    void on_pushButtonCalcular_clicked();

    void on_pushButtonDesconto_clicked();

    void on_pushButtonSalvar_clicked();

    void on_pushButtonLimpar_clicked();

    void on_pushButtonRefatorando_clicked();

private:
    Ui::Moldura *ui;
};

#endif // MOLDURA_H
