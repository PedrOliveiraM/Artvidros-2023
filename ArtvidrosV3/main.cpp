#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>
#include "QTimer"
#include "qsqldatabase.h"
#include <QSqlQuery>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSqlDatabase bancoDeDados = QSqlDatabase::addDatabase("QSQLITE");

    bancoDeDados.setConnectOptions();

    QString dir = qApp->applicationDirPath();
    QString banco = dir+"/DataBase/OrcamentoDB";

    qDebug()<<dir;
    bancoDeDados.setDatabaseName(banco);
    if (!bancoDeDados.open()){
        qDebug()<<"O BANCO DE DADOS NÃO FOI ABERTO!";
    }else {
        qDebug()<<"O BANCO DE DADOS FOI ABERTO!";
    }

    QSplashScreen *telaSplash = new QSplashScreen;

    // Carregar a imagem
    QPixmap pixmap(":/imagens/AberturaArtvidros.png");

    // Redimensionar a imagem para um tamanho específico (por exemplo, 300x200 pixels)
    QSize newSize(1000, 600);
    pixmap = pixmap.scaled(newSize, Qt::KeepAspectRatio);

    // Definir a imagem redimensionada como pixmap da tela de carregamento
    telaSplash->setPixmap(pixmap);
    telaSplash->show();

    MainWindow w;
    QTimer::singleShot(4000, telaSplash, SLOT(close()));
    QTimer::singleShot(4000, &w, SLOT(show()));

    return a.exec();
}
