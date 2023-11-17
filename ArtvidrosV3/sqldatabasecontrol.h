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

    float buscarNoBDprice(QString name , QString type);
    float buscarNoBDprofit(QString name , QString type);
};

#endif // SQLDATABASECONTROL_H
