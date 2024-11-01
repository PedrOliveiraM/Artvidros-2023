#ifndef ADICIONAISREF_H
#define ADICIONAISREF_H
#include <QSqlQuery>
#include <QString>
#include <adicionaisobj.h>
#include <sqldatabasecontrol.h>
#include <QMessageBox>
#include <algorithm>
#include <list>
#include <QDialog>
#include <adicionaisobj.h>
#include <dialogsalvar.h>
#include "dialogareadeprodutos.h"
namespace Ui {
class AdicionaisRef;
}

class AdicionaisRef : public QDialog
{
    Q_OBJECT

public:
    explicit AdicionaisRef(QWidget *parent = nullptr , const std::list<AdicionaisOBJ> &lista = std::list<AdicionaisOBJ>() , QString tipo = " " , QString kitAluminio = "", float altura = 0.0);
    ~AdicionaisRef();

    QString price;
    QString lucro;
    QString tipoTela;
    QString kitalum;
    float altura;
    std::list<AdicionaisOBJ> listaDeAdicionais;

    float getSumPrice();
    float getSumProfit();

    void mostrarAdicoes();

    QString getPrice() const;
    void setPrice(const QString &newPrice);

    QString getLucro() const;
    void setLucro(const QString &newLucro);

    std::list<AdicionaisOBJ> getListaDeAdicionais() const;
    void setListaDeAdicionais(const std::list<AdicionaisOBJ> &newListaDeAdicionais);

    QString getTipoTela() const;
    void setTipoTela(const QString &newTipoTela);

    float getAltura() const;
    void setAltura(float newAltura);

    QString getKitalum() const;
    void setKitalum(const QString &newKitalum);

private slots:
    void removerLinha();

    void on_pushButtonIncluirNoOrcamentoRef_clicked();

    void on_pushButtonADDvidro_clicked();

    void on_pushButtonADDkit_clicked();

    void on_pushButtonADDaluminios_clicked();

    void on_pushButtonADDfechadura_clicked();

    void on_pushButtonADDpuxador_clicked();

    void on_pushButtonADDtrinco_clicked();

    void on_pushButtonADDrodana_clicked();

    void on_pushButtonAreaDePrecos_clicked();

    void on_pushButtonTodosOsAluminios_clicked();

private:
    Ui::AdicionaisRef *ui;
    DialogSalvar *telaSalvar;
    DialogAreaDeProdutos *telaAreaProdutos;
};

#endif // ADICIONAISREF_H
