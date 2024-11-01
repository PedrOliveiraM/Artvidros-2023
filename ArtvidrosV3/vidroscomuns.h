#ifndef VIDROSCOMUNS_H
#define VIDROSCOMUNS_H

#include <QDialog>
#include <adicionaisref.h>
#include <dialogsalvar.h>
#include <classvidroscomuns.h>
#include <QInputDialog>
#include <vidroscomuns.h>

namespace Ui {
class VidrosComuns;
}

class VidrosComuns : public QDialog
{
    Q_OBJECT

public:
    explicit VidrosComuns(QWidget *parent = nullptr);
    ~VidrosComuns();

    std::list<AdicionaisOBJ> listaDeAdicionais;
    std::list<AdicionaisOBJ> getListaDeAdicionais() const;
    void setListaDeAdicionais(const std::list<AdicionaisOBJ> &newListaDeAdicionais);

private slots:

    void on_pushButtonRefatorando_clicked();

    void on_pushButtonCalcular_clicked();

    void atualizarValoresImportados(const QString& valor, const QString& lucro);

    void on_pushButtonDesconto_clicked();

    void on_pushButtonSalvar_clicked();

    void on_pushButtonLimpar_clicked();

private:
    Ui::VidrosComuns *ui;
    AdicionaisRef *telaAdicionais;
    DialogSalvar *telaSalvar;
};

#endif // VIDROSCOMUNS_H
