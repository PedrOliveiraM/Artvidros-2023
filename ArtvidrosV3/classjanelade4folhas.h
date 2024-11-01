#ifndef CLASSJANELADE4FOLHAS_H
#define CLASSJANELADE4FOLHAS_H
#include <herdajanelas.h>
#include <sqldatabasecontrol.h>
#include <QString>
class ClassJanelaDe4Folhas : public HerdaJanelas
{
public:
    ClassJanelaDe4Folhas();
    ClassJanelaDe4Folhas(float width, float height, const QString &glass, const QString &bateFecha, const QString &kit, const QString &rodana, const QString &trinco, const QString &film);

    float metragem();
    float calculatePrice();
    float calculateProfit();
};

#endif // CLASSJANELADE4FOLHAS_H
