#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>
#include <QTimer>
#include "passworddialog.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QNetworkInterface>
#include <QMessageBox>
#include <QDebug>

QString getMacAddress() {
    foreach (const QNetworkInterface &interface, QNetworkInterface::allInterfaces()) {
        // Verifica se a interface está ativa e é física (excluindo interfaces virtuais)
        if (interface.flags().testFlag(QNetworkInterface::IsUp) &&
            interface.flags().testFlag(QNetworkInterface::IsRunning) &&
            !interface.flags().testFlag(QNetworkInterface::IsLoopBack)) {

            // Retorna o primeiro endereço MAC válido encontrado
            return interface.hardwareAddress();
        }
    }
    return QString(); // Retorna uma string vazia se não encontrar um MAC
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSqlDatabase bancoDeDados = QSqlDatabase::addDatabase("QSQLITE");

    bancoDeDados.setConnectOptions();

    QString dir = qApp->applicationDirPath();
    QString banco = dir + "/DataBase/ArtvidrosDB";

    qDebug() << dir;
    bancoDeDados.setDatabaseName(banco);
    if (!bancoDeDados.open()) {
        qDebug() << "O BANCO DE DADOS NÃO FOI ABERTO!";
    } else {
        qDebug() << "O BANCO DE DADOS FOI ABERTO!";
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

    // Obter e exibir o endereço MAC
    QString macAddress = getMacAddress();
    qDebug() << "Endereço MAC do dispositivo:" << macAddress;

    // Validar o endereço MAC
    if(macAddress != "00:D7:6D:BA:21:38") {
        QMessageBox::critical(nullptr, "Erro", "O programa não pode ser acessado");
        return -1; // Retorna um valor de erro
    }

    PasswordDialog passwordDialog;

    if (passwordDialog.exec() == QDialog::Accepted) {
        MainWindow w;
        w.show();
        QTimer::singleShot(4000, telaSplash, SLOT(close()));
        QTimer::singleShot(4000, &w, SLOT(show()));
        return a.exec();
    }

    return 0;
}
