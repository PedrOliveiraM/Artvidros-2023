/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
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
    QPushButton *pushButtonPortas;
    QPushButton *pushButtonOrcamentos;
    QPushButton *pushButtonProdutos;
    QPushButton *pushButtonVidrosComuns;
    QPushButton *pushButtonBox;
    QPushButton *pushButtonAdicionais;
    QPushButton *pushButtonMoldura;
    QPushButton *pushButtonFechamentoPia;
    QPushButton *pushButtonJanelas;
    QPushButton *pushButtonAreaPrecos_2;
    QPushButton *pushButtonAreaVendas;
    QPushButton *pushButtonAdmin;
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
        icon.addFile(QString::fromUtf8(":/imagens/orcamento.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionOr_amentos->setIcon(icon);
        actionPre_os = new QAction(MainWindow);
        actionPre_os->setObjectName("actionPre_os");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagens/Preco.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionPre_os->setIcon(icon1);
        actionVendas = new QAction(MainWindow);
        actionVendas->setObjectName("actionVendas");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imagens/vendas.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
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
        gridLayoutWidget->setGeometry(QRect(120, 180, 581, 351));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonPortas = new QPushButton(gridLayoutWidget);
        pushButtonPortas->setObjectName("pushButtonPortas");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonPortas->sizePolicy().hasHeightForWidth());
        pushButtonPortas->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        pushButtonPortas->setFont(font1);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/imagens/porta.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonPortas->setIcon(icon3);
        pushButtonPortas->setIconSize(QSize(32, 32));
        pushButtonPortas->setCheckable(false);

        gridLayout->addWidget(pushButtonPortas, 0, 0, 1, 1);

        pushButtonOrcamentos = new QPushButton(gridLayoutWidget);
        pushButtonOrcamentos->setObjectName("pushButtonOrcamentos");
        sizePolicy.setHeightForWidth(pushButtonOrcamentos->sizePolicy().hasHeightForWidth());
        pushButtonOrcamentos->setSizePolicy(sizePolicy);
        pushButtonOrcamentos->setFont(font1);
        pushButtonOrcamentos->setIcon(icon);
        pushButtonOrcamentos->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButtonOrcamentos, 3, 0, 1, 1);

        pushButtonProdutos = new QPushButton(gridLayoutWidget);
        pushButtonProdutos->setObjectName("pushButtonProdutos");
        sizePolicy.setHeightForWidth(pushButtonProdutos->sizePolicy().hasHeightForWidth());
        pushButtonProdutos->setSizePolicy(sizePolicy);
        pushButtonProdutos->setFont(font1);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/imagens/caixa.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonProdutos->setIcon(icon4);
        pushButtonProdutos->setIconSize(QSize(32, 32));
        pushButtonProdutos->setCheckable(false);

        gridLayout->addWidget(pushButtonProdutos, 3, 1, 1, 1);

        pushButtonVidrosComuns = new QPushButton(gridLayoutWidget);
        pushButtonVidrosComuns->setObjectName("pushButtonVidrosComuns");
        sizePolicy.setHeightForWidth(pushButtonVidrosComuns->sizePolicy().hasHeightForWidth());
        pushButtonVidrosComuns->setSizePolicy(sizePolicy);
        pushButtonVidrosComuns->setFont(font1);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/imagens/vidro comum.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonVidrosComuns->setIcon(icon5);
        pushButtonVidrosComuns->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButtonVidrosComuns, 2, 1, 1, 1);

        pushButtonBox = new QPushButton(gridLayoutWidget);
        pushButtonBox->setObjectName("pushButtonBox");
        sizePolicy.setHeightForWidth(pushButtonBox->sizePolicy().hasHeightForWidth());
        pushButtonBox->setSizePolicy(sizePolicy);
        pushButtonBox->setFont(font1);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/imagens/banho.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonBox->setIcon(icon6);
        pushButtonBox->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButtonBox, 1, 1, 1, 1);

        pushButtonAdicionais = new QPushButton(gridLayoutWidget);
        pushButtonAdicionais->setObjectName("pushButtonAdicionais");
        sizePolicy.setHeightForWidth(pushButtonAdicionais->sizePolicy().hasHeightForWidth());
        pushButtonAdicionais->setSizePolicy(sizePolicy);
        pushButtonAdicionais->setFont(font1);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/imagens/adicionar-a-cesta.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonAdicionais->setIcon(icon7);
        pushButtonAdicionais->setIconSize(QSize(32, 32));
        pushButtonAdicionais->setCheckable(false);

        gridLayout->addWidget(pushButtonAdicionais, 4, 0, 1, 1);

        pushButtonMoldura = new QPushButton(gridLayoutWidget);
        pushButtonMoldura->setObjectName("pushButtonMoldura");
        sizePolicy.setHeightForWidth(pushButtonMoldura->sizePolicy().hasHeightForWidth());
        pushButtonMoldura->setSizePolicy(sizePolicy);
        pushButtonMoldura->setFont(font1);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/imagens/moldura.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonMoldura->setIcon(icon8);
        pushButtonMoldura->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButtonMoldura, 2, 0, 1, 1);

        pushButtonFechamentoPia = new QPushButton(gridLayoutWidget);
        pushButtonFechamentoPia->setObjectName("pushButtonFechamentoPia");
        sizePolicy.setHeightForWidth(pushButtonFechamentoPia->sizePolicy().hasHeightForWidth());
        pushButtonFechamentoPia->setSizePolicy(sizePolicy);
        pushButtonFechamentoPia->setFont(font1);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/imagens/pia-da-cozinha.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonFechamentoPia->setIcon(icon9);
        pushButtonFechamentoPia->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButtonFechamentoPia, 1, 0, 1, 1);

        pushButtonJanelas = new QPushButton(gridLayoutWidget);
        pushButtonJanelas->setObjectName("pushButtonJanelas");
        sizePolicy.setHeightForWidth(pushButtonJanelas->sizePolicy().hasHeightForWidth());
        pushButtonJanelas->setSizePolicy(sizePolicy);
        pushButtonJanelas->setFont(font1);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/imagens/janela.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonJanelas->setIcon(icon10);
        pushButtonJanelas->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButtonJanelas, 0, 1, 1, 1);

        pushButtonAreaPrecos_2 = new QPushButton(gridLayoutWidget);
        pushButtonAreaPrecos_2->setObjectName("pushButtonAreaPrecos_2");
        sizePolicy.setHeightForWidth(pushButtonAreaPrecos_2->sizePolicy().hasHeightForWidth());
        pushButtonAreaPrecos_2->setSizePolicy(sizePolicy);
        pushButtonAreaPrecos_2->setFont(font1);
        pushButtonAreaPrecos_2->setIcon(icon1);
        pushButtonAreaPrecos_2->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButtonAreaPrecos_2, 5, 0, 1, 1);

        pushButtonAreaVendas = new QPushButton(gridLayoutWidget);
        pushButtonAreaVendas->setObjectName("pushButtonAreaVendas");
        sizePolicy.setHeightForWidth(pushButtonAreaVendas->sizePolicy().hasHeightForWidth());
        pushButtonAreaVendas->setSizePolicy(sizePolicy);
        pushButtonAreaVendas->setFont(font1);
        pushButtonAreaVendas->setIcon(icon2);
        pushButtonAreaVendas->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButtonAreaVendas, 5, 1, 1, 1);

        pushButtonAdmin = new QPushButton(gridLayoutWidget);
        pushButtonAdmin->setObjectName("pushButtonAdmin");
        sizePolicy.setHeightForWidth(pushButtonAdmin->sizePolicy().hasHeightForWidth());
        pushButtonAdmin->setSizePolicy(sizePolicy);
        pushButtonAdmin->setFont(font1);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/imagens/admin.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonAdmin->setIcon(icon11);
        pushButtonAdmin->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButtonAdmin, 4, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName("menuMenu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(pushButtonPortas, pushButtonJanelas);
        QWidget::setTabOrder(pushButtonJanelas, pushButtonFechamentoPia);
        QWidget::setTabOrder(pushButtonFechamentoPia, pushButtonBox);
        QWidget::setTabOrder(pushButtonBox, pushButtonMoldura);
        QWidget::setTabOrder(pushButtonMoldura, pushButtonVidrosComuns);
        QWidget::setTabOrder(pushButtonVidrosComuns, pushButtonOrcamentos);
        QWidget::setTabOrder(pushButtonOrcamentos, pushButtonAdicionais);

        menubar->addAction(menuMenu->menuAction());

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
        pushButtonPortas->setText(QCoreApplication::translate("MainWindow", "             Portas               ", nullptr));
        pushButtonOrcamentos->setText(QCoreApplication::translate("MainWindow", " \303\201rea de Or\303\247amentos  ", nullptr));
        pushButtonProdutos->setText(QCoreApplication::translate("MainWindow", "      Produtos          ", nullptr));
        pushButtonVidrosComuns->setText(QCoreApplication::translate("MainWindow", "    Vidros Comuns  ", nullptr));
        pushButtonBox->setText(QCoreApplication::translate("MainWindow", "          Box               ", nullptr));
        pushButtonAdicionais->setText(QCoreApplication::translate("MainWindow", "           Adicionais           ", nullptr));
        pushButtonMoldura->setText(QCoreApplication::translate("MainWindow", "         Molduras            ", nullptr));
        pushButtonFechamentoPia->setText(QCoreApplication::translate("MainWindow", "   Fehamento de Pia     ", nullptr));
        pushButtonJanelas->setText(QCoreApplication::translate("MainWindow", "      Janelas            ", nullptr));
        pushButtonAreaPrecos_2->setText(QCoreApplication::translate("MainWindow", "             Pre\303\247os               ", nullptr));
        pushButtonAreaVendas->setText(QCoreApplication::translate("MainWindow", "       Vendas           ", nullptr));
        pushButtonAdmin->setText(QCoreApplication::translate("MainWindow", "        Ajuda             ", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("MainWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
