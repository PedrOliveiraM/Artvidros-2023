/********************************************************************************
** Form generated from reading UI file 'vidroscomuns.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDROSCOMUNS_H
#define UI_VIDROSCOMUNS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VidrosComuns
{
public:
    QPushButton *pushButtonDesconto;
    QPushButton *pushButtonSalvar;
    QPushButton *pushButtonCalcular;
    QWidget *layoutWidget_12;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_10;
    QComboBox *comboBoxPolido;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLineEdit *lineEditLucro;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelVidros;
    QComboBox *comboBoxVidros;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout;
    QLabel *labelLargura;
    QLineEdit *lineEditLargura;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_7;
    QComboBox *comboBoxAcessorios;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *lineEditValor;
    QPushButton *pushButtonLimpar;
    QPushButton *pushButtonRefatorando;
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelAltura;
    QLineEdit *lineEditAltura;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *spinBox_Acessorios;

    void setupUi(QDialog *VidrosComuns)
    {
        if (VidrosComuns->objectName().isEmpty())
            VidrosComuns->setObjectName("VidrosComuns");
        VidrosComuns->resize(1366, 768);
        pushButtonDesconto = new QPushButton(VidrosComuns);
        pushButtonDesconto->setObjectName("pushButtonDesconto");
        pushButtonDesconto->setGeometry(QRect(790, 480, 51, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/desconto.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonDesconto->setIcon(icon);
        pushButtonDesconto->setIconSize(QSize(24, 24));
        pushButtonSalvar = new QPushButton(VidrosComuns);
        pushButtonSalvar->setObjectName("pushButtonSalvar");
        pushButtonSalvar->setGeometry(QRect(790, 530, 51, 41));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagens/salvar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSalvar->setIcon(icon1);
        pushButtonSalvar->setIconSize(QSize(24, 24));
        pushButtonCalcular = new QPushButton(VidrosComuns);
        pushButtonCalcular->setObjectName("pushButtonCalcular");
        pushButtonCalcular->setGeometry(QRect(500, 480, 281, 41));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonCalcular->sizePolicy().hasHeightForWidth());
        pushButtonCalcular->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        pushButtonCalcular->setFont(font);
        layoutWidget_12 = new QWidget(VidrosComuns);
        layoutWidget_12->setObjectName("layoutWidget_12");
        layoutWidget_12->setGeometry(QRect(870, 290, 211, 71));
        verticalLayout_11 = new QVBoxLayout(layoutWidget_12);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget_12);
        label_10->setObjectName("label_10");

        verticalLayout_11->addWidget(label_10);

        comboBoxPolido = new QComboBox(layoutWidget_12);
        comboBoxPolido->addItem(QString());
        comboBoxPolido->setObjectName("comboBoxPolido");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBoxPolido->sizePolicy().hasHeightForWidth());
        comboBoxPolido->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        comboBoxPolido->setFont(font1);

        verticalLayout_11->addWidget(comboBoxPolido);

        layoutWidget_2 = new QWidget(VidrosComuns);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(540, 580, 221, 41));
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
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEditLucro->sizePolicy().hasHeightForWidth());
        lineEditLucro->setSizePolicy(sizePolicy2);
        lineEditLucro->setFont(font1);

        horizontalLayout_2->addWidget(lineEditLucro);


        verticalLayout_6->addLayout(horizontalLayout_2);

        label = new QLabel(VidrosComuns);
        label->setObjectName("label");
        label->setGeometry(QRect(340, 30, 781, 191));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font2.setPointSize(72);
        font2.setBold(false);
        label->setFont(font2);
        layoutWidget = new QWidget(VidrosComuns);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(550, 290, 311, 71));
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

        layoutWidget_4 = new QWidget(VidrosComuns);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(270, 290, 131, 71));
        verticalLayout = new QVBoxLayout(layoutWidget_4);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelLargura = new QLabel(layoutWidget_4);
        labelLargura->setObjectName("labelLargura");
        labelLargura->setFont(font);

        verticalLayout->addWidget(labelLargura);

        lineEditLargura = new QLineEdit(layoutWidget_4);
        lineEditLargura->setObjectName("lineEditLargura");
        sizePolicy2.setHeightForWidth(lineEditLargura->sizePolicy().hasHeightForWidth());
        lineEditLargura->setSizePolicy(sizePolicy2);
        lineEditLargura->setFont(font1);

        verticalLayout->addWidget(lineEditLargura);

        layoutWidget_7 = new QWidget(VidrosComuns);
        layoutWidget_7->setObjectName("layoutWidget_7");
        layoutWidget_7->setGeometry(QRect(420, 380, 211, 71));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_7);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_7);
        label_7->setObjectName("label_7");

        verticalLayout_8->addWidget(label_7);

        comboBoxAcessorios = new QComboBox(layoutWidget_7);
        comboBoxAcessorios->addItem(QString());
        comboBoxAcessorios->setObjectName("comboBoxAcessorios");
        sizePolicy1.setHeightForWidth(comboBoxAcessorios->sizePolicy().hasHeightForWidth());
        comboBoxAcessorios->setSizePolicy(sizePolicy1);
        comboBoxAcessorios->setFont(font1);

        verticalLayout_8->addWidget(comboBoxAcessorios);

        layoutWidget_3 = new QWidget(VidrosComuns);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(540, 530, 221, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget_3);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_3);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        lineEditValor = new QLineEdit(layoutWidget_3);
        lineEditValor->setObjectName("lineEditValor");
        sizePolicy2.setHeightForWidth(lineEditValor->sizePolicy().hasHeightForWidth());
        lineEditValor->setSizePolicy(sizePolicy2);
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(true);
        lineEditValor->setFont(font3);

        horizontalLayout->addWidget(lineEditValor);

        pushButtonLimpar = new QPushButton(VidrosComuns);
        pushButtonLimpar->setObjectName("pushButtonLimpar");
        pushButtonLimpar->setGeometry(QRect(790, 580, 51, 41));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imagens/limpar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonLimpar->setIcon(icon2);
        pushButtonLimpar->setIconSize(QSize(24, 24));
        pushButtonRefatorando = new QPushButton(VidrosComuns);
        pushButtonRefatorando->setObjectName("pushButtonRefatorando");
        pushButtonRefatorando->setGeometry(QRect(730, 410, 211, 41));
        pushButtonRefatorando->setFont(font1);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/imagens/adicionar-a-cesta.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonRefatorando->setIcon(icon3);
        pushButtonRefatorando->setIconSize(QSize(24, 24));
        layoutWidget_6 = new QWidget(VidrosComuns);
        layoutWidget_6->setObjectName("layoutWidget_6");
        layoutWidget_6->setGeometry(QRect(410, 290, 131, 71));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_6);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelAltura = new QLabel(layoutWidget_6);
        labelAltura->setObjectName("labelAltura");
        labelAltura->setFont(font);

        verticalLayout_2->addWidget(labelAltura);

        lineEditAltura = new QLineEdit(layoutWidget_6);
        lineEditAltura->setObjectName("lineEditAltura");
        sizePolicy2.setHeightForWidth(lineEditAltura->sizePolicy().hasHeightForWidth());
        lineEditAltura->setSizePolicy(sizePolicy2);
        lineEditAltura->setFont(font1);

        verticalLayout_2->addWidget(lineEditAltura);

        layoutWidget_5 = new QWidget(VidrosComuns);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(640, 420, 81, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        spinBox_Acessorios = new QSpinBox(layoutWidget_5);
        spinBox_Acessorios->setObjectName("spinBox_Acessorios");
        sizePolicy.setHeightForWidth(spinBox_Acessorios->sizePolicy().hasHeightForWidth());
        spinBox_Acessorios->setSizePolicy(sizePolicy);
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        spinBox_Acessorios->setFont(font4);

        horizontalLayout_3->addWidget(spinBox_Acessorios);

        QWidget::setTabOrder(lineEditLargura, lineEditAltura);
        QWidget::setTabOrder(lineEditAltura, comboBoxVidros);
        QWidget::setTabOrder(comboBoxVidros, comboBoxPolido);
        QWidget::setTabOrder(comboBoxPolido, comboBoxAcessorios);
        QWidget::setTabOrder(comboBoxAcessorios, spinBox_Acessorios);
        QWidget::setTabOrder(spinBox_Acessorios, pushButtonRefatorando);
        QWidget::setTabOrder(pushButtonRefatorando, pushButtonCalcular);
        QWidget::setTabOrder(pushButtonCalcular, pushButtonDesconto);
        QWidget::setTabOrder(pushButtonDesconto, pushButtonSalvar);
        QWidget::setTabOrder(pushButtonSalvar, pushButtonLimpar);
        QWidget::setTabOrder(pushButtonLimpar, lineEditValor);
        QWidget::setTabOrder(lineEditValor, lineEditLucro);

        retranslateUi(VidrosComuns);

        QMetaObject::connectSlotsByName(VidrosComuns);
    } // setupUi

    void retranslateUi(QDialog *VidrosComuns)
    {
        VidrosComuns->setWindowTitle(QCoreApplication::translate("VidrosComuns", "Dialog", nullptr));
        pushButtonDesconto->setText(QString());
        pushButtonSalvar->setText(QString());
        pushButtonCalcular->setText(QCoreApplication::translate("VidrosComuns", "CALCULAR", nullptr));
        label_10->setText(QCoreApplication::translate("VidrosComuns", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Acabamento</span></p></body></html>", nullptr));
        comboBoxPolido->setItemText(0, QString());

        label_6->setText(QCoreApplication::translate("VidrosComuns", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">LUCRO</span></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        lineEditLucro->setWhatsThis(QCoreApplication::translate("VidrosComuns", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label->setText(QCoreApplication::translate("VidrosComuns", "<html><head/><body><p>Vidros Comuns</p></body></html>", nullptr));
        labelVidros->setText(QCoreApplication::translate("VidrosComuns", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Vidros</span></p></body></html>", nullptr));
        comboBoxVidros->setItemText(0, QString());

        labelLargura->setText(QCoreApplication::translate("VidrosComuns", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Largura</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("VidrosComuns", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Acessorios</span></p></body></html>", nullptr));
        comboBoxAcessorios->setItemText(0, QString());

        label_4->setText(QCoreApplication::translate("VidrosComuns", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">VALOR</span></p></body></html>", nullptr));
        pushButtonLimpar->setText(QString());
        pushButtonRefatorando->setText(QCoreApplication::translate("VidrosComuns", "Adicionais", nullptr));
        labelAltura->setText(QCoreApplication::translate("VidrosComuns", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Altura</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VidrosComuns: public Ui_VidrosComuns {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDROSCOMUNS_H
