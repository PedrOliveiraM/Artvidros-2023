#ifndef DIALOGAREAPRECOS_H
#define DIALOGAREAPRECOS_H
#include "sqlarea.h"
#include <QDialog>
#include <QPainter>
#include <qdir.h>
#include <QDesktopServices>
#include <qurl.h>
#include <QDialog>
#include <sqlScreen.h>


namespace Ui {
class DialogAreaPrecos;
}

class DialogAreaPrecos : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAreaPrecos(QWidget *parent = nullptr);
    ~DialogAreaPrecos();

    QString returnTyperByOrder();

    bool getOrdenacaoCrescente() const;
    void setOrdenacaoCrescente(bool newOrdenacaoCrescente);

private:
    bool ordenacaoCrescente;

private slots:
    void on_pushButtonADD_clicked();

    void on_pushButtonALTER_clicked();

    void on_pushButtonDELETE_clicked();

    void on_pushButtonOrdem_clicked();

    void mostrarDadosOrdeandos(QString typeOrder , QString order);

private:
    Ui::DialogAreaPrecos *ui;
    SQLarea *telaSQL;
    void showBD();
};

#endif // DIALOGAREAPRECOS_H
