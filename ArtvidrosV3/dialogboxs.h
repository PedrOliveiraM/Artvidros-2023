#ifndef DIALOGBOXS_H
#define DIALOGBOXS_H
#include <boxcanto.h>
#include <boxfrontal.h>
#include <QDialog>

namespace Ui {
class DialogBoxs;
}

class DialogBoxs : public QDialog
{
    Q_OBJECT

public:
    explicit DialogBoxs(QWidget *parent = nullptr);
    ~DialogBoxs();

private slots:
    void on_pushButtonBoxFrontal_clicked();

    void on_pushButtonBoxCanto_clicked();

private:
    Ui::DialogBoxs *ui;
    BoxCanto *telaBoxCanto;
    BoxFrontal *telaBoxFrontal;
};

#endif // DIALOGBOXS_H
