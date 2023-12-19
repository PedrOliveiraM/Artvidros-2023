#ifndef DIALOGJANELAS_H
#define DIALOGJANELAS_H
#include <janelade2folhas.h>
#include <QDialog>

namespace Ui {
class DialogJanelas;
}

class DialogJanelas : public QDialog
{
    Q_OBJECT

public:
    explicit DialogJanelas(QWidget *parent = nullptr);
    ~DialogJanelas();

private slots:
    void on_pushButtonJanela2Folhas_clicked();

    void on_pushButtonJanelaDe4Folhas_clicked();

    void on_pushButtonPivotante_clicked();

    void on_pushButtonBascola_clicked();

private:
    Ui::DialogJanelas *ui;
    JanelaDe2Folhas *janela2Folhas;
    //JanelaDe4Folhas *janela4Folha;
    //Bascola *bascola;
    //Pivotante *pivotante;

};

#endif // DIALOGJANELAS_H
