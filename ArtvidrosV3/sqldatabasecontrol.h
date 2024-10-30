#ifndef SQLDATABASECONTROL_H
#define SQLDATABASECONTROL_H
#include <QSqlQuery>
#include <QString>

class sqlDataBaseControl
{
public:
    sqlDataBaseControl();

    bool insertBD(QString codID,QString product,QString price,QString type,QString profit);
    bool toAlterBD(QString codID,QString product,QString price,QString type,QString profit);
    bool deleteBD(QString codID);

    bool insertBDSalvar(QString codID,QString client,QString product,QString price,QString profit,QString data , QString seller);
    bool toAlterBDSalvar(QString codID,QString client,QString product,QString price,QString profit,QString data , QString seller);
    bool deleteBDSalvar(QString codID,QString name);

    bool insertBDVendido(QString codID,QString client,QString product,QString price,QString profit,QString data , QString seller);
    bool toAlterBDVendido(QString codID,QString client,QString product,QString price,QString profit,QString data , QString seller);
    bool deleteBDVendido(QString codID,QString name);

    float buscarNoBDprice(QString name , QString type);
    float buscarNoBDprofit(QString name , QString type);

    float buscarNoBDprice(QString name);
    float buscarNoBDprofit(QString name);

    float buscarNoBDpriceID(QString id);
    float buscarNoBDprofitID(QString id);

    void upperTableSale();
    void lowerTableProducts();
    void upperTableProducts();

    bool login(QString tipo, QString password);
    bool changePassword(QString tipo, QString password,QString newPassword);


};

#endif // SQLDATABASECONTROL_H
