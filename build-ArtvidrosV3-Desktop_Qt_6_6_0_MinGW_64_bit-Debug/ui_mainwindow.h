/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOr_amentos;
    QAction *actionPre_os;
    QAction *actionVendas;
    QWidget *centralwidget;
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButtonFechamentoPia;
    QPushButton *pushButtonMoldura;
    QPushButton *pushButtonJanelas;
    QPushButton *pushButtonBox;
    QPushButton *pushButtonOrcamentos;
    QPushButton *pushButtonAreaPrecos;
    QPushButton *pushButtonAdicionaismuns;
    QPushButton *pushButtonPortas;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionOr_amentos = new QAction(MainWindow);
        actionOr_amentos->setObjectName("actionOr_amentos");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/orcamento.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOr_amentos->setIcon(icon);
        actionPre_os = new QAction(MainWindow);
        actionPre_os->setObjectName("actionPre_os");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagens/Preco.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPre_os->setIcon(icon1);
        actionVendas = new QAction(MainWindow);
        actionVendas->setObjectName("actionVendas");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imagens/vendas.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionVendas->setIcon(icon2);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(170, -10, 461, 231));
        QFont font;
        font.setBold(true);
        label->setFont(font);
        label->setPixmap(QPixmap(QString::fromUtf8(":/imagens/AberturaArtvidros.png")));
        label->setScaledContents(true);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(120, 220, 581, 231));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonFechamentoPia = new QPushButton(gridLayoutWidget);
        pushButtonFechamentoPia->setObjectName("pushButtonFechamentoPia");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonFechamentoPia->sizePolicy().hasHeightForWidth());
        pushButtonFechamentoPia->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        pushButtonFechamentoPia->setFont(font1);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/imagens/pia-da-cozinha.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonFechamentoPia->setIcon(icon3);
        pushButtonFechamentoPia->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButtonFechamentoPia, 1, 0, 1, 1);

        pushButtonMoldura = new QPushButton(gridLayoutWidget);
        pushButtonMoldura->setObjectName("pushButtonMoldura");
        sizePolicy.setHeightForWidth(pushButtonMoldura->sizePolicy().hasHeightForWidth());
        pushButtonMoldura->setSizePolicy(sizePolicy);
        pushButtonMoldura->setFont(font1);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/imagens/moldura.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonMoldura->setIcon(icon4);
        pushButtonMoldura->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButtonMoldura, 2, 0, 1, 1);

        pushButtonJanelas = new QPushButton(gridLayoutWidget);
        pushButtonJanelas->setObjectName("pushButtonJanelas");
        sizePolicy.setHeightForWidth(pushButtonJanelas->sizePolicy().hasHeightForWidth());
        pushButtonJanelas->setSizePolicy(sizePolicy);
        pushButtonJanelas->setFont(font1);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/imagens/janela.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonJanelas->setIcon(icon5);
        pushButtonJanelas->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButtonJanelas, 0, 1, 1, 1);

        pushButtonBox = new QPushButton(gridLayoutWidget);
        pushButtonBox->setObjectName("pushButtonBox");
        sizePolicy.setHeightForWidth(pushButtonBox->sizePolicy().hasHeightForWidth());
        pushButtonBox->setSizePolicy(sizePolicy);
        pushButtonBox->setFont(font1);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/imagens/banho.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonBox->setIcon(icon6);
        pushButtonBox->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButtonBox, 1, 1, 1, 1);

        pushButtonOrcamentos = new QPushButton(gridLayoutWidget);
        pushButtonOrcamentos->setObjectName("pushButtonOrcamentos");
        sizePolicy.setHeightForWidth(pushButtonOrcamentos->sizePolicy().hasHeightForWidth());
        pushButtonOrcamentos->setSizePolicy(sizePolicy);
        pushButtonOrcamentos->setFont(font1);
        pushButtonOrcamentos->setIcon(icon);
        pushButtonOrcamentos->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButtonOrcamentos, 3, 0, 1, 1);

        pushButtonAreaPrecos = new QPushButton(gridLayoutWidget);
        pushButtonAreaPrecos->setObjectName("pushButtonAreaPrecos");
        sizePolicy.setHeightForWidth(pushButtonAreaPrecos->sizePolicy().hasHeightForWidth());
        pushButtonAreaPrecos->setSizePolicy(sizePolicy);
        pushButtonAreaPrecos->setFont(font1);
        pushButtonAreaPrecos->setIcon(icon1);
        pushButtonAreaPrecos->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButtonAreaPrecos, 3, 1, 1, 1);

        pushButtonVidrosComuns = new QPushButton(gridLayoutWidget);
        pushButtonVidrosComuns->setObjectName("pushButtonVidrosComuns");
        sizePolicy.setHeightForWidth(pushButtonVidrosComuns->sizePolicy().hasHeightForWidth());
        pushButtonVidrosComuns->setSizePolicy(sizePolicy);
        pushButtonVidrosComuns->setFont(font1);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/imagens/vidro comum.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonVidrosComuns->setIcon(icon7);
        pushButtonVidrosComuns->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButtonVidrosComuns, 2, 1, 1, 1);

        pushButtonPortas = new QPushButton(gridLayoutWidget);
        pushButtonPortas->setObjectName("pushButtonPortas");
        sizePolicy.setHeightForWidth(pushButtonPortas->sizePolicy().hasHeightForWidth());
        pushButtonPortas->setSizePolicy(sizePolicy);
        pushButtonPortas->setFont(font1);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/imagens/porta.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonPortas->setIcon(icon8);
        pushButtonPortas->setIconSize(QSize(32, 32));
        pushButtonPortas->setCheckable(false);

        gridLayout->addWidget(pushButtonPortas, 0, 0, 1, 1);

       puspushButtonAdicionaistralWidget(centralwidget);
        pushButtonAdicionaisuBar(MainWindow);
        menubar->setObjectName("menubpushButtonAdiciopushButtonAdicionaisry(QRect(0, 0, 800, 22));
        pushButtonAdicionaisnu(menubar);
        pushButtonAdicionaistName("menuMenu");
        pushButtonAdicionaisuBar(menubar);
        pushButtonAdicionaistatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionOr_amentos);
        menuMenu->addAction(actionPre_os);
        menuMenu->addAction(actionVendas);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOr_amentos->setText(QCoreApplication::translate("MainWindow", "Or\303\247amentos", nullptr));
        actionPre_os->setText(QCoreApplication::translate("MainWindow", "Pre\303\247os", nullptr));
        actionVendas->setText(QCoreApplication::translate("MainWindow", "Vendas", nullptr));
        label->setText(QString());
        pushButtonFechamentoPia->setText(QCoreApplication::translate("MainWindow", "   Fehamento de Pia     ", nullptr));
        pushButtonMoldura->setText(QCoreApplication::translate("MainWindow", "         Molduras            ", nullptr));
        pushButtonJanelas->setText(QCoreApplication::translate("MainWindow", "      Janelas            ", nullptr));
        pushButtonBox->setText(QCoreApplication::translate("MainWindow", "          Box               ", nullptr));
        pushButtonOrcamentos->setText(QCoreApplication::translate("MainWindow", " \303\201rea de Or\303\247amentos  ", nullptr));
        pushButtonAreaPrecos->setText(QCoreApplication::translate("MainWindow", "  \303\201rea de Pre\303\247os    ", nullptr));
        pushButtonVidrosComuns->setText(QCoreApplication::translate("MainWindow", "    Vidros Comuns  ", nullptr));
        pushButtonPortas->setText(QCoreApplication::translate("MainWindow", "             Portas               ", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("MainWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_pushButtonAdicionais// UI_MAINWINDOW_H
