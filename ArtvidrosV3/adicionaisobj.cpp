#include "adicionaisobj.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
QString AdicionaisOBJ::getId() const
{
    if (id.toInt() > 0 && id.toInt() < 9999){
        unsigned seed = static_cast<unsigned>(time(0));
        // Inicializa o gerador de números aleatórios com a semente
        std::srand(seed);

        // Gera e imprime um número aleatório de 4 dígitos
        int randomValue = 1 + std::rand() % 20;
        return  QString::number(randomValue);
    }

    return id;
}

void AdicionaisOBJ::setId(const QString &newId)
{
    id = newId;
}

QString AdicionaisOBJ::getName() const
{
    return name;
}

void AdicionaisOBJ::setName(const QString &newName)
{
    name = newName;
}

QString AdicionaisOBJ::getQuant() const
{
    return quant;
}

void AdicionaisOBJ::setQuant(const QString &newQuant)
{
    quant = newQuant;
}

QString AdicionaisOBJ::getPrice() const
{
    return price;
}

void AdicionaisOBJ::setPrice(const QString &newPrice)
{
    price = newPrice;
}

QString AdicionaisOBJ::getProfit() const
{
    return profit;
}

void AdicionaisOBJ::setProfit(const QString &newProfit)
{
    profit = newProfit;
}

AdicionaisOBJ::AdicionaisOBJ():
    id(""),
    name(""),
    quant(""),
    price(""),
    profit("")
{

}

AdicionaisOBJ::AdicionaisOBJ(const QString &id, const QString &name, const QString &quant, const QString &price, const QString &profit) : id(id),
    name(name),
    quant(quant),
    price(price),
    profit(profit)
{}

float AdicionaisOBJ::metrage(float width , float height)
{
    float largura = width;
    float altura = height;

    int larg = 0;
    larg += largura*100;
    int altu = 0;
    altu += altura*100;

    while(larg%5 != 0){
        larg += 1;
    }
    while(altu%5 != 0 ){
        altu += 1;
    }

    float x = larg;
    float y = altu;
    double metrageVidro = (x/100)*(y/100);

    return metrageVidro;
}

QString AdicionaisOBJ::geraID()
{
    unsigned seed = static_cast<unsigned>(std::time(0));

    // Inicializa o gerador de números aleatórios com a semente
    std::srand(seed);

    // Gera e imprime um número aleatório de 4 dígitos
    int randomValue = 1000 + std::rand() % 9000;
    return  QString::number(randomValue);
}
float AdicionaisOBJ::calcularPreco(float value, float metragem, int quant)
{
    return (quant * (metragem * value));
}
