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
    explicit DialogSalvar(QWidget *parent = nullptr);
    ~DialogSalvar();

private slots:
    void on_pushButtonSalvar_clicked();

private:
    Ui::DialogSalvar *ui;
};

#endif // DIALOGSALVAR_H
