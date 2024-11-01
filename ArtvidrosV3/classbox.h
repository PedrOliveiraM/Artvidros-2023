#ifndef CLASSBOX_H
#define CLASSBOX_H
#include <herdabox.h>
#include <QString>
#include <sqldatabasecontrol.h>
class ClassBox : public herdaBox
{
public:
    ClassBox();
    ClassBox(float largura,float largura2, float altura, const QString &vidro, const QString &kit,  const QString &rodana,const QString &pelicula);

    float metragem();
    float metragemCanto(float larguraX);
    float calculatePrice(QString tipo);
    float calculateProfit(QString tipo);
};

#endif // CLASSBOX_H
