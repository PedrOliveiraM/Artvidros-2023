#ifndef CLASSPORTADE4FOLHAS_H
#define CLASSPORTADE4FOLHAS_H
#include <sqldatabasecontrol.h>
#include <herdavidros.h>
#include <QSqlQuery>
#include <qdebug.h>

class ClassPortaDe4Folhas : public herdaVidros
{
private:
    QString fechadura;
    QString kitAluminio;
    QString film;
    QString latch;
    QString rodanas;
public:
    ClassPortaDe4Folhas();
    ClassPortaDe4Folhas(float width, float height, const QString &glass, const QString &puller,const QString &fechadura,
                        const QString &kitAluminio, const QString &film, const QString &latch, const QString &rodanas);

    float metragem();
    float calculatePrice();
    float calculateProfit();
};

#endif // CLASSPORTADE4FOLHAS_H
