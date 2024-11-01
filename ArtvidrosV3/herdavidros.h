#ifndef HERDAVIDROS_H
#define HERDAVIDROS_H

#include <QString>
class herdaVidros
{
protected:
    float width;
    float height;
    QString glass;
    QString puller;
public:
    herdaVidros();
    herdaVidros(float width, float height, const QString &glass, const QString &puller);

    virtual float calculatePrice() = 0;
    virtual float calculateProfit() = 0;

    float getWidth() const;
    void setWidth(float newWidth);
    float getHeight() const;
    void setHeight(float newHeight);
    QString getGlass() const;
    void setGlass(const QString &newGlass);
    QString getPuller() const;
    void setPuller(const QString &newPuller);
};

#endif // HERDAVIDROS_H
