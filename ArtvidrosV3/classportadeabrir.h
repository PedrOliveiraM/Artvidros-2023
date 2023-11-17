#ifndef CLASSPORTADEABRIR_H
#define CLASSPORTADEABRIR_H
#include <sqldatabasecontrol.h>
#include <herdavidros.h>
#include <QSqlQuery>
#include <orcamento.h>
#include <qdebug.h>
class ClassPortaDeAbrir : public herdaVidros
{
private:
    QString kit;
    QString film;
    QString latch;

public:
    ClassPortaDeAbrir();
    ClassPortaDeAbrir(float width, float height, const QString &glass, const QString &puller,
                      const QString &kit, const QString &film, const QString &latch);

    float metragem();
    float calculatePrice();
    float calculateProfit();

    QString getKit() const;
    void setKit(const QString &newKit);
    QString getFilm() const;
    void setFilm(const QString &newFilm);
    QString getLatch() const;
    void setLatch(const QString &newLatch);
};

#endif // CLASSPORTADEABRIR_H
