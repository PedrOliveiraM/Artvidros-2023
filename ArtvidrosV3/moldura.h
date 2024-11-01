#ifndef MOLDURA_H
#define MOLDURA_H
#include <adicionaisref.h>
#include <adicionaisobj.h>
#include <QDialog>
#include <dialogsalvar.h>
namespace Ui {
class Moldura;
}

class Moldura : public QDialog
{
    Q_OBJECT

public:
    explicit Moldura(QWidget *parent = nullptr);
    ~Moldura();

private slots:
    void on_pushButtonCalcular_clicked();

    void on_pushButtonDesconto_clicked();

    void on_pushButtonSalvar_clicked();

    void on_pushButtonLimpar_clicked();

private:
    Ui::Moldura *ui;
    DialogSalvar *telaSalvar;
};

#endif // MOLDURA_H
