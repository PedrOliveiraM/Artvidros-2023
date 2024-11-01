#include "pdfobjeto.h"

QString PDFobjeto::getProduto() const
{
    return produto;
}

void PDFobjeto::setProduto(const QString &newProduto)
{
    produto = newProduto;
}

QString PDFobjeto::getPreco() const
{
    return preco;
}

void PDFobjeto::setPreco(const QString &newPreco)
{
    preco = newPreco;
}

QString PDFobjeto::getLucro() const
{
    return lucro;
}

void PDFobjeto::setLucro(const QString &newLucro)
{
    lucro = newLucro;
}

PDFobjeto::PDFobjeto()
{

}

PDFobjeto::PDFobjeto(const QString &produto, const QString &preco, const QString &lucro) : produto(produto),
    preco(preco),
    lucro(lucro)
{

}

