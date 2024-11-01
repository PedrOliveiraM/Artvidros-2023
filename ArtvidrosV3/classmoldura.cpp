#include "classmoldura.h"

float ClassMoldura::getWidth() const
{
    return width;
}

void ClassMoldura::setWidth(float newWidth)
{
    width = newWidth;
}

float ClassMoldura::getHeight() const
{
    return height;
}

void ClassMoldura::setHeight(float newHeight)
{
    height = newHeight;
}

float ClassMoldura::getValueMold() const
{
    return valueMold;
}

void ClassMoldura::setValueMold(float newValueMold)
{
    valueMold = newValueMold;
}

QString ClassMoldura::getAcabamento() const
{
    return acabamento;
}

void ClassMoldura::setAcabamento(const QString &newAcabamento)
{
    acabamento = newAcabamento;
}

QString ClassMoldura::getAcessorios() const
{
    return acessorios;
}

void ClassMoldura::setAcessorios(const QString &newAcessorios)
{
    acessorios = newAcessorios;
}

int ClassMoldura::getQuant() const
{
    return quant;
}

void ClassMoldura::setQuant(int newQuant)
{
    quant = newQuant;
}

QString ClassMoldura::getEspessura() const
{
    return espessura;
}

void ClassMoldura::setEspessura(const QString &newEspessura)
{
    espessura = newEspessura;
}

ClassMoldura::ClassMoldura()
{

}

ClassMoldura::ClassMoldura(float width, float height, float valueMold,const QString &espessura, const QString &acabamento, const QString &acessorios, int quant) : width(width),
    height(height),
    valueMold(valueMold),
    espessura(espessura),
    acabamento(acabamento),
    acessorios(acessorios),
    quant(quant)
{

}

float ClassMoldura::metragem()
{
    float largura = getWidth();
    float altura = getHeight();

    int larg = 0;
    larg += largura*100;
    int altu = 0;
    altu += altura*100;

    qDebug()<<"INICIO ";
    qDebug()<<"Larg "<<larg;
    qDebug()<<"altu "<<altu;

    while(larg%5 != 0){
        larg += 1;
    }
    while(altu%5 != 0 ){
        altu += 1;
    }

    float x = larg;
    float y = altu;

    x = x/100;
    y = y/100;

    qDebug()<<"MEIO ";
    qDebug()<<"x "<<x;
    qDebug()<<"y "<<y;

    float Vespessura;
    if (espessura == "Fina")
        Vespessura = 0.30;
    else if (espessura == "Média") {
        Vespessura = 0.40;
    }else{
        Vespessura = 0.60;
    }


    double metrageVidro =  x + x + y + y + Vespessura;

    qDebug()<<"FIM "<<metrageVidro;
    return metrageVidro;
}

float ClassMoldura::calculatePrice()
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

    x = x/100;
    y = y/100;

    float metrage = x*y;

    sqlDataBaseControl aux;
    float Vacabamento = aux.buscarNoBDprice(acabamento , "acabamento");
    float Vacessorios = aux.buscarNoBDprice(acessorios , "pendurador");

    qDebug()<<"TESTE MOLDURA "<< metragem();
    qDebug()<<"# valueMold "<< (metragem() * valueMold);
    qDebug()<<"# Vacabamento "<< metrage * Vacabamento;
    qDebug()<<"# Vacessorios "<< quant * Vacessorios;

    float value = ((metragem() * valueMold) + (metrage * Vacabamento) + (quant * Vacessorios));

    return value;
}

float ClassMoldura::calculateProfit()
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

    x = x/100;
    y = y/100;

    float metrage = x*y;

    sqlDataBaseControl aux;
    float Vacabamento = aux.buscarNoBDprofit(acabamento , "acabamento");
    float Vacessorios = aux.buscarNoBDprofit(acessorios , "pendurador") * quant;

    float value = ((metragem() * valueMold) + (metrage * Vacabamento) + (quant * Vacessorios));

    return value;
}
