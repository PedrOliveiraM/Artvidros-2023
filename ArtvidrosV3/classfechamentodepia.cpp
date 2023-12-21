#include "classfechamentodepia.h"

float ClassFechamentoDePia::getWidth() const
{
    return width;
}

void ClassFechamentoDePia::setWidth(float newWidth)
{
    width = newWidth;
}

float ClassFechamentoDePia::getHeight() const
{
    return height;
}

void ClassFechamentoDePia::setHeight(float newHeight)
{
    height = newHeight;
}

QString ClassFechamentoDePia::getGlass() const
{
    return glass;
}

void ClassFechamentoDePia::setGlass(const QString &newGlass)
{
    glass = newGlass;
}

QString ClassFechamentoDePia::getKit() const
{
    return kit;
}

void ClassFechamentoDePia::setKit(const QString &newKit)
{
    kit = newKit;
}

QString ClassFechamentoDePia::getFilm() const
{
    return film;
}

void ClassFechamentoDePia::setFilm(const QString &newFilm)
{
    film = newFilm;
}

QString ClassFechamentoDePia::getRodanas() const
{
    return rodanas;
}

void ClassFechamentoDePia::setRodanas(const QString &newRodanas)
{
    rodanas = newRodanas;
}

ClassFechamentoDePia::ClassFechamentoDePia()
{

}

ClassFechamentoDePia::ClassFechamentoDePia(float width, float height, const QString &glass, const QString &kit, const QString &film, const QString &rodanas) : width(width),
    height(height),
    glass(glass),
    kit(kit),
    film(film),
    rodanas(rodanas)
{

}

float ClassFechamentoDePia::metragem()
{
    float largura = getWidth();
    float altura = getHeight();

    // Calcula as larguras e a altura em centímetros
    int larg = static_cast<int>(largura * 100 / 2 + 5);
    int larg2 = static_cast<int>(largura * 100 / 2 + 5);
    int altu = static_cast<int>(altura * 100);

    // Ajusta para múltiplo de 5
    while (larg % 5 != 0) {
        larg += 1;
    }
    while (larg2 % 5 != 0) {
        larg2 += 1;
    }
    while (altu % 5 != 0) {
        altu += 1;
    }

    // Converte para metros
    float x = larg / 100.0;
    float x2 = larg2 / 100.0;
    float y = altu / 100.0;


    double metrageVidro = x * y + x2 * y;

    return metrageVidro;
}

float ClassFechamentoDePia::calculatePrice()
{
    sqlDataBaseControl aux;
    float Vglass = aux.buscarNoBDprice(glass , "temperadopia");
    float Vkit = aux.buscarNoBDprice(kit , "kitpia");
    float Vfilm = aux.buscarNoBDprice(film , "pelicula") * metragem();
    float Vrodana = aux.buscarNoBDprice(rodanas , "rodana");

    qDebug()<<"calcular PRICE";
    qDebug()<<"metragem"<<metragem();
    qDebug()<<"vidro"<<(metragem() * Vglass);
    qDebug()<<"kit"<<Vkit;
    qDebug()<<"pelicula"<<Vfilm;
    qDebug()<<"rodana"<<Vrodana;

    float value = (metragem() * Vglass) + Vkit + Vfilm + Vrodana;
    return value;
}

float ClassFechamentoDePia::calculateProfit()
{
    sqlDataBaseControl aux;
    float Vglass = aux.buscarNoBDprofit(glass , "temperadopia");
    float Vkit = aux.buscarNoBDprofit(kit , "kitpia");
    float Vfilm = aux.buscarNoBDprofit(film , "pelicula") * metragem();
    float Vrodana = aux.buscarNoBDprofit(rodanas , "rodana");

    qDebug()<<"calcular Pprofit";
    qDebug()<<"metragem"<<metragem();
    qDebug()<<"vidro"<<(metragem() * Vglass);
    qDebug()<<"kit"<<Vkit;
    qDebug()<<"pelicula"<<Vfilm;
    qDebug()<<"rodana"<<Vrodana;

    float value = (metragem() * Vglass) + Vkit + Vfilm + Vrodana;
    return value;
}
