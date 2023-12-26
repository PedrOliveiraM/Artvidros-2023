#include "classportade2folhas.h"

ClassPortaDe2Folhas::ClassPortaDe2Folhas()
{

}
ClassPortaDe2Folhas::ClassPortaDe2Folhas(float width, float height, const QString &glass, const QString &puller,const QString &fechadura,
    const QString &kitAluminio, const QString &film, const QString &latch, const QString &rodanas)
    : herdaVidros(width, height, glass, puller),fechadura(fechadura), kitAluminio(kitAluminio), film(film), latch(latch), rodanas(rodanas)
{

}


float ClassPortaDe2Folhas::metragem()
{
    float largura = getWidth();
    float altura = getHeight();

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

float ClassPortaDe2Folhas::calculatePrice()
{

    sqlDataBaseControl aux;
    float Vglass = aux.buscarNoBDprice(glass , "temperado");
    float Vfechadura = aux.buscarNoBDprice(fechadura , "fechadura");
    float Vpuller = aux.buscarNoBDprice(puller , "puxador");
    float VkitAluminio = aux.buscarNoBDprice(kitAluminio , "kitaluminio") * (width + 0.10);
    float Vfilm = aux.buscarNoBDprice(film , "pelicula") * metragem();
    float Vlatch = aux.buscarNoBDprice(latch , "trinco");
    float Vrodanas = aux.buscarNoBDprice(rodanas , "rodana") * 2;

    qDebug()<<"calcular PRICE";
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

float ClassPortaDe2Folhas::calculateProfit()
{
    sqlDataBaseControl aux;
    float Vglass = aux.buscarNoBDprofit(glass , "temperado");
    float Vpuller = aux.buscarNoBDprofit(puller , "puxador");
    float Vfechadura = aux.buscarNoBDprofit(fechadura , "fechadura");
    float VkitAluminio = aux.buscarNoBDprofit(kitAluminio , "aluminio");
    float Vfilm = aux.buscarNoBDprofit(film , "pelicula") * metragem();
    float Vlatch = aux.buscarNoBDprofit(latch , "trinco");
    float Vrodanas = aux.buscarNoBDprofit(rodanas , "rodana") * 2;

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



