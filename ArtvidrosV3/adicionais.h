#ifndef ADICIONAIS_H
#define ADICIONAIS_H

#include <QDialog>

namespace Ui {
class Adicionais;
}

class Adicionais : public QDialog
{
    Q_OBJECT

public:
    explicit Adicionais(QWidget *parent = nullptr);
    ~Adicionais();

private:
    Ui::Adicionais *ui;
};

#endif // ADICIONAIS_H
