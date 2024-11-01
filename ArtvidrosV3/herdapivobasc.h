#ifndef HERDAPIVOBASC_H
#define HERDAPIVOBASC_H
#include <QString>

class HerdaPivoBasc
{
protected:
    float width;
    float height;
    QString glass;
    QString kit;
    QString film;
    QString lacth;
public:
    HerdaPivoBasc();
    HerdaPivoBasc(float width, float height, const QString &glass, const QString &kit, const QString &film,const QString &lacth);


    virtual float calculatePrice() = 0;
    virtual float calculateProfit() = 0;
    virtual float metragem() = 0;


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
};

#endif // HERDAPIVOBASC_H
