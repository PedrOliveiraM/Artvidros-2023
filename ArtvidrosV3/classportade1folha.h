#ifndef CLASSPORTADE1FOLHA_H
#define CLASSPORTADE1FOLHA_H
#include <sqldatabasecontrol.h>
#include <herdavidros.h>
#include <QSqlQuery>
#include <qdebug.h>

class ClassPortaDe1Folha : public herdaVidros
{
private:
    QString fechadura;
    QString kitAluminio;
    QString film;
    QString latch;
    QString rodanas;
public:
    ClassPortaDe1Folha();
    ClassPortaDe1Folha(float width, float height, const QString &glass, const QString &puller,const QString &fechadura,
                        const QString &kitAluminio, const QString &film, const QString &latch, const QString &rodanas);

    float metragem();
    float calculatePrice();
    float calculateProfit();

};

#endif // CLASSPORTADE1FOLHA_H
