#include "classbox.h"

ClassBox::ClassBox()
{

}

ClassBox::ClassBox(float largura, float altura, const QString &vidro, const QString &kit, const QString &rodana, const QString &pelicula):
    herdaBox(largura,altura,vidro,kit,rodana,pelicula)
{

}

float ClassBox::metragem()
{
    float largura = getLargura();
    float altura = getAltura();

    // Calcula as larguras e a altura em centímetros
    int larg = static_cast<int>(largura * 100 / 2);
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

float ClassBox::metragemBoxCanto()
{
    float largura = getLargura();
    float altura = getAltura();

    // Calcula as larguras e a altura em centímetros
    int larg = static_cast<int>(largura * 100 / 4);
    int larg2 = static_cast<int>(largura * 100 / 4 + 5);
    int larg3= static_cast<int>(largura * 100 / 4);
    int larg4 = static_cast<int>(largura * 100 / 4 + 5);

    int altu = static_cast<int>(altura * 100);

    // Ajusta para múltiplo de 5
    while (larg % 5 != 0) {
        larg += 1;
    }
    while (larg2 % 5 != 0) {
        larg2 += 1;
    }
    while (larg3 % 5 != 0) {
        larg3 += 1;
    }
    while (larg4 % 5 != 0) {
        larg4 += 1;
    }
    while (altu % 5 != 0) {
        altu += 1;
    }

    // Converte para metros
    float x = larg / 100.0;
    float x2 = larg2 / 100.0;
    float x3= larg3 / 100.0;
    float x4 = larg4 / 100.0;

    float y = altu / 100.0;


    double metrageVidro = (x * y) + (x2 * y) + (x3 * y) + (x4 * y);

    return metrageVidro;
}

float ClassBox::calculatePrice(QString tipo)
{

    sqlDataBaseControl aux;
    float Vglass = 0.0;

    if (getAltura() > 1.91)
        Vglass = aux.buscarNoBDprofit(vidro , "temperado");
    else
        Vglass = aux.buscarNoBDprofit(vidro , "box");
    float VkitAluminio = aux.buscarNoBDprice(kit , tipo);
    float Vrodanas = aux.buscarNoBDprice(rodana , "rodana") * 2;
    float Vfilm = aux.buscarNoBDprice(pelicula , "pelicula") * metragem();

    qDebug()<<"calcular PRICE";
    qDebug()<<"metragem"<<metragem();
    qDebug()<<"vidro"<<(metragem() * Vglass);
    qDebug()<<"kit"<<VkitAluminio;
    qDebug()<<"rodana"<<Vrodanas;
    qDebug()<<"pelicula"<<Vfilm;

    float metro = 0.0;

    if (tipo == "kitboxCanto")
        metro = metragemBoxCanto();
    else
        metro = metragem();

    float value = (metro * Vglass)  + VkitAluminio + Vfilm + Vrodanas;

    return value;

}

float ClassBox::calculateProfit(QString tipo)
{
    sqlDataBaseControl aux;

    float Vglass = 0.0;

    if (getAltura() > 1.91)
        Vglass = aux.buscarNoBDprofit(vidro , "temperado");
     else
        Vglass = aux.buscarNoBDprofit(vidro , "box");

    float VkitAluminio = aux.buscarNoBDprofit(kit , tipo);
    float Vrodanas = aux.buscarNoBDprofit(rodana , "rodana") * 2;
    float Vfilm = aux.buscarNoBDprofit(pelicula , "pelicula") * metragem();

    qDebug()<<"calcular PRICE";
    qDebug()<<"metragem"<<metragem();
    qDebug()<<"vidro"<<(metragem() * Vglass);
    qDebug()<<"kit"<<VkitAluminio;
    qDebug()<<"rodana"<<Vrodanas;
    qDebug()<<"pelicula"<<Vfilm;


    float metro = 0.0;

    if (tipo == "kitboxCanto")
        metro = metragemBoxCanto();
    else
        metro = metragem();

    float value = (metro * Vglass)  + VkitAluminio + Vfilm + Vrodanas;

    return value;
}
