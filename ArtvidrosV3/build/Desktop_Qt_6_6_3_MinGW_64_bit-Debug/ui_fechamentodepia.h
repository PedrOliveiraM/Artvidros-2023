/********************************************************************************
** Form generated from reading UI file 'fechamentodepia.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FECHAMENTODEPIA_H
#define UI_FECHAMENTODEPIA_H

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

class Ui_FechamentoDePia
{
public:
    QPushButton *pushButtonLimpar;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *lineEditValor;
    QWidget *layoutWidget_9;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_7;
    QComboBox *comboBoxPelicula;
    QPushButton *pushButtonCalcular;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout;
    QLabel *labelLargura;
    QLineEdit *lineEditLargura;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QComboBox *comboBoxKit;
    QLabel *label;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelVidros;
    QComboBox *comboBoxVidros;
    QWidget *layoutWidget_8;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelAltura;
    QLineEdit *lineEditAltura;
    QPushButton *pushButtonSalvar;
    QPushButton *pushButtonDesconto;
    QPushButton *pushButtonRefatorando;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLineEdit *lineEditLucro;

    void setupUi(QDialog *FechamentoDePia)
    {
        if (FechamentoDePia->objectName().isEmpty())
            FechamentoDePia->setObjectName("FechamentoDePia");
        FechamentoDePia->resize(1366, 768);
        pushButtonLimpar = new QPushButton(FechamentoDePia);
        pushButtonLimpar->setObjectName("pushButtonLimpar");
        pushButtonLimpar->setGeometry(QRect(850, 590, 51, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/limpar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonLimpar->setIcon(icon);
        pushButtonLimpar->setIconSize(QSize(24, 24));
        layoutWidget_6 = new QWidget(FechamentoDePia);
        layoutWidget_6->setObjectName("layoutWidget_6");
        layoutWidget_6->setGeometry(QRect(600, 540, 221, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget_6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_6);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        lineEditValor = new QLineEdit(layoutWidget_6);
        lineEditValor->setObjectName("lineEditValor");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditValor->sizePolicy().hasHeightForWidth());
        lineEditValor->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        lineEditValor->setFont(font);

        horizontalLayout->addWidget(lineEditValor);

        layoutWidget_9 = new QWidget(FechamentoDePia);
        layoutWidget_9->setObjectName("layoutWidget_9");
        layoutWidget_9->setGeometry(QRect(500, 390, 211, 71));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_9);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_9);
        label_7->setObjectName("label_7");

        verticalLayout_8->addWidget(label_7);

        comboBoxPelicula = new QComboBox(layoutWidget_9);
        comboBoxPelicula->addItem(QString());
        comboBoxPelicula->setObjectName("comboBoxPelicula");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBoxPelicula->sizePolicy().hasHeightForWidth());
        comboBoxPelicula->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        comboBoxPelicula->setFont(font1);

        verticalLayout_8->addWidget(comboBoxPelicula);

        pushButtonCalcular = new QPushButton(FechamentoDePia);
        pushButtonCalcular->setObjectName("pushButtonCalcular");
        pushButtonCalcular->setGeometry(QRect(560, 490, 281, 41));
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButtonCalcular->sizePolicy().hasHeightForWidth());
        pushButtonCalcular->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        pushButtonCalcular->setFont(font2);
        layoutWidget_5 = new QWidget(FechamentoDePia);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(260, 290, 131, 71));
        verticalLayout = new QVBoxLayout(layoutWidget_5);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelLargura = new QLabel(layoutWidget_5);
        labelLargura->setObjectName("labelLargura");
        labelLargura->setFont(font2);

        verticalLayout->addWidget(labelLargura);

        lineEditLargura = new QLineEdit(layoutWidget_5);
        lineEditLargura->setObjectName("lineEditLargura");
        sizePolicy.setHeightForWidth(lineEditLargura->sizePolicy().hasHeightForWidth());
        lineEditLargura->setSizePolicy(sizePolicy);
        lineEditLargura->setFont(font1);

        verticalLayout->addWidget(lineEditLargura);

        layoutWidget_7 = new QWidget(FechamentoDePia);
        layoutWidget_7->setObjectName("layoutWidget_7");
        layoutWidget_7->setGeometry(QRect(880, 290, 211, 71));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_7);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_7);
        label_3->setObjectName("label_3");

        verticalLayout_5->addWidget(label_3);

        comboBoxKit = new QComboBox(layoutWidget_7);
        comboBoxKit->addItem(QString());
        comboBoxKit->setObjectName("comboBoxKit");
        sizePolicy1.setHeightForWidth(comboBoxKit->sizePolicy().hasHeightForWidth());
        comboBoxKit->setSizePolicy(sizePolicy1);
        comboBoxKit->setFont(font1);

        verticalLayout_5->addWidget(comboBoxKit);

        label = new QLabel(FechamentoDePia);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 70, 981, 141));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font3.setPointSize(72);
        font3.setBold(false);
        label->setFont(font3);
        layoutWidget_2 = new QWidget(FechamentoDePia);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(560, 290, 311, 71));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelVidros = new QLabel(layoutWidget_2);
        labelVidros->setObjectName("labelVidros");
        labelVidros->setFont(font2);

        verticalLayout_3->addWidget(labelVidros);

        comboBoxVidros = new QComboBox(layoutWidget_2);
        comboBoxVidros->addItem(QString());
        comboBoxVidros->setObjectName("comboBoxVidros");
        sizePolicy1.setHeightForWidth(comboBoxVidros->sizePolicy().hasHeightForWidth());
        comboBoxVidros->setSizePolicy(sizePolicy1);
        comboBoxVidros->setFont(font1);

        verticalLayout_3->addWidget(comboBoxVidros);

        layoutWidget_8 = new QWidget(FechamentoDePia);
        layoutWidget_8->setObjectName("layoutWidget_8");
        layoutWidget_8->setGeometry(QRect(410, 290, 131, 71));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_8);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelAltura = new QLabel(layoutWidget_8);
        labelAltura->setObjectName("labelAltura");
        labelAltura->setFont(font2);

        verticalLayout_2->addWidget(labelAltura);

        lineEditAltura = new QLineEdit(layoutWidget_8);
        lineEditAltura->setObjectName("lineEditAltura");
        sizePolicy.setHeightForWidth(lineEditAltura->sizePolicy().hasHeightForWidth());
        lineEditAltura->setSizePolicy(sizePolicy);
        lineEditAltura->setFont(font1);

        verticalLayout_2->addWidget(lineEditAltura);

        pushButtonSalvar = new QPushButton(FechamentoDePia);
        pushButtonSalvar->setObjectName("pushButtonSalvar");
        pushButtonSalvar->setGeometry(QRect(850, 540, 51, 41));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagens/salvar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSalvar->setIcon(icon1);
        pushButtonSalvar->setIconSize(QSize(24, 24));
        pushButtonDesconto = new QPushButton(FechamentoDePia);
        pushButtonDesconto->setObjectName("pushButtonDesconto");
        pushButtonDesconto->setGeometry(QRect(850, 490, 51, 41));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imagens/desconto.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonDesconto->setIcon(icon2);
        pushButtonDesconto->setIconSize(QSize(24, 24));
        pushButtonRefatorando = new QPushButton(FechamentoDePia);
        pushButtonRefatorando->setObjectName("pushButtonRefatorando");
        pushButtonRefatorando->setGeometry(QRect(730, 420, 211, 41));
        pushButtonRefatorando->setFont(font1);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/imagens/adicionar-a-cesta.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonRefatorando->setIcon(icon3);
        pushButtonRefatorando->setIconSize(QSize(24, 24));
        layoutWidget = new QWidget(FechamentoDePia);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(600, 590, 221, 41));
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        horizontalLayout_2->addWidget(label_6);

        lineEditLucro = new QLineEdit(layoutWidget);
        lineEditLucro->setObjectName("lineEditLucro");
        sizePolicy.setHeightForWidth(lineEditLucro->sizePolicy().hasHeightForWidth());
        lineEditLucro->setSizePolicy(sizePolicy);
        lineEditLucro->setFont(font1);

        horizontalLayout_2->addWidget(lineEditLucro);


        verticalLayout_6->addLayout(horizontalLayout_2);

        QWidget::setTabOrder(lineEditLargura, lineEditAltura);
        QWidget::setTabOrder(lineEditAltura, comboBoxVidros);
        QWidget::setTabOrder(comboBoxVidros, comboBoxKit);
        QWidget::setTabOrder(comboBoxKit, comboBoxPelicula);
        QWidget::setTabOrder(comboBoxPelicula, pushButtonRefatorando);
        QWidget::setTabOrder(pushButtonRefatorando, pushButtonCalcular);
        QWidget::setTabOrder(pushButtonCalcular, pushButtonDesconto);
        QWidget::setTabOrder(pushButtonDesconto, pushButtonSalvar);
        QWidget::setTabOrder(pushButtonSalvar, pushButtonLimpar);
        QWidget::setTabOrder(pushButtonLimpar, lineEditValor);
        QWidget::setTabOrder(lineEditValor, lineEditLucro);

        retranslateUi(FechamentoDePia);

        QMetaObject::connectSlotsByName(FechamentoDePia);
    } // setupUi

    void retranslateUi(QDialog *FechamentoDePia)
    {
        FechamentoDePia->setWindowTitle(QCoreApplication::translate("FechamentoDePia", "Dialog", nullptr));
        pushButtonLimpar->setText(QString());
        label_4->setText(QCoreApplication::translate("FechamentoDePia", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">VALOR</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("FechamentoDePia", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Pel\303\255cula</span></p></body></html>", nullptr));
        comboBoxPelicula->setItemText(0, QString());

        pushButtonCalcular->setText(QCoreApplication::translate("FechamentoDePia", "CALCULAR", nullptr));
        labelLargura->setText(QCoreApplication::translate("FechamentoDePia", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Largura</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("FechamentoDePia", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Kit</span></p></body></html>", nullptr));
        comboBoxKit->setItemText(0, QString());

        label->setText(QCoreApplication::translate("FechamentoDePia", "<html><head/><body><p>Fechamaneto De Pia</p></body></html>", nullptr));
        labelVidros->setText(QCoreApplication::translate("FechamentoDePia", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Vidros</span></p></body></html>", nullptr));
        comboBoxVidros->setItemText(0, QString());

        labelAltura->setText(QCoreApplication::translate("FechamentoDePia", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Altura</span></p></body></html>", nullptr));
        pushButtonSalvar->setText(QString());
        pushButtonDesconto->setText(QString());
        pushButtonRefatorando->setText(QCoreApplication::translate("FechamentoDePia", "Adicionais", nullptr));
        label_6->setText(QCoreApplication::translate("FechamentoDePia", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">LUCRO</span></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        lineEditLucro->setWhatsThis(QCoreApplication::translate("FechamentoDePia", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
    } // retranslateUi

};

namespace Ui {
    class FechamentoDePia: public Ui_FechamentoDePia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FECHAMENTODEPIA_H
