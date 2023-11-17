#ifndef PORTADEABRIR_H
#define PORTADEABRIR_H

#include <QDialog>

namespace Ui {
class PortaDeAbrir;
}

class PortaDeAbrir : public QDialog
{
    Q_OBJECT

public:
    explicit PortaDeAbrir(QWidget *parent = nullptr);
    ~PortaDeAbrir();

private slots:
    void on_pushButtonCalcular_clicked();

private:
    Ui::PortaDeAbrir *ui;
};

#endif // PORTADEABRIR_H
