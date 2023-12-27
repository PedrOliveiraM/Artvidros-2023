#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <dialogjanelas.h>
#include "dialogareaorcamentos.h"
#include "dialogareaprecos.h"
#include "dialogportas.h"
#include "portadeabrir.h"
#include "adicionaisref.h"
#include "fechamentodepia.h"
#include "dialogboxs.h"
#include <moldura.h>
#include <vidroscomuns.h>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonPortas_clicked();

    void on_pushButtonJanelas_clicked();

    void on_pushButtonFechamentoPia_clicked();

    void on_pushButtonBox_clicked();

    void on_pushButtonMoldura_clicked();

    void on_pushButtonVidrosComuns_clicked();

    void on_pushButtonOrcamentos_clicked();

    void on_pushButtonAreaPrecos_clicked();

    void on_actionOr_amentos_triggered();

    void on_actionPre_os_triggered();

    void on_actionVendas_triggered();

    void on_pushButtonAdicionais_clicked();

private:
    Ui::MainWindow *ui;
    AdicionaisRef *telaAdicionais;
    DialogAreaPrecos *telaAreaPreco;
    Dialogareaorcamentos *telaAreaOrcamento;
    DialogPortas *telaPortas; 
    DialogJanelas *telaJanelas;
    DialogBoxs *telaBox;

    Moldura *telaMoldura;
    VidrosComuns *telaVidrosComuns;
    FechamentoDePia *telaFechamento;


};
#endif // MAINWINDOW_H
