#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <dialogjanelas.h>
#include "dialogareadeprodutos.h"
#include "dialogareaorcamentos.h"
#include "dialogareaprecos.h"
#include "dialoghelp.h"
#include "dialogportas.h"
#include "adicionaisref.h"
#include "fechamentodepia.h"
#include "dialogboxs.h"
#include <moldura.h>
#include <vidroscomuns.h>
#include <QMainWindow>
#include <dialogareadevendas.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    bool checkPassword(const QString& password);

    bool checkPasswordVendas(const QString& password);

private slots:
    void on_pushButtonPortas_clicked();

    void on_pushButtonJanelas_clicked();

    void on_pushButtonFechamentoPia_clicked();

    void on_pushButtonBox_clicked();

    void on_pushButtonMoldura_clicked();

    void on_pushButtonVidrosComuns_clicked();

    void on_pushButtonOrcamentos_clicked();

    void on_actionOr_amentos_triggered();

    void on_actionPre_os_triggered();

    void on_actionVendas_triggered();

    void on_pushButtonAdicionais_clicked();

    void on_pushButtonProdutos_clicked();

    void on_pushButtonAreaPrecos_2_clicked();

    void on_pushButtonAreaVendas_clicked();

    void on_pushButtonAdmin_clicked();

private:
    Ui::MainWindow *ui;
    AdicionaisRef *telaAdicionais;
    DialogAreaPrecos *telaAreaPreco;
    Dialogareaorcamentos *telaAreaOrcamento;
    DialogAreaDeVendas *telaAreaVendas;
    DialogPortas *telaPortas; 
    DialogJanelas *telaJanelas;
    DialogBoxs *telaBox;
    DialogAreaDeProdutos *telaAreaProdutos;
    DialogHelp *telaHelp;

    Moldura *telaMoldura;
    VidrosComuns *telaVidrosComuns;
    FechamentoDePia *telaFechamento;


};
#endif // MAINWINDOW_H
