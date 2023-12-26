#include "classjanelade4folhas.h"

ClassJanelaDe4Folhas::ClassJanelaDe4Folhas()
{

}

ClassJanelaDe4Folhas::ClassJanelaDe4Folhas(float width, float height, const QString &glass, const QString &bateFecha, const QString &kit, const QString &rodana, const QString &trinco, const QString &film)
    : HerdaJanelas(width,height,glass,bateFecha,kit,rodana,trinco,film)
{

}

float ClassJanelaDe4Folhas::metragem()
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

float ClassJanelaDe4Folhas::calculatePrice()
{
    sqlDataBaseControl aux;
    float Vglass = aux.buscarNoBDprice(glass , "temperado");
    float VbateFecha = aux.buscarNoBDprice(bateFecha , "batefecha");
    float VkitAluminio = aux.buscarNoBDprice(kit , "kitaluminio") * (width + 0.10);
    float Vrodanas = aux.buscarNoBDprice(rodana, "rodana") * 2;
    float Vlatch = aux.buscarNoBDprice(trinco, "trinco");
    float Vfilm = aux.buscarNoBDprice(film , "pelicula") * metragem();

    qDebug()<<"calcular PRICE";
    qDebug()<<"metragem"<<metragem();
    qDebug()<<"vidro"<<(metragem() * Vglass);
    qDebug()<<"bate fecha"<<VbateFecha;
    qDebug()<<"kit"<<VkitAluminio;
    qDebug()<<"pelicula"<<Vfilm;
    qDebug()<<"trinco"<<Vlatch;
    qDebug()<<"rodana"<<Vrodanas;

    float value = (metragem() * Vglass) + VbateFecha + VkitAluminio + Vfilm + Vlatch + Vrodanas;

    return value;
}

float ClassJanelaDe4Folhas::calculateProfit()
{
    sqlDataBaseControl aux;
    float Vglass = aux.buscarNoBDprofit(glass , "temperado");
    float VbateFecha = aux.buscarNoBDprofit(bateFecha , "batefecha");
    float VkitAluminio = aux.buscarNoBDprofit(kit , "aluminio");
    float Vrodanas = aux.buscarNoBDprofit(rodana, "rodana") * 2;
    float Vlatch = aux.buscarNoBDprofit(trinco, "trinco");
    float Vfilm = aux.buscarNoBDprofit(film , "pelicula") * metragem();

    qDebug()<<"calcular PROFIT";
    qDebug()<<"metragem"<<metragem();
    qDebug()<<"vidro"<<(metragem() * Vglass);
    qDebug()<<"bate fecha"<<VbateFecha;
    qDebug()<<"kit"<<VkitAluminio;
    qDebug()<<"pelicula"<<Vfilm;
    qDebug()<<"trinco"<<Vlatch;
    qDebug()<<"rodana"<<Vrodanas;

    float value = (metragem() * Vglass) + VbateFecha + VkitAluminio + Vfilm + Vlatch + Vrodanas;

    return value;
}
