#include "classportade2folhas.h"

ClassPortaDe2Folhas::ClassPortaDe2Folhas()
{

}
ClassPortaDe2Folhas::ClassPortaDe2Folhas(float width, float height, const QString &glass, const QString &puller,
                                     const QString &kit, const QString &film, const QString &latch, const QString &rodanas, const QString &tubo)
    : herdaVidros(width, height, glass, puller), kitAluminio(kitAluminio), film(film), latch(latch),rodanas(rodanas),tubo(tubo)
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
    float altura = getHeight();
    float Vglass = aux.buscarNoBDprice(glass , "temperado");
    float Vpuller = aux.buscarNoBDprice(puller , "puxador");
    float VkitAluminio = aux.buscarNoBDprice(kitAluminio , "aluminio");
    float Vfilm = aux.buscarNoBDprice(film , "pelicula") * metragem();
    float Vlatch = aux.buscarNoBDprofit(latch , "trinco");
    float Vrodanas = aux.buscarNoBDprofit(rodanas , "rodana") * 2;
    float Vtubo = aux.buscarNoBDprofit(tubo , "tubo") * altura;

    qDebug()<<"calcular Price";
    qDebug()<<"metragem"<<metragem();
    qDebug()<<"vidro"<<(metragem() * Vglass);
    qDebug()<<"puxador"<<Vpuller;
    qDebug()<<"kit"<<VkitAluminio;
    qDebug()<<"pelicula"<<Vfilm;
    qDebug()<<"trinco"<<Vlatch;
    qDebug()<<"rodana"<<Vrodanas;
    qDebug()<<"tubo"<<Vtubo;

    float value = (metragem() * Vglass) + Vpuller + VkitAluminio + Vfilm + Vlatch + Vrodanas + Vtubo;

    return value;
}

float ClassPortaDe2Folhas::calculateProfit()
{

}
