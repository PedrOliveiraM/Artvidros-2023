#ifndef DIALOGAREAORCAMENTOS_H
#define DIALOGAREAORCAMENTOS_H

#include <QDialog>

namespace Ui {
class Dialogareaorcamentos;
}

class Dialogareaorcamentos : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogareaorcamentos(QWidget *parent = nullptr);
    ~Dialogareaorcamentos();

    void showBD();
private:
    Ui::Dialogareaorcamentos *ui;


};

#endif // DIALOGAREAORCAMENTOS_H
