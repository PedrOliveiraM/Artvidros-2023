#include "sqldatabasecontrol.h"

sqlDataBaseControl::sqlDataBaseControl()
{
}

bool sqlDataBaseControl::insertBD(QString codID, QString product, QString price, QString type, QString profit)
{
    QSqlQuery query;
    if (query.exec("INSERT INTO product (cod_product, name_product, value, type, profit)VALUES ('"+codID+"', '"+product+"', '"+price+"', '"+type+"', '"+profit+"')")) {
        return true;
    }else {
        return false;
    }
    return 0;
}

bool sqlDataBaseControl::toAlterBD(QString codID, QString product, QString price, QString type, QString profit)
{
    QSqlQuery query;
    QString updateQuery = "UPDATE product SET "
                          "name_product = '" + product + "', "
                          "value = '" + price + "', "
                          "type = '" + type + "', "
                          "profit = '" + profit + "' "
                          "WHERE cod_product = '" + codID + "'";

    if (query.exec(updateQuery)) {
        return true;
    } else {
        qDebug() << "Erro alterar";
        return false;
    }


}

bool sqlDataBaseControl::deleteBD(QString codID)
{
    QSqlQuery query;
    QString deleteQuery = ("DELETE FROM product "
                           "WHERE cod_product = '"+codID+"'");
    if (query.exec(deleteQuery)) {
        return true;
    } else {
        qDebug() << "Erro ao deletar ";
        return false;
    }

}

float sqlDataBaseControl::buscarNoBDprice(QString name, QString type)
{
    QSqlQuery query;
    if (query.exec("SELECT * FROM product WHERE name_product = '" + name + "' and type = '" + type + "' ")) {
        while (query.next()) {
            return query.value(2).toFloat();  // Suponho que o valor desejado esteja na primeira coluna
        }
    }else {
        qDebug()<<"erro ao consultar valor de '"+name+ "'";
    }
    return 0;
}
float sqlDataBaseControl::buscarNoBDprofit(QString name, QString type)
{
    QSqlQuery query;
    if (query.exec("SELECT * FROM product WHERE name_product = '" + name + "' and type = '" + type + "' ")) {
        while (query.next()) {
            return query.value(4).toFloat();  // Suponho que o valor desejado esteja na primeira coluna
        }
    }else {
        qDebug()<<"erro ao consultar lucro de '"+name+ "'";
    }
    return 0;
}