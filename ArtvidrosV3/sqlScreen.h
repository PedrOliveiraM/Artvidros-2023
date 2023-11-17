#ifndef SQLADD_H
#define SQLADD_H
#include <QString>
#include <QDialog>

namespace Ui {
class SQLadd;
}

class SQLadd : public QDialog
{
    Q_OBJECT

public:
    explicit SQLadd(QWidget *parent = nullptr , QString type = "", QString id = "");
    ~SQLadd();

private:
    Ui::SQLadd *ui;
};

#endif // SQLADD_H
