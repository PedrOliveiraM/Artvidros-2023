#include "herdapivobasc.h"

float HerdaPivoBasc::getWidth() const
{
    return width;
}

void HerdaPivoBasc::setWidth(float newWidth)
{
    width = newWidth;
}

float HerdaPivoBasc::getHeight() const
{
    return height;
}

void HerdaPivoBasc::setHeight(float newHeight)
{
    height = newHeight;
}

QString HerdaPivoBasc::getGlass() const
{
    return glass;
}

void HerdaPivoBasc::setGlass(const QString &newGlass)
{
    glass = newGlass;
}

QString HerdaPivoBasc::getKit() const
{
    return kit;
}

void HerdaPivoBasc::setKit(const QString &newKit)
{
    kit = newKit;
}

QString HerdaPivoBasc::getFilm() const
{
    return film;
}

void HerdaPivoBasc::setFilm(const QString &newFilm)
{
    film = newFilm;
}

HerdaPivoBasc::HerdaPivoBasc()
{

}

HerdaPivoBasc::HerdaPivoBasc(float width, float height, const QString &glass, const QString &kit, const QString &film, const QString &lacth) : width(width),
    height(height),
    glass(glass),
    kit(kit),
    film(film),
    lacth(lacth)
{

}
