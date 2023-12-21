#include "classpivotantebasc.h"

ClassPivotanteBasc::ClassPivotanteBasc()
{

}

ClassPivotanteBasc::ClassPivotanteBasc(float width, float height, const QString &glass, const QString &kit, const QString &film, const QString &lacth):
    HerdaPivoBasc(width,height,glass,kit,film,lacth)
{

}

float ClassPivotanteBasc::calculatePrice()
{
    sqlDataBaseControl aux;
    float Vglass = aux.buscarNoBDprice(glass , "temperado");
    float VkitAluminio = aux.buscarNoBDprice(kit , "pivotante");
    float Vfilm = aux.buscarNoBDprice(film , "pelicula") * metragem();
    float Vlatch = aux.buscarNoBDprice(lacth , "trinco");

    qDebug()<<"calcular PRICE";
    qDebug()<<"metragem"<<metragem();
    qDebug()<<"vidro"<<(metragem() * Vglass);
    qDebug()<<"kit"<<VkitAluminio;
    qDebug()<<"pelicula"<<Vfilm;
    qDebug()<<"trinco"<<Vlatch;

    float value = (metragem() * Vglass) + VkitAluminio + Vfilm + Vlatch;
    return value;
}

float ClassPivotanteBasc::calculateProfit()
{
    sqlDataBaseControl aux;
    float Vglass = aux.buscarNoBDprofit(glass , "temperado");
    float VkitAluminio = aux.buscarNoBDprofit(kit , "pivotante");
    float Vfilm = aux.buscarNoBDprofit(film , "pelicula") * metragem();
    float Vlatch = aux.buscarNoBDprofit(lacth , "trinco");

    qDebug()<<"calcular PROFIT";
    qDebug()<<"metragem"<<metragem();
    qDebug()<<"vidro"<<(metragem() * Vglass);
    qDebug()<<"kit"<<VkitAluminio;
    qDebug()<<"pelicula"<<Vfilm;
    qDebug()<<"trinco"<<Vlatch;

    float value = (metragem() * Vglass) + VkitAluminio + Vfilm + Vlatch;
    return value;
}

float ClassPivotanteBasc::metragem()
{
    float largura = getWidth();
    float altura = getHeight();

    // Calcula as larguras e a altura em centímetros
    int larg = static_cast<int>(largura * 100);
    int altu = static_cast<int>(altura * 100);

    // Ajusta para múltiplo de 5
    while (larg % 5 != 0) {
        larg += 1;
    }
    while (altu % 5 != 0) {
        altu += 1;
    }

    // Converte para metros
    float x = larg / 100.0;
    float y = altu / 100.0;

    double metrageVidro = x * y;

    if (metrageVidro < 0.25)
        return 0.25;

    return metrageVidro;
}
