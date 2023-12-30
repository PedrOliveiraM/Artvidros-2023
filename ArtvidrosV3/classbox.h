#ifndef CLASSBOX_H
#define CLASSBOX_H
#include <herdabox.h>
#include <QString>
#include <sqldatabasecontrol.h>
class ClassBox : public herdaBox
{
public:
    ClassBox();
    ClassBox(float largura, float altura, const QString &vidro, const QString &kit,  const QString &rodana,const QString &pelicula);

    float metragem();
    float metragemBoxCanto();
    float calculatePrice(QString tipo);
    float calculateProfit(QString tipo);
};

#endif // CLASSBOX_H
