#include "herdavidros.h"

float herdaVidros::getWidth() const
{
    return width;
}

void herdaVidros::setWidth(float newWidth)
{
    width = newWidth;
}

float herdaVidros::getHeight() const
{
    return height;
}

void herdaVidros::setHeight(float newHeight)
{
    height = newHeight;
}

QString herdaVidros::getGlass() const
{
    return glass;
}

void herdaVidros::setGlass(const QString &newGlass)
{
    glass = newGlass;
}

QString herdaVidros::getPuller() const
{
    return puller;
}

void herdaVidros::setPuller(const QString &newPuller)
{
    puller = newPuller;
}

herdaVidros::herdaVidros()
{

}

herdaVidros::herdaVidros(float width, float height, const QString &glass, const QString &puller) : width(width),
    height(height),
    glass(glass),
    puller(puller)
{

}
