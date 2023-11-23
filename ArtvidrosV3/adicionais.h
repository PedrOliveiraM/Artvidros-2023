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

    std::list<AdicionaisOBJ> listaDeAdicionais;

private slots:
    void on_pushButtonADDkit_clicked();

    void on_pushButtonADDvidro_clicked();

private:
    Ui::Adicionais *ui;
};

#endif // ADICIONAIS_H
