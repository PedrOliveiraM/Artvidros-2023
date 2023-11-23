#ifndef ADICIONAISOBJ_H
#define ADICIONAISOBJ_H
#include <QString>
class AdicionaisOBJ
{
private:
    QString id;
    QString name;
    QString quant;
    QString price;
    QString profit;

public:
    AdicionaisOBJ();
    AdicionaisOBJ(const QString &id, const QString &name, const QString &quant, const QString &price, const QString &profit);

    float metrage(float width , float height);
    float comprimento(float compriemnto);
    QString geraID();

    float calcularPreco(float value , float metragem, int quant);

    QString getId() const;
    void setId(const QString &newId);
    QString getName() const;
    void setName(const QString &newName);
    QString getQuant() const;
    void setQuant(const QString &newQuant);
    QString getPrice() const;
    void setPrice(const QString &newPrice);
    QString getProfit() const;
    void setProfit(const QString &newProfit);
};

#endif // ADICIONAISOBJ_H
