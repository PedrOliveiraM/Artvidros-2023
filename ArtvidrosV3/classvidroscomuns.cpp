#include "classvidroscomuns.h"
#include "sqldatabasecontrol.h"
float ClassVidrosComuns::getWidth() const
{
    return width;
}

void ClassVidrosComuns::setWidth(float newWidth)
{
    width = newWidth;
}

float ClassVidrosComuns::getHeight() const
{
    return height;
}

void ClassVidrosComuns::setHeight(float newHeight)
{
    height = newHeight;
}

void ClassVidrosComuns::setGlass(const QString &newGlass)
{
    glass = newGlass;
}

void ClassVidrosComuns::setPolido(const QString &newPolido)
{
    polido = newPolido;
}

void ClassVidrosComuns::setAcessorios(const QString &newAcessorios)
{
    acessorios = newAcessorios;
}

ClassVidrosComuns::ClassVidrosComuns()
{

}

ClassVidrosComuns::ClassVidrosComuns(float width, float height, const QString &glass, const QString &polido, const QString &acessorios) : width(width),
    height(height),
    glass(glass),
    polido(polido),
    acessorios(acessorios)
{}

float ClassVidrosComuns::metragem()
{
    float largura = getWidth();
    float altura = getHeight();

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

float ClassVidrosComuns::calculatePrice(int quant)
{
    sqlDataBaseControl aux;
    float Vglass = aux.buscarNoBDprice(glass , "temperado");
    float Vpolido = aux.buscarNoBDprice(polido , "polido");
    float Vacessorios = aux.buscarNoBDprice(acessorios , "acessorios");

    qDebug()<<"calcular Price";
    qDebug()<<"metragem"<<metragem();
    qDebug()<<"vidro"<<(metragem() * Vglass);
    qDebug()<<"polido"<<Vpolido;
    qDebug()<<"acessorios"<<Vpolido;



    float value = (metragem() * Vglass) + Vpolido + (quant * Vacessorios);
    return value;
}

float ClassVidrosComuns::calculateProfit(int quant)
{
    sqlDataBaseControl aux;
    float Vglass = aux.buscarNoBDprofit(glass , "temperado");
    float Vpolido = aux.buscarNoBDprofit(polido , "polido");
    float Vacessorios = aux.buscarNoBDprofit(acessorios , "acessorios");

    qDebug()<<"calcular Price";
    qDebug()<<"metragem"<<metragem();
    qDebug()<<"vidro"<<(metragem() * Vglass);
    qDebug()<<"polido"<<Vpolido;
    qDebug()<<"acessorios"<<Vpolido;

    float value = (metragem() * Vglass) + Vpolido + (quant * Vacessorios);
    return value;
}
