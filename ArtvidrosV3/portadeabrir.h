#ifndef PORTADEABRIR_H
#define PORTADEABRIR_H
#include <adicionais.h>
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

    void on_pushButtonAdicionais_clicked();

    void atualizarValoresImportados(const QString& valor, const QString& lucro);



private:
    Ui::PortaDeAbrir *ui;
    Adicionais *telaAdicionais;
};

#endif // PORTADEABRIR_H
