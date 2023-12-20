#include "herdajanelas.h"

float HerdaJanelas::getWidth() const
{
    return width;
}

void HerdaJanelas::setWidth(float newWidth)
{
    width = newWidth;
}

float HerdaJanelas::getHeight() const
{
    return height;
}

void HerdaJanelas::setHeight(float newHeight)
{
    height = newHeight;
}

QString HerdaJanelas::getGlass() const
{
    return glass;
}

void HerdaJanelas::setGlass(const QString &newGlass)
{
    glass = newGlass;
}

QString HerdaJanelas::getBateFecha() const
{
    return bateFecha;
}

void HerdaJanelas::setBateFecha(const QString &newBateFecha)
{
    bateFecha = newBateFecha;
}

QString HerdaJanelas::getKit() const
{
    return kit;
}

void HerdaJanelas::setKit(const QString &newKit)
{
    kit = newKit;
}

QString HerdaJanelas::getRodana() const
{
    return rodana;
}

void HerdaJanelas::setRodana(const QString &newRodana)
{
    rodana = newRodana;
}

QString HerdaJanelas::getTrinco() const
{
    return trinco;
}

void HerdaJanelas::setTrinco(const QString &newTrinco)
{
    trinco = newTrinco;
}

QString HerdaJanelas::getFilm() const
{
    return film;
}

void HerdaJanelas::setFilm(const QString &newFilm)
{
    film = newFilm;
}

HerdaJanelas::HerdaJanelas()
{

}

HerdaJanelas::HerdaJanelas(float width, float height, const QString &glass, const QString &bateFecha, const QString &kit, const QString &rodana, const QString &trinco,const QString &film) : width(width),
    height(height),
    glass(glass),
    bateFecha(bateFecha),
    kit(kit),
    rodana(rodana),
    trinco(trinco),
    film(film)
{

}
