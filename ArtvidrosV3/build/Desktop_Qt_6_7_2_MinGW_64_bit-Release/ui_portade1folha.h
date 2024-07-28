/********************************************************************************
** Form generated from reading UI file 'portade1folha.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PORTADE1FOLHA_H
#define UI_PORTADE1FOLHA_H

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

class Ui_PortaDe1Folha
{
public:
    QPushButton *pushButtonSalvar;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout;
    QLabel *labelLargura;
    QLineEdit *lineEditLargura;
    QWidget *layoutWidget_8;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QComboBox *comboBoxFechadura;
    QPushButton *pushButtonRefatorando;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QComboBox *comboBoxPuxador;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_7;
    QComboBox *comboBoxPelicula;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelVidros;
    QComboBox *comboBoxVidros;
    QWidget *layoutWidget_9;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_5;
    QComboBox *comboBoxTrinco;
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelAltura;
    QLineEdit *lineEditAltura;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *lineEditValor;
    QWidget *layoutWidget_11;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_9;
    QComboBox *comboBoxKitAluminio;
    QPushButton *pushButtonLimpar;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLineEdit *lineEditLucro;
    QLabel *label;
    QPushButton *pushButtonCalcular;
    QPushButton *pushButtonDesconto;

    void setupUi(QDialog *PortaDe1Folha)
    {
        if (PortaDe1Folha->objectName().isEmpty())
            PortaDe1Folha->setObjectName("PortaDe1Folha");
        PortaDe1Folha->resize(1366, 768);
        pushButtonSalvar = new QPushButton(PortaDe1Folha);
        pushButtonSalvar->setObjectName("pushButtonSalvar");
        pushButtonSalvar->setGeometry(QRect(830, 570, 51, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/salvar.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonSalvar->setIcon(icon);
        pushButtonSalvar->setIconSize(QSize(24, 24));
        layoutWidget_4 = new QWidget(PortaDe1Folha);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(70, 320, 131, 71));
        verticalLayout = new QVBoxLayout(layoutWidget_4);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelLargura = new QLabel(layoutWidget_4);
        labelLargura->setObjectName("labelLargura");
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        labelLargura->setFont(font);

        verticalLayout->addWidget(labelLargura);

        lineEditLargura = new QLineEdit(layoutWidget_4);
        lineEditLargura->setObjectName("lineEditLargura");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditLargura->sizePolicy().hasHeightForWidth());
        lineEditLargura->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        lineEditLargura->setFont(font1);

        verticalLayout->addWidget(lineEditLargura);

        layoutWidget_8 = new QWidget(PortaDe1Folha);
        layoutWidget_8->setObjectName("layoutWidget_8");
        layoutWidget_8->setGeometry(QRect(860, 320, 211, 71));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_8);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_8);
        label_3->setObjectName("label_3");

        verticalLayout_5->addWidget(label_3);

        comboBoxFechadura = new QComboBox(layoutWidget_8);
        comboBoxFechadura->addItem(QString());
        comboBoxFechadura->setObjectName("comboBoxFechadura");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBoxFechadura->sizePolicy().hasHeightForWidth());
        comboBoxFechadura->setSizePolicy(sizePolicy1);
        comboBoxFechadura->setFont(font1);

        verticalLayout_5->addWidget(comboBoxFechadura);

        pushButtonRefatorando = new QPushButton(PortaDe1Folha);
        pushButtonRefatorando->setObjectName("pushButtonRefatorando");
        pushButtonRefatorando->setGeometry(QRect(820, 440, 211, 41));
        pushButtonRefatorando->setFont(font1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagens/adicionar-a-cesta.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonRefatorando->setIcon(icon1);
        pushButtonRefatorando->setIconSize(QSize(24, 24));
        layoutWidget_5 = new QWidget(PortaDe1Folha);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(670, 320, 181, 71));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_5);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        verticalLayout_4->addWidget(label_2);

        comboBoxPuxador = new QComboBox(layoutWidget_5);
        comboBoxPuxador->addItem(QString());
        comboBoxPuxador->setObjectName("comboBoxPuxador");
        sizePolicy1.setHeightForWidth(comboBoxPuxador->sizePolicy().hasHeightForWidth());
        comboBoxPuxador->setSizePolicy(sizePolicy1);
        comboBoxPuxador->setFont(font1);

        verticalLayout_4->addWidget(comboBoxPuxador);

        layoutWidget_7 = new QWidget(PortaDe1Folha);
        layoutWidget_7->setObjectName("layoutWidget_7");
        layoutWidget_7->setGeometry(QRect(380, 410, 211, 71));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_7);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_7);
        label_7->setObjectName("label_7");

        verticalLayout_8->addWidget(label_7);

        comboBoxPelicula = new QComboBox(layoutWidget_7);
        comboBoxPelicula->addItem(QString());
        comboBoxPelicula->setObjectName("comboBoxPelicula");
        sizePolicy1.setHeightForWidth(comboBoxPelicula->sizePolicy().hasHeightForWidth());
        comboBoxPelicula->setSizePolicy(sizePolicy1);
        comboBoxPelicula->setFont(font1);

        verticalLayout_8->addWidget(comboBoxPelicula);

        layoutWidget = new QWidget(PortaDe1Folha);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(350, 320, 311, 71));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelVidros = new QLabel(layoutWidget);
        labelVidros->setObjectName("labelVidros");
        labelVidros->setFont(font);

        verticalLayout_3->addWidget(labelVidros);

        comboBoxVidros = new QComboBox(layoutWidget);
        comboBoxVidros->addItem(QString());
        comboBoxVidros->setObjectName("comboBoxVidros");
        sizePolicy1.setHeightForWidth(comboBoxVidros->sizePolicy().hasHeightForWidth());
        comboBoxVidros->setSizePolicy(sizePolicy1);
        comboBoxVidros->setFont(font1);

        verticalLayout_3->addWidget(comboBoxVidros);

        layoutWidget_9 = new QWidget(PortaDe1Folha);
        layoutWidget_9->setObjectName("layoutWidget_9");
        layoutWidget_9->setGeometry(QRect(600, 410, 211, 71));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_9);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_9);
        label_5->setObjectName("label_5");

        verticalLayout_7->addWidget(label_5);

        comboBoxTrinco = new QComboBox(layoutWidget_9);
        comboBoxTrinco->addItem(QString());
        comboBoxTrinco->setObjectName("comboBoxTrinco");
        sizePolicy1.setHeightForWidth(comboBoxTrinco->sizePolicy().hasHeightForWidth());
        comboBoxTrinco->setSizePolicy(sizePolicy1);
        comboBoxTrinco->setFont(font1);

        verticalLayout_7->addWidget(comboBoxTrinco);

        layoutWidget_6 = new QWidget(PortaDe1Folha);
        layoutWidget_6->setObjectName("layoutWidget_6");
        layoutWidget_6->setGeometry(QRect(210, 320, 131, 71));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_6);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelAltura = new QLabel(layoutWidget_6);
        labelAltura->setObjectName("labelAltura");
        labelAltura->setFont(font);

        verticalLayout_2->addWidget(labelAltura);

        lineEditAltura = new QLineEdit(layoutWidget_6);
        lineEditAltura->setObjectName("lineEditAltura");
        sizePolicy.setHeightForWidth(lineEditAltura->sizePolicy().hasHeightForWidth());
        lineEditAltura->setSizePolicy(sizePolicy);
        lineEditAltura->setFont(font1);

        verticalLayout_2->addWidget(lineEditAltura);

        layoutWidget_3 = new QWidget(PortaDe1Folha);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(580, 570, 221, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget_3);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_3);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        lineEditValor = new QLineEdit(layoutWidget_3);
        lineEditValor->setObjectName("lineEditValor");
        sizePolicy.setHeightForWidth(lineEditValor->sizePolicy().hasHeightForWidth());
        lineEditValor->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        lineEditValor->setFont(font2);

        horizontalLayout->addWidget(lineEditValor);

        layoutWidget_11 = new QWidget(PortaDe1Folha);
        layoutWidget_11->setObjectName("layoutWidget_11");
        layoutWidget_11->setGeometry(QRect(1080, 320, 211, 71));
        verticalLayout_10 = new QVBoxLayout(layoutWidget_11);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget_11);
        label_9->setObjectName("label_9");

        verticalLayout_10->addWidget(label_9);

        comboBoxKitAluminio = new QComboBox(layoutWidget_11);
        comboBoxKitAluminio->addItem(QString());
        comboBoxKitAluminio->setObjectName("comboBoxKitAluminio");
        sizePolicy1.setHeightForWidth(comboBoxKitAluminio->sizePolicy().hasHeightForWidth());
        comboBoxKitAluminio->setSizePolicy(sizePolicy1);
        comboBoxKitAluminio->setFont(font1);

        verticalLayout_10->addWidget(comboBoxKitAluminio);

        pushButtonLimpar = new QPushButton(PortaDe1Folha);
        pushButtonLimpar->setObjectName("pushButtonLimpar");
        pushButtonLimpar->setGeometry(QRect(830, 620, 51, 41));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imagens/limpar.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonLimpar->setIcon(icon2);
        pushButtonLimpar->setIconSize(QSize(24, 24));
        layoutWidget_2 = new QWidget(PortaDe1Folha);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(580, 620, 221, 41));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName("label_6");

        horizontalLayout_2->addWidget(label_6);

        lineEditLucro = new QLineEdit(layoutWidget_2);
        lineEditLucro->setObjectName("lineEditLucro");
        sizePolicy.setHeightForWidth(lineEditLucro->sizePolicy().hasHeightForWidth());
        lineEditLucro->setSizePolicy(sizePolicy);
        lineEditLucro->setFont(font1);

        horizontalLayout_2->addWidget(lineEditLucro);


        verticalLayout_6->addLayout(horizontalLayout_2);

        label = new QLabel(PortaDe1Folha);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 70, 1251, 191));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font3.setPointSize(72);
        font3.setBold(false);
        label->setFont(font3);
        pushButtonCalcular = new QPushButton(PortaDe1Folha);
        pushButtonCalcular->setObjectName("pushButtonCalcular");
        pushButtonCalcular->setGeometry(QRect(540, 520, 281, 41));
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButtonCalcular->sizePolicy().hasHeightForWidth());
        pushButtonCalcular->setSizePolicy(sizePolicy2);
        pushButtonCalcular->setFont(font);
        pushButtonDesconto = new QPushButton(PortaDe1Folha);
        pushButtonDesconto->setObjectName("pushButtonDesconto");
        pushButtonDesconto->setGeometry(QRect(830, 520, 51, 41));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/imagens/desconto.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonDesconto->setIcon(icon3);
        pushButtonDesconto->setIconSize(QSize(24, 24));
        QWidget::setTabOrder(lineEditLargura, lineEditAltura);
        QWidget::setTabOrder(lineEditAltura, comboBoxVidros);
        QWidget::setTabOrder(comboBoxVidros, comboBoxPuxador);
        QWidget::setTabOrder(comboBoxPuxador, comboBoxFechadura);
        QWidget::setTabOrder(comboBoxFechadura, comboBoxKitAluminio);
        QWidget::setTabOrder(comboBoxKitAluminio, comboBoxPelicula);
        QWidget::setTabOrder(comboBoxPelicula, comboBoxTrinco);
        QWidget::setTabOrder(comboBoxTrinco, pushButtonRefatorando);
        QWidget::setTabOrder(pushButtonRefatorando, pushButtonCalcular);
        QWidget::setTabOrder(pushButtonCalcular, pushButtonDesconto);
        QWidget::setTabOrder(pushButtonDesconto, pushButtonSalvar);
        QWidget::setTabOrder(pushButtonSalvar, pushButtonLimpar);
        QWidget::setTabOrder(pushButtonLimpar, lineEditValor);
        QWidget::setTabOrder(lineEditValor, lineEditLucro);

        retranslateUi(PortaDe1Folha);

        QMetaObject::connectSlotsByName(PortaDe1Folha);
    } // setupUi

    void retranslateUi(QDialog *PortaDe1Folha)
    {
        PortaDe1Folha->setWindowTitle(QCoreApplication::translate("PortaDe1Folha", "Dialog", nullptr));
        pushButtonSalvar->setText(QString());
        labelLargura->setText(QCoreApplication::translate("PortaDe1Folha", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Largura</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("PortaDe1Folha", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Fechadura</span></p></body></html>", nullptr));
        comboBoxFechadura->setItemText(0, QString());

        pushButtonRefatorando->setText(QCoreApplication::translate("PortaDe1Folha", "Adicionais", nullptr));
        label_2->setText(QCoreApplication::translate("PortaDe1Folha", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Puxador</span></p></body></html>", nullptr));
        comboBoxPuxador->setItemText(0, QString());

        label_7->setText(QCoreApplication::translate("PortaDe1Folha", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Pel\303\255cula</span></p></body></html>", nullptr));
        comboBoxPelicula->setItemText(0, QString());

        labelVidros->setText(QCoreApplication::translate("PortaDe1Folha", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Vidros</span></p></body></html>", nullptr));
        comboBoxVidros->setItemText(0, QString());

        label_5->setText(QCoreApplication::translate("PortaDe1Folha", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Trinco</span></p></body></html>", nullptr));
        comboBoxTrinco->setItemText(0, QString());

        labelAltura->setText(QCoreApplication::translate("PortaDe1Folha", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Altura</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("PortaDe1Folha", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">VALOR</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("PortaDe1Folha", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Kit Alum\303\255nio</span></p></body></html>", nullptr));
        comboBoxKitAluminio->setItemText(0, QString());

        pushButtonLimpar->setText(QString());
        label_6->setText(QCoreApplication::translate("PortaDe1Folha", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">LUCRO</span></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        lineEditLucro->setWhatsThis(QCoreApplication::translate("PortaDe1Folha", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label->setText(QCoreApplication::translate("PortaDe1Folha", "<html><head/><body><p>Porta de 1 Folha de Correr</p></body></html>", nullptr));
        pushButtonCalcular->setText(QCoreApplication::translate("PortaDe1Folha", "CALCULAR", nullptr));
        pushButtonDesconto->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PortaDe1Folha: public Ui_PortaDe1Folha {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PORTADE1FOLHA_H
