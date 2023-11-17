#ifndef DIALOGPORTAS_H
#define DIALOGPORTAS_H

#include "portadeabrir.h"
#include <QDialog>

namespace Ui {
class DialogPortas;
}

class DialogPortas : public QDialog
{
    Q_OBJECT

public:
    explicit DialogPortas(QWidget *parent = nullptr);
    ~DialogPortas();

private slots:
    void on_pushButtonPortaDeAbrir_clicked();

private:
    Ui::DialogPortas *ui;
    PortaDeAbrir *portaAbrir;
};

#endif // DIALOGPORTAS_H
