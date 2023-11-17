#ifndef ORCAMENTO_H
#define ORCAMENTO_H
#include <QString>
class Orcamento
{
private:

public:
    Orcamento();
    // faz a comunicação com o banco de dados
    float queryBD(QString product , QString type); //-> consulta ao BD
    void includeBD(QString product , float value ,QString  type , float profit);//-> inclui no BD
    void alterBD(QString product , float value ,QString  type , float profit); //->altera no BD
    void deleteBD(QString id);//->deleta no BD

};

#endif // ORCAMENTO_H
