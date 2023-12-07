#ifndef DIALOGPORTAS_H
#define DIALOGPORTAS_H
#include <portade2folhas.h>
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

    void on_pushButtonPortaDe2Folhas_clicked();

private:
    Ui::DialogPortas *ui;
    PortaDeAbrir *portaAbrir;
    PortaDe2Folhas *porta2Folhas;
};

#endif // DIALOGPORTAS_H
