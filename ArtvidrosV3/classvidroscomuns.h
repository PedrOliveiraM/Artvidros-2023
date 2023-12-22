#ifndef CLASSVIDROSCOMUNS_H
#define CLASSVIDROSCOMUNS_H
#include <QString>

class ClassVidrosComuns
{
private:
    float width;
    float height;
    QString glass;
    QString polido;
    QString acessorios;

public:
    ClassVidrosComuns();
    ClassVidrosComuns(float width, float height, const QString &glass, const QString &polido, const QString &acessorios);

    float metragem();
    float calculatePrice(int quant);
    float calculateProfit(int quant);


    float getWidth() const;
    void setWidth(float newWidth);
    float getHeight() const;
    void setHeight(float newHeight);
    void setGlass(const QString &newGlass);
    void setPolido(const QString &newPolido);
    void setAcessorios(const QString &newAcessorios);
};

#endif // CLASSVIDROSCOMUNS_H
