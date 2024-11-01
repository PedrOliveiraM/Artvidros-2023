#ifndef DIALOGAREADEPRODUTOS_H
#define DIALOGAREADEPRODUTOS_H

#include "dialogsalvar.h"
#include <QDialog>

namespace Ui {
class DialogAreaDeProdutos;
}

class DialogAreaDeProdutos : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAreaDeProdutos(QWidget *parent = nullptr);
    ~DialogAreaDeProdutos();

    void showBD();

    void vender();
    void onLineEditTextChanged(const QString &text);

private:
    Ui::DialogAreaDeProdutos *ui;

    DialogSalvar *telaSalvar;
};

#endif // DIALOGAREADEPRODUTOS_H
