#ifndef DIALOGPASSWORDS_H
#define DIALOGPASSWORDS_H

#include <QDialog>

namespace Ui {
class DialogPasswords;
}

class DialogPasswords : public QDialog
{
    Q_OBJECT

public:
    explicit DialogPasswords(QWidget *parent = nullptr);
    ~DialogPasswords();

private slots:
    void on_pushButtonEntrar_clicked();

private:
    Ui::DialogPasswords *ui;
};

#endif // DIALOGPASSWORDS_H
