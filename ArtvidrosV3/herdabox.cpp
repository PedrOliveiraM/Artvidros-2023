#include "herdabox.h"

float herdaBox::getLargura() const
{
    return largura;
}

void herdaBox::setLargura(float newLargura)
{
    largura = newLargura;
}

float herdaBox::getAltura() const
{
    return altura;
}

void herdaBox::setAltura(float newAltura)
{
    altura = newAltura;
}

QString herdaBox::getVidro() const
{
    return vidro;
}

void herdaBox::setVidro(const QString &newVidro)
{
    vidro = newVidro;
}

QString herdaBox::getKit() const
{
    return kit;
}

void herdaBox::setKit(const QString &newKit)
{
    kit = newKit;
}

QString herdaBox::getRodana() const
{
    return rodana;
}

void herdaBox::setRodana(const QString &newRodana)
{
    rodana = newRodana;
}

QString herdaBox::getPelicula() const
{
    return pelicula;
}

void herdaBox::setPelicula(const QString &newPelicula)
{
    pelicula = newPelicula;
}

float herdaBox::getLargura2() const
{
    return largura2;
}

void herdaBox::setLargura2(float newLargura2)
{
    largura2 = newLargura2;
}

herdaBox::herdaBox()
{

}

herdaBox::herdaBox(float largura,float largura2, float altura, const QString &vidro, const QString &kit, const QString &rodana,const QString &pelicula) : largura(largura),
    largura2(largura2),
    altura(altura),
    vidro(vidro),
    kit(kit),
    rodana(rodana),
    pelicula(pelicula)
{

}
