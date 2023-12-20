#ifndef HERDAJANELAS_H
#define HERDAJANELAS_H
#include <QString>

class HerdaJanelas
{
protected:
    float width;
    float height;
    QString glass;
    QString bateFecha;
    QString kit;
    QString rodana;
    QString trinco;
    QString film;

public:
    HerdaJanelas();
    HerdaJanelas(float width, float height, const QString &glass, const QString &bateFecha, const QString &kit, const QString &rodana, const QString &trinco,const QString &film);

    virtual float calculatePrice() = 0;
    virtual float calculateProfit() = 0;
    virtual float metragem() = 0;

    float getWidth() const;
    void setWidth(float newWidth);
    float getHeight() const;
    void setHeight(float newHeight);
    QString getGlass() const;
    void setGlass(const QString &newGlass);
    QString getBateFecha() const;
    void setBateFecha(const QString &newBateFecha);
    QString getKit() const;
    void setKit(const QString &newKit);
    QString getRodana() const;
    void setRodana(const QString &newRodana);
    QString getTrinco() const;
    void setTrinco(const QString &newTrinco);
    QString getFilm() const;
    void setFilm(const QString &newFilm);
};

#endif // HERDAJANELAS_H
