#ifndef CLASSPIVOBASCULA_H
#define CLASSPIVOBASCULA_H
#include <herdapivobasc.h>
#include <sqldatabasecontrol.h>
class ClassPivoBascula : public HerdaPivoBasc
{
public:
    ClassPivoBascula();
    ClassPivoBascula(float width, float height, const QString &glass, const QString &kit, const QString &film ,const QString &lacth);

    float calculatePrice();
    float calculateProfit();
    float metragem();
};

#endif // CLASSPIVOBASCULA_H
