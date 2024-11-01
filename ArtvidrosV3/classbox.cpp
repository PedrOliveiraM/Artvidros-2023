#include "classbox.h"

ClassBox::ClassBox()
{

}

ClassBox::ClassBox(float largura,float largura2, float altura, const QString &vidro, const QString &kit, const QString &rodana, const QString &pelicula):
    herdaBox(largura,largura2,altura,vidro,kit,rodana,pelicula)
{

}

float ClassBox::metragem()
{
    float largura = getLargura();
    float altura = getAltura();

    int largValida = largura * 100;

    qDebug() << "VALIDAR LARGURA"<<largValida;

    if (largValida % 2 == 0 ){
         qDebug() << "ENTROU"<<largValida;
        int larg = static_cast<int>(((largura * 100)/2) + 5);
        int larg2 = static_cast<int>((largura * 100)/2);
        int altu = static_cast<int>(altura * 100);

        // Ajusta para múltiplo de 5
        while (larg % 5 != 0) {
            larg += 1;
        }
        while (larg2 % 5 != 0) {
            larg2 += 1;
        }
        while (altu % 5 != 0) {
            altu += 1;
        }



        // Converte para metros
        float x = larg / 100.0;  // Ajuste para garantir uma divisão de ponto flutuante
        float x2 = larg2 / 100.0;  // Ajuste para garantir uma divisão de ponto flutuante
        float y = altu / 100.0;


        qDebug() << "*********************";
        qDebug() << "LARG 1" << larg;
        qDebug() << "LARG 2" << larg2;
        qDebug() << "*********************";
        qDebug() << "teste metragem vidro frontal: " << (x * y + x2 * y);
        return (x * y + x2 * y);
    }


    // Calcula as larguras e a altura em centímetros
    int larg = static_cast<int>(largura * 100 + 5);
    int altu = static_cast<int>(altura * 100);


    // Ajusta para múltiplo de 5
    while (larg % 5 != 0) {
        larg += 1;
    }
    while (altu % 5 != 0) {
        altu += 1;
    }

    qDebug() << "MEIO";
    qDebug() << "LARG " << larg;

    // Ajuste para meio
    larg = larg / 2;

    qDebug() << "FIM";
    qDebug() << "LARG " << larg;

    // Converte para metros
    float x = larg / 100.0;  // Ajuste para garantir uma divisão de ponto flutuante
    float y = altu / 100.0;

    qDebug() << "teste metragem vidro frontal: " << (x * y + x * y);
    return (x * y + x * y);
}


float ClassBox::metragemCanto(float larguraX)
{
    float largura = larguraX;
    float altura = getAltura();

    int largValida = largura * 100;

    qDebug() << "VALIDAR LARGURA"<<largValida;

    if (largValida % 2 == 0 ){
        qDebug() << "ENTROU"<<largValida;
        int larg = static_cast<int>(((largura * 100)/2) + 5);
        int larg2 = static_cast<int>((largura * 100)/2);
        int altu = static_cast<int>(altura * 100);

        // Ajusta para múltiplo de 5
        while (larg % 5 != 0) {
            larg += 1;
        }
        while (larg2 % 5 != 0) {
            larg2 += 1;
        }
        while (altu % 5 != 0) {
            altu += 1;
        }



        // Converte para metros
        float x = larg / 100.0;  // Ajuste para garantir uma divisão de ponto flutuante
        float x2 = larg2 / 100.0;  // Ajuste para garantir uma divisão de ponto flutuante
        float y = altu / 100.0;


        qDebug() << "*********************";
        qDebug() << "LARG 1" << larg;
        qDebug() << "LARG 2" << larg2;
        qDebug() << "*********************";
        qDebug() << "teste metragem vidro frontal: " << (x * y + x2 * y);
        return (x * y + x2 * y);
    }


    // Calcula as larguras e a altura em centímetros
    int larg = static_cast<int>(largura * 100 + 5);
    int altu = static_cast<int>(altura * 100);


    // Ajusta para múltiplo de 5
    while (larg % 5 != 0) {
        larg += 1;
    }
    while (altu % 5 != 0) {
        altu += 1;
    }

    qDebug() << "MEIO";
    qDebug() << "LARG " << larg;

    // Ajuste para meio
    larg = larg / 2;

    qDebug() << "FIM";
    qDebug() << "LARG " << larg;

    // Converte para metros
    float x = larg / 100.0;  // Ajuste para garantir uma divisão de ponto flutuante
    float y = altu / 100.0;

    qDebug() << "teste metragem vidro frontal: " << (x * y + x * y);
    return (x * y + x * y);
}


float ClassBox::calculatePrice(QString tipo)
{

    sqlDataBaseControl aux;
    float metro = metragem();

    if (tipo == "kitboxcanto"){
        metro = metragemCanto(largura) + metragemCanto(largura2);
    }

    float Vglass = aux.buscarNoBDprice(vidro , "box");
    float VkitAluminio = aux.buscarNoBDprice(kit , tipo);
    float Vfilm = aux.buscarNoBDprice(pelicula , "pelicula") * metro;

    qDebug()<<"calcular PRICE BOX";
    qDebug()<<"tipo"<<tipo;
    qDebug()<<"metragem"<<metro;
    qDebug()<<"vidro & ACRILICO"<<Vglass;
    qDebug()<<"vidro"<<(metro * Vglass);
    qDebug()<<"kit"<<VkitAluminio;
    qDebug()<<"pelicula"<<Vfilm;

    float value = (metro * Vglass)  + VkitAluminio + Vfilm;

    return value;

}

float ClassBox::calculateProfit(QString tipo)
{
    sqlDataBaseControl aux;

    float metro = metragem();

    if (tipo == "kitboxcanto")
        metro = metragemCanto(largura) + metragemCanto(largura2);;

    float Vglass = aux.buscarNoBDprofit(vidro , "box");
    float VkitAluminio = aux.buscarNoBDprofit(kit , tipo);
    float Vfilm = aux.buscarNoBDprofit(pelicula , "pelicula") * metro;

    qDebug()<<"calcular PROFIT BOX";
    qDebug()<<"metragem"<<metro;
    qDebug()<<"tipo"<<tipo;
    qDebug()<<"vidro"<<(metro * Vglass);
    qDebug()<<"kit"<<VkitAluminio;
    qDebug()<<"pelicula"<<Vfilm;

    float value = (metro * Vglass)  + VkitAluminio + Vfilm;

    return value;
}
