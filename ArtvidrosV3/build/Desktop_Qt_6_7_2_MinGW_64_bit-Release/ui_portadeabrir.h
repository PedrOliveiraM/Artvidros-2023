/********************************************************************************
** Form generated from reading UI file 'portadeabrir.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PORTADEABRIR_H
#define UI_PORTADEABRIR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PortaDeAbrir
{
public:
    QLabel *label;
    QPushButton *pushButtonCalcular;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *lineEditValor;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLineEdit *lineEditLucro;
    QPushButton *pushButtonSalvar;
    QPushButton *pushButtonDesconto;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QLabel *labelLargura;
    QLineEdit *lineEditLargura;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelAltura;
    QLineEdit *lineEditAltura;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelVidros;
    QComboBox *comboBoxVidros;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QComboBox *comboBoxPuxador;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QComboBox *comboBoxKit;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_5;
    QComboBox *comboBoxTrinco;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_7;
    QComboBox *comboBoxPelicula;
    QPushButton *pushButtonLimpar;
    QPushButton *pushButtonRefatorando;

    void setupUi(QDialog *PortaDeAbrir)
    {
        if (PortaDeAbrir->objectName().isEmpty())
            PortaDeAbrir->setObjectName("PortaDeAbrir");
        PortaDeAbrir->resize(1366, 768);
        label = new QLabel(PortaDeAbrir);
        label->setObjectName("label");
        label->setGeometry(QRect(350, 40, 721, 161));
        QFont font;
        font.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font.setPointSize(72);
        font.setBold(false);
        label->setFont(font);
        pushButtonCalcular = new QPushButton(PortaDeAbrir);
        pushButtonCalcular->setObjectName("pushButtonCalcular");
        pushButtonCalcular->setGeometry(QRect(520, 490, 281, 41));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonCalcular->sizePolicy().hasHeightForWidth());
        pushButtonCalcular->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        pushButtonCalcular->setFont(font1);
        layoutWidget = new QWidget(PortaDeAbrir);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(560, 540, 221, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        lineEditValor = new QLineEdit(layoutWidget);
        lineEditValor->setObjectName("lineEditValor");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditValor->sizePolicy().hasHeightForWidth());
        lineEditValor->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        lineEditValor->setFont(font2);

        horizontalLayout->addWidget(lineEditValor);

        layoutWidget1 = new QWidget(PortaDeAbrir);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(560, 590, 221, 41));
        verticalLayout_6 = new QVBoxLayout(layoutWidget1);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName("label_6");

        horizontalLayout_2->addWidget(label_6);

        lineEditLucro = new QLineEdit(layoutWidget1);
        lineEditLucro->setObjectName("lineEditLucro");
        sizePolicy1.setHeightForWidth(lineEditLucro->sizePolicy().hasHeightForWidth());
        lineEditLucro->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(true);
        lineEditLucro->setFont(font3);

        horizontalLayout_2->addWidget(lineEditLucro);


        verticalLayout_6->addLayout(horizontalLayout_2);

        pushButtonSalvar = new QPushButton(PortaDeAbrir);
        pushButtonSalvar->setObjectName("pushButtonSalvar");
        pushButtonSalvar->setGeometry(QRect(810, 540, 51, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/salvar.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonSalvar->setIcon(icon);
        pushButtonSalvar->setIconSize(QSize(24, 24));
        pushButtonDesconto = new QPushButton(PortaDeAbrir);
        pushButtonDesconto->setObjectName("pushButtonDesconto");
        pushButtonDesconto->setGeometry(QRect(810, 490, 51, 41));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagens/desconto.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonDesconto->setIcon(icon1);
        pushButtonDesconto->setIconSize(QSize(24, 24));
        layoutWidget2 = new QWidget(PortaDeAbrir);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(160, 290, 131, 71));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelLargura = new QLabel(layoutWidget2);
        labelLargura->setObjectName("labelLargura");
        labelLargura->setFont(font1);

        verticalLayout->addWidget(labelLargura);

        lineEditLargura = new QLineEdit(layoutWidget2);
        lineEditLargura->setObjectName("lineEditLargura");
        sizePolicy1.setHeightForWidth(lineEditLargura->sizePolicy().hasHeightForWidth());
        lineEditLargura->setSizePolicy(sizePolicy1);
        lineEditLargura->setFont(font3);

        verticalLayout->addWidget(lineEditLargura);

        layoutWidget3 = new QWidget(PortaDeAbrir);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(310, 290, 131, 71));
        verticalLayout_2 = new QVBoxLayout(layoutWidget3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelAltura = new QLabel(layoutWidget3);
        labelAltura->setObjectName("labelAltura");
        labelAltura->setFont(font1);

        verticalLayout_2->addWidget(labelAltura);

        lineEditAltura = new QLineEdit(layoutWidget3);
        lineEditAltura->setObjectName("lineEditAltura");
        sizePolicy1.setHeightForWidth(lineEditAltura->sizePolicy().hasHeightForWidth());
        lineEditAltura->setSizePolicy(sizePolicy1);
        lineEditAltura->setFont(font3);

        verticalLayout_2->addWidget(lineEditAltura);

        layoutWidget4 = new QWidget(PortaDeAbrir);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(460, 290, 311, 71));
        verticalLayout_3 = new QVBoxLayout(layoutWidget4);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelVidros = new QLabel(layoutWidget4);
        labelVidros->setObjectName("labelVidros");
        labelVidros->setFont(font1);

        verticalLayout_3->addWidget(labelVidros);

        comboBoxVidros = new QComboBox(layoutWidget4);
        comboBoxVidros->addItem(QString());
        comboBoxVidros->setObjectName("comboBoxVidros");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBoxVidros->sizePolicy().hasHeightForWidth());
        comboBoxVidros->setSizePolicy(sizePolicy2);
        comboBoxVidros->setFont(font3);

        verticalLayout_3->addWidget(comboBoxVidros);

        layoutWidget5 = new QWidget(PortaDeAbrir);
        layoutWidget5->setObjectName("layoutWidget5");
        layoutWidget5->setGeometry(QRect(790, 290, 181, 71));
        verticalLayout_4 = new QVBoxLayout(layoutWidget5);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget5);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        verticalLayout_4->addWidget(label_2);

        comboBoxPuxador = new QComboBox(layoutWidget5);
        comboBoxPuxador->addItem(QString());
        comboBoxPuxador->setObjectName("comboBoxPuxador");
        sizePolicy2.setHeightForWidth(comboBoxPuxador->sizePolicy().hasHeightForWidth());
        comboBoxPuxador->setSizePolicy(sizePolicy2);
        comboBoxPuxador->setFont(font3);

        verticalLayout_4->addWidget(comboBoxPuxador);

        layoutWidget6 = new QWidget(PortaDeAbrir);
        layoutWidget6->setObjectName("layoutWidget6");
        layoutWidget6->setGeometry(QRect(990, 290, 211, 71));
        verticalLayout_5 = new QVBoxLayout(layoutWidget6);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget6);
        label_3->setObjectName("label_3");

        verticalLayout_5->addWidget(label_3);

        comboBoxKit = new QComboBox(layoutWidget6);
        comboBoxKit->addItem(QString());
        comboBoxKit->setObjectName("comboBoxKit");
        sizePolicy2.setHeightForWidth(comboBoxKit->sizePolicy().hasHeightForWidth());
        comboBoxKit->setSizePolicy(sizePolicy2);
        comboBoxKit->setFont(font3);

        verticalLayout_5->addWidget(comboBoxKit);

        layoutWidget_2 = new QWidget(PortaDeAbrir);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(620, 380, 211, 71));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName("label_5");

        verticalLayout_7->addWidget(label_5);

        comboBoxTrinco = new QComboBox(layoutWidget_2);
        comboBoxTrinco->addItem(QString());
        comboBoxTrinco->setObjectName("comboBoxTrinco");
        sizePolicy2.setHeightForWidth(comboBoxTrinco->sizePolicy().hasHeightForWidth());
        comboBoxTrinco->setSizePolicy(sizePolicy2);
        comboBoxTrinco->setFont(font3);

        verticalLayout_7->addWidget(comboBoxTrinco);

        layoutWidget_3 = new QWidget(PortaDeAbrir);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(390, 380, 211, 71));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_3);
        label_7->setObjectName("label_7");

        verticalLayout_8->addWidget(label_7);

        comboBoxPelicula = new QComboBox(layoutWidget_3);
        comboBoxPelicula->addItem(QString());
        comboBoxPelicula->setObjectName("comboBoxPelicula");
        sizePolicy2.setHeightForWidth(comboBoxPelicula->sizePolicy().hasHeightForWidth());
        comboBoxPelicula->setSizePolicy(sizePolicy2);
        comboBoxPelicula->setFont(font3);

        verticalLayout_8->addWidget(comboBoxPelicula);

        pushButtonLimpar = new QPushButton(PortaDeAbrir);
        pushButtonLimpar->setObjectName("pushButtonLimpar");
        pushButtonLimpar->setGeometry(QRect(810, 590, 51, 41));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imagens/limpar.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonLimpar->setIcon(icon2);
        pushButtonLimpar->setIconSize(QSize(24, 24));
        pushButtonRefatorando = new QPushButton(PortaDeAbrir);
        pushButtonRefatorando->setObjectName("pushButtonRefatorando");
        pushButtonRefatorando->setGeometry(QRect(850, 410, 211, 41));
        pushButtonRefatorando->setFont(font3);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/imagens/adicionar-a-cesta.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonRefatorando->setIcon(icon3);
        pushButtonRefatorando->setIconSize(QSize(24, 24));
        QWidget::setTabOrder(lineEditLargura, lineEditAltura);
        QWidget::setTabOrder(lineEditAltura, comboBoxVidros);
        QWidget::setTabOrder(comboBoxVidros, comboBoxPuxador);
        QWidget::setTabOrder(comboBoxPuxador, comboBoxKit);
        QWidget::setTabOrder(comboBoxKit, comboBoxPelicula);
        QWidget::setTabOrder(comboBoxPelicula, comboBoxTrinco);
        QWidget::setTabOrder(comboBoxTrinco, pushButtonRefatorando);
        QWidget::setTabOrder(pushButtonRefatorando, pushButtonCalcular);
        QWidget::setTabOrder(pushButtonCalcular, pushButtonDesconto);
        QWidget::setTabOrder(pushButtonDesconto, pushButtonSalvar);
        QWidget::setTabOrder(pushButtonSalvar, pushButtonLimpar);
        QWidget::setTabOrder(pushButtonLimpar, lineEditValor);
        QWidget::setTabOrder(lineEditValor, lineEditLucro);

        retranslateUi(PortaDeAbrir);

        QMetaObject::connectSlotsByName(PortaDeAbrir);
    } // setupUi

    void retranslateUi(QDialog *PortaDeAbrir)
    {
        PortaDeAbrir->setWindowTitle(QCoreApplication::translate("PortaDeAbrir", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("PortaDeAbrir", "<html><head/><body><p><span style=\" font-size:72pt;\">Porta de Abrir</span></p></body></html>", nullptr));
        pushButtonCalcular->setText(QCoreApplication::translate("PortaDeAbrir", "CALCULAR", nullptr));
        label_4->setText(QCoreApplication::translate("PortaDeAbrir", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">VALOR</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("PortaDeAbrir", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">LUCRO</span></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        lineEditLucro->setWhatsThis(QCoreApplication::translate("PortaDeAbrir", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButtonSalvar->setText(QString());
        pushButtonDesconto->setText(QString());
        labelLargura->setText(QCoreApplication::translate("PortaDeAbrir", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Largura</span></p></body></html>", nullptr));
        labelAltura->setText(QCoreApplication::translate("PortaDeAbrir", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Altura</span></p></body></html>", nullptr));
        labelVidros->setText(QCoreApplication::translate("PortaDeAbrir", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Vidros</span></p></body></html>", nullptr));
        comboBoxVidros->setItemText(0, QString());

        label_2->setText(QCoreApplication::translate("PortaDeAbrir", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Puxador</span></p></body></html>", nullptr));
        comboBoxPuxador->setItemText(0, QString());

        label_3->setText(QCoreApplication::translate("PortaDeAbrir", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Kit</span></p></body></html>", nullptr));
        comboBoxKit->setItemText(0, QString());

        label_5->setText(QCoreApplication::translate("PortaDeAbrir", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Trinco</span></p></body></html>", nullptr));
        comboBoxTrinco->setItemText(0, QString());

        label_7->setText(QCoreApplication::translate("PortaDeAbrir", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Pel\303\255cula</span></p></body></html>", nullptr));
        comboBoxPelicula->setItemText(0, QString());

        pushButtonLimpar->setText(QString());
        pushButtonRefatorando->setText(QCoreApplication::translate("PortaDeAbrir", "Adicionais", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PortaDeAbrir: public Ui_PortaDeAbrir {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PORTADEABRIR_H
