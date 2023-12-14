#include "classportade4folhas.h"

ClassPortaDe4Folhas::ClassPortaDe4Folhas()
{

}
ClassPortaDe4Folhas::ClassPortaDe4Folhas(float width, float height, const QString &glass, const QString &puller,const QString &fechadura,
                                         const QString &kitAluminio, const QString &film, const QString &latch, const QString &rodanas)
    : herdaVidros(width, height, glass, puller),fechadura(fechadura), kitAluminio(kitAluminio), film(film), latch(latch), rodanas(rodanas)
{

}
float ClassPortaDe4Folhas::metragem()
{
    float largura = getWidth();
    float altura = getHeight();

    // Calcula as larguras e a altura em centímetros
    int larg1 = static_cast<int>(largura * 100 / 4);
    int larg2 = static_cast<int>(largura * 100 / 4);
    int larg3 = static_cast<int>(largura * 100 / 4 + 5);  // Adiciona 5 a uma das partes
    int larg4 = static_cast<int>(largura * 100 / 4 + 5);  // Adiciona 5 a outra parte
    int altu = static_cast<int>(altura * 100);

    // Ajusta para múltiplo de 5
    while (larg1 % 5 != 0) {
        larg1 += 1;
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
    float x1 = larg1 / 100.0;
    float x2 = larg2 / 100.0;
    float x3 = larg3 / 100.0;
    float x4 = larg4 / 100.0;
    float y = altu / 100.0;

    double metrageVidro = x1 * y + x2 * y + x3 * y + x4 * y;

    return metrageVidro;


}

float ClassPortaDe4Folhas::calculatePrice()
{

    sqlDataBaseControl aux;
    float Vglass = aux.buscarNoBDprice(glass , "temperado");
    float Vfechadura = aux.buscarNoBDprice(fechadura , "fechadura");
    float Vpuller = aux.buscarNoBDprice(puller , "puxador") * 2 ;
    float VkitAluminio = aux.buscarNoBDprice(kitAluminio , "aluminio") * (width + 0.10);
    float Vfilm = aux.buscarNoBDprice(film , "pelicula") * metragem();
    float Vlatch = aux.buscarNoBDprice(latch , "trinco") * 2;
    float Vrodanas = aux.buscarNoBDprice(rodanas , "rodana") * 4;

    qDebug()<<"**** calcular PRICE ****";
    qDebug()<<"metragem"<<metragem();
    qDebug()<<"vidro"<<(metragem() * Vglass);
    qDebug()<<"fechadura"<<Vfechadura;
    qDebug()<<"puxador"<<Vpuller;
    qDebug()<<"kit"<<VkitAluminio;
    qDebug()<<"pelicula"<<Vfilm;
    qDebug()<<"trinco"<<Vlatch;
    qDebug()<<"rodana"<<Vrodanas;

    float value = (metragem() * Vglass) + Vpuller + Vfechadura + VkitAluminio + Vfilm + Vlatch + Vrodanas;

    return value;
}

float ClassPortaDe4Folhas::calculateProfit()
{
    sqlDataBaseControl aux;
    float Vglass = aux.buscarNoBDprofit(glass , "temperado");
    float Vpuller = aux.buscarNoBDprofit(puller , "puxador") * 2;
    float Vfechadura = aux.buscarNoBDprofit(fechadura , "fechadura");
    float VkitAluminio = aux.buscarNoBDprofit(kitAluminio , "aluminio") * (width + 0.10);
    float Vfilm = aux.buscarNoBDprofit(film , "pelicula") * metragem();
    float Vlatch = aux.buscarNoBDprofit(latch , "trinco") *2;
    float Vrodanas = aux.buscarNoBDprofit(rodanas , "rodana") * 4;

    qDebug()<<"**** calcular PROFIT ****";
    qDebug()<<"metragem"<<metragem();
    qDebug()<<"vidro"<<(metragem() * Vglass);
    qDebug()<<"fechadura"<<Vfechadura;
    qDebug()<<"puxador"<<Vpuller;
    qDebug()<<"kit"<<VkitAluminio;
    qDebug()<<"pelicula"<<Vfilm;
    qDebug()<<"trinco"<<Vlatch;
    qDebug()<<"rodana"<<Vrodanas;;

    float value = (metragem() * Vglass) + Vpuller + Vfechadura + VkitAluminio + Vfilm + Vlatch + Vrodanas;
    return value;

}



