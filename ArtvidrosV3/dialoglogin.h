#ifndef DIALOGLOGIN_H
#define DIALOGLOGIN_H

#include <mainwindow.h>
#include <QDialog>

namespace Ui {
class DialogLogin;
}

class DialogLogin : public QDialog
{
    Q_OBJECT

public:
    explicit DialogLogin(QWidget *parent = nullptr);
    ~DialogLogin();

private slots:
    void on_pushButtonEntrar_clicked();

private:
    Ui::DialogLogin *ui;
    MainWindow *w;
};

#endif // DIALOGLOGIN_H
