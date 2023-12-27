#ifndef CLASSMOLDURA_H
#define CLASSMOLDURA_H
#include <QString>
#include <sqldatabasecontrol.h>
class ClassMoldura
{
private:
    float width;
    float height;
    float valueMold;
    QString espessura;
    QString acabamento;
    QString acessorios;
    int quant;

public:
    ClassMoldura();
    ClassMoldura(float width, float height, float valueMold,const QString &espessura, const QString &acabamento, const QString &acessorios, int quant);

    float metragem();
    float calculatePrice();
    float calculateProfit();
    float getWidth() const;
    void setWidth(float newWidth);
    float getHeight() const;
    void setHeight(float newHeight);
    float getValueMold() const;
    void setValueMold(float newValueMold);
    QString getAcabamento() const;
    void setAcabamento(const QString &newAcabamento);
    QString getAcessorios() const;
    void setAcessorios(const QString &newAcessorios);
    int getQuant() const;
    void setQuant(int newQuant);
    QString getEspessura() const;
    void setEspessura(const QString &newEspessura);
};

#endif // CLASSMOLDURA_H
