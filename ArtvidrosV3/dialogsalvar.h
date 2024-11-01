#ifndef DIALOGSALVAR_H
#define DIALOGSALVAR_H

#include <QDialog>

namespace Ui {
class DialogSalvar;
}

class DialogSalvar : public QDialog
{
    Q_OBJECT

public:
    explicit DialogSalvar(QWidget *parent = nullptr , QString produto  = "" , QString price="" , QString profit ="");
    ~DialogSalvar();

private slots:

    void on_pushButtonAdicionar_clicked();

    void on_pushButtonLimpar_clicked();

    void on_pushButtonVoltar_clicked();

    void on_pushButtonMostrar_clicked();

private:
    Ui::DialogSalvar *ui;
};

#endif // DIALOGSALVAR_H
