#ifndef PDFOBJETO_H
#define PDFOBJETO_H
#include <QString>

class PDFobjeto
{
private:
    QString produto;
    QString preco;
    QString lucro;

public:
    PDFobjeto();
    PDFobjeto(const QString &produto, const QString &preco, const QString &lucro);

    QString getProduto() const;
    void setProduto(const QString &newProduto);
    QString getPreco() const;
    void setPreco(const QString &newPreco);
    QString getLucro() const;
    void setLucro(const QString &newLucro);
};

#endif // PDFOBJETO_H
