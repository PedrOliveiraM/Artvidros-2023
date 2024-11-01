#ifndef PORTADEABRIR_H
#define PORTADEABRIR_H
#include <adicionais.h>
#include <QDialog>
#include <adicionaisref.h>
#include <dialogsalvar.h>
#include <QMessageBox>
#include <QInputDialog>
namespace Ui {
class PortaDeAbrir;
}

class PortaDeAbrir : public QDialog
{
    Q_OBJECT

public:
    explicit PortaDeAbrir(QWidget *parent = nullptr);
    ~PortaDeAbrir();

    std::list<AdicionaisOBJ> listaDeAdicionais;

    std::list<AdicionaisOBJ> getListaDeAdicionais() const;
    void setListaDeAdicionais(const std::list<AdicionaisOBJ> &newListaDeAdicionais);

private slots:
    void on_pushButtonCalcular_clicked();

    void atualizarValoresImportados(const QString& valor, const QString& lucro);

    void on_pushButtonLimpar_clicked();

    void on_pushButtonSalvar_clicked();

    void on_pushButtonRefatorando_clicked();

    void on_pushButtonDesconto_clicked();

private:
    Ui::PortaDeAbrir *ui;
    AdicionaisRef *telaAdicionais;
    DialogSalvar *telaSalvar;
};

#endif // PORTADEABRIR_H
