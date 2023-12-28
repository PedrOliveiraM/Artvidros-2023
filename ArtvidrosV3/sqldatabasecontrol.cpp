#include "sqldatabasecontrol.h"

sqlDataBaseControl::sqlDataBaseControl()
{
}

bool sqlDataBaseControl::insertBD(QString codID, QString product, QString price, QString type, QString profit)
{
    QSqlQuery query;

    if (query.exec("INSERT INTO product (cod_product, name_product, value, type, profit) VALUES ('" + codID + "', '" + product + "', '" + price + "', '" + type + "', '" + profit + "')")) {
        qDebug() << "Query executada com sucesso!";
        return true;
    } else {
        qDebug() << "Erro ao executar a query:" << query.lastQuery();
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

bool sqlDataBaseControl::insertBDSalvar(QString codID, QString client, QString product, QString price, QString profit, QString data, QString seller)
{
    QSqlQuery query;
    if (query.exec("INSERT INTO sale (cod_sale,customer,product,price,profit,data,seller) VALUES ('"+codID+"','"+client+"','"+product+"', '"+price+"', '"+profit+"' ,'"+data+"','"+seller+"')")) {
        return true;
    }else {
        return false;
    }
    return 0;

}

bool sqlDataBaseControl::toAlterBDSalvar(QString codID, QString client, QString product, QString price, QString profit, QString data, QString seller)
{
    QSqlQuery query;
    QString updateQuery = "UPDATE product SET "
                          "customer = '" + client + "', "
                                     "product = '" + product + "', "
                                      "price = '" + price + "', "
                                    "profit = '" + profit + "', "
                                     "data = '" + data + "', "
                                   "seller = '" + seller + "' "
                                     "WHERE cod_sale = '" + codID + "'";

    if (query.exec(updateQuery)) {
        return true;
    } else {
        qDebug() << "Erro alterar";
        return false;
    }
}

bool sqlDataBaseControl::deleteBDSalvar(QString codID,QString name)
{

    QSqlQuery query;
    QString deleteQuery = ("DELETE FROM sale "
                           "WHERE cod_sale = '"+codID+"' and customer = '"+name+"'");
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
        return 0;
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
        return 0;
    }
    return 0;
}

float sqlDataBaseControl::buscarNoBDprice(QString name)
{
    QSqlQuery query;
    if (query.exec("SELECT * FROM product WHERE name_product = '" + name + "'")) {
        while (query.next()) {
            return query.value(2).toFloat();  // Suponho que o valor desejado esteja na primeira coluna
        }
    }else {
        qDebug()<<"erro ao consultar lucro de '"+name+ "'";
        return 0;
    }
    return 0;
}

float sqlDataBaseControl::buscarNoBDprofit(QString name)
{
    QSqlQuery query;
    if (query.exec("SELECT * FROM product WHERE name_product = '" + name + "'")) {
        while (query.next()) {
            return query.value(4).toFloat();  // Suponho que o valor desejado esteja na primeira coluna
        }
    }else {
        qDebug()<<"erro ao consultar lucro de '"+name+ "'";
        return 0;
    }
    return 0;
}
