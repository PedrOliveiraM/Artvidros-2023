#ifndef SQLAREA_H
#define SQLAREA_H

#include <QDialog>

namespace Ui {
class SQLarea;
}

class SQLarea : public QDialog
{
    Q_OBJECT

public:
    explicit SQLarea(QWidget *parent = nullptr, QString type = "", QString id = "");
    ~SQLarea();

    QString tipo;

    QString getTipo() const;
    void setTipo(const QString &newTipo);

private slots:
    void on_pushButtonAdicionar_clicked();

    void on_pushButtonLimpar_clicked();

    void on_pushButtonVoltar_clicked();

    void on_pushButtonExcecao_clicked();

private:
    Ui::SQLarea *ui;
};

#endif // SQLAREA_H
