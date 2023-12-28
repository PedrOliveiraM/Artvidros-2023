#ifndef DIALOGAREAORCAMENTOSQL_H
#define DIALOGAREAORCAMENTOSQL_H

#include <QDialog>

namespace Ui {
class DialogAreaOrcamentoSQL;
}

class DialogAreaOrcamentoSQL : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAreaOrcamentoSQL(QWidget *parent = nullptr, QString tipo = "", QString id = "", QString tela = "");
    ~DialogAreaOrcamentoSQL();

    QString type;
    QString tela;

    QString getType() const;
    void setType(const QString &newType);

    QString getTela() const;
    void setTela(const QString &newTela);

private slots:
    void on_pushButtonAdicionar_clicked();

    void on_pushButtonMostrar_clicked();

private:
    Ui::DialogAreaOrcamentoSQL *ui;
};

#endif // DIALOGAREAORCAMENTOSQL_H
