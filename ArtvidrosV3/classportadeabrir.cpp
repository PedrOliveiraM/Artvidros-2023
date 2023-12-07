#include "classportadeabrir.h"

QString ClassPortaDeAbrir::getKit() const
{
    return kit;
}

void ClassPortaDeAbrir::setKit(const QString &newKit)
{
    kit = newKit;
}

QString ClassPortaDeAbrir::getFilm() const
{
    return film;
}

void ClassPortaDeAbrir::setFilm(const QString &newFilm)
{
    film = newFilm;
}

QString ClassPortaDeAbrir::getLatch() const
{
    return latch;
}

void ClassPortaDeAbrir::setLatch(const QString &newLatch)
{
    latch = newLatch;
}

ClassPortaDeAbrir::ClassPortaDeAbrir()
{

}

ClassPortaDeAbrir::ClassPortaDeAbrir(float width, float height, const QString &glass, const QString &puller,
                                     const QString &kit, const QString &film, const QString &latch)
    : herdaVidros(width, height, glass, puller), kit(kit), film(film), latch(latch)
{

}

float ClassPortaDeAbrir::metragem()
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

float ClassPortaDeAbrir::calculatePrice()
{
    sqlDataBaseControl aux;
    float Vglass = aux.buscarNoBDprice(glass , "temperado");
    float Vpuller = aux.buscarNoBDprice(puller , "puxador");
    float Vkit = aux.buscarNoBDprice(kit , "kitabrir");
    float Vfilm = aux.buscarNoBDprice(film , "pelicula") * metragem();
    float Vlatch = aux.buscarNoBDprofit(latch , "trinco");

    qDebug()<<"calcular Price";
    qDebug()<<"metragem"<<metragem();
    qDebug()<<"vidro"<<(metragem() * Vglass);
    qDebug()<<"puxador"<<Vpuller;
    qDebug()<<"kit"<<Vkit;
    qDebug()<<"trinco"<<Vlatch;
    qDebug()<<"pelicula"<<Vfilm;

    float value = (metragem() * Vglass) + Vpuller + Vkit + Vfilm + Vlatch;
    return value;
}

float ClassPortaDeAbrir::calculateProfit()
{
    sqlDataBaseControl aux;
    float Vglass = aux.buscarNoBDprofit(glass , "temperado");
    float Vpuller = aux.buscarNoBDprofit(puller , "puxador");
    float Vkit = aux.buscarNoBDprofit(kit , "kitabrir");
    float Vfilm = aux.buscarNoBDprofit(film , "pelicula") * metragem();
    float Vlatch = aux.buscarNoBDprofit(latch , "trinco");

    float value = (metragem() * Vglass) + Vpuller + Vkit + Vfilm + Vlatch;
    return value;
}


