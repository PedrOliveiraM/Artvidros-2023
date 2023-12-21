#ifndef CLASSPIVOTANTEBASC_H
#define CLASSPIVOTANTEBASC_H
#include <herdapivobasc.h>
#include <sqldatabasecontrol.h>
class ClassPivotanteBasc : public HerdaPivoBasc
{
public:
    ClassPivotanteBasc();
    ClassPivotanteBasc(float width, float height, const QString &glass, const QString &kit, const QString &film ,const QString &lacth);

    float calculatePrice();
    float calculateProfit();
    float metragem();
};

#endif // CLASSPIVOTANTEBASC_H
