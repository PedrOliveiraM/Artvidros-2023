#include "adicionaisobj.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <thread>
#include <chrono>

QString AdicionaisOBJ::getId() const
{
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
    // aguardar 0.5 s
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    // Coloque isso em algum lugar do seu código, talvez no início do programa
    std::srand(static_cast<unsigned>(std::time(0)));

    // Agora, remova a chamada para std::srand(seed) de dentro da função geraID

    // Restante do código permanece o mesmo
    int randomValue = 1000 + std::rand() % 9000;
    return QString::number(randomValue);000;
    return  QString::number(randomValue);
}
float AdicionaisOBJ::calcularPreco(float value, float metragem, int quant)
{
    return (quant * (metragem * value));
}
