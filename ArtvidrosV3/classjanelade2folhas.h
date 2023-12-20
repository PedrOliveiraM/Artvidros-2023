#ifndef CLASSJANELADE2FOLHAS_H
#define CLASSJANELADE2FOLHAS_H
#include <QString>
#include<sqldatabasecontrol.h>
#include <herdajanelas.h>

class ClassJanelaDe2Folhas : public HerdaJanelas
{

public:
    ClassJanelaDe2Folhas();
    ClassJanelaDe2Folhas(float width, float height, const QString &glass, const QString &bateFecha, const QString &kit, const QString &rodana, const QString &trinco, const QString &film);

    float metragem();
    float calculatePrice();
    float calculateProfit();

};

#endif // CLASSJANELADE2FOLHAS_H
