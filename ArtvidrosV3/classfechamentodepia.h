#ifndef CLASSFECHAMENTODEPIA_H
#define CLASSFECHAMENTODEPIA_H
#include <QString>
#include<sqldatabasecontrol.h>

class ClassFechamentoDePia
{
private:
    float width;
    float height;
    QString glass;
    QString kit;
    QString film;
    QString rodanas;
public:
    ClassFechamentoDePia();
    ClassFechamentoDePia(float width, float height, const QString &glass, const QString &kit, const QString &film, const QString &rodanas);

    float metragem();
    float calculatePrice();
    float calculateProfit();


    float getWidth() const;
    void setWidth(float newWidth);
    float getHeight() const;
    void setHeight(float newHeight);
    QString getGlass() const;
    void setGlass(const QString &newGlass);
    QString getKit() const;
    void setKit(const QString &newKit);
    QString getFilm() const;
    void setFilm(const QString &newFilm);
    QString getRodanas() const;
    void setRodanas(const QString &newRodanas);
};

#endif // CLASSFECHAMENTODEPIA_H
