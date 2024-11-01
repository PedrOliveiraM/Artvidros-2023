#ifndef HERDABOX_H
#define HERDABOX_H
#include <QString>

class herdaBox
{
protected:
    float largura;
    float largura2;
    float altura;
    QString vidro;
    QString kit;
    QString rodana;
    QString pelicula;
public:
    herdaBox();
    herdaBox(float largura,float largura2, float altura, const QString &vidro, const QString &kit, const QString &rodana, const QString &pelicula);

    virtual float metragem() = 0;
    virtual float calculatePrice (QString tipo) = 0;
    virtual float calculateProfit(QString tipo) = 0;

    float getLargura() const;
    void setLargura(float newLargura);
    float getAltura() const;
    void setAltura(float newAltura);
    QString getVidro() const;
    void setVidro(const QString &newVidro);
    QString getKit() const;
    void setKit(const QString &newKit);
    QString getRodana() const;
    void setRodana(const QString &newRodana);
    QString getPelicula() const;
    void setPelicula(const QString &newPelicula);
    float getLargura2() const;
    void setLargura2(float newLargura2);
};

#endif // HERDABOX_H
