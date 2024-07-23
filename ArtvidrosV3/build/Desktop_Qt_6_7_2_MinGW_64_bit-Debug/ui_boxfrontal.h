/********************************************************************************
** Form generated from reading UI file 'boxfrontal.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOXFRONTAL_H
#define UI_BOXFRONTAL_H

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

class Ui_BoxFrontal
{
public:
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelVidros;
    QComboBox *comboBoxVidros;
    QWidget *layoutWidget_9;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_7;
    QComboBox *comboBoxPelicula;
    QPushButton *pushButtonSalvar;
    QPushButton *pushButtonCalcular;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QComboBox *comboBoxKit;
    QPushButton *pushButtonRefatorando;
    QLabel *label;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *lineEditValor;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLineEdit *lineEditLucro;
    QPushButton *pushButtonDesconto;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout;
    QLabel *labelLargura;
    QLineEdit *lineEditLargura;
    QPushButton *pushButtonLimpar;
    QWidget *layoutWidget_8;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelAltura;
    QLineEdit *lineEditAltura;

    void setupUi(QDialog *BoxFrontal)
    {
        if (BoxFrontal->objectName().isEmpty())
            BoxFrontal->setObjectName("BoxFrontal");
        BoxFrontal->resize(1366, 768);
        layoutWidget_2 = new QWidget(BoxFrontal);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(560, 310, 311, 71));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelVidros = new QLabel(layoutWidget_2);
        labelVidros->setObjectName("labelVidros");
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        labelVidros->setFont(font);

        verticalLayout_3->addWidget(labelVidros);

        comboBoxVidros = new QComboBox(layoutWidget_2);
        comboBoxVidros->addItem(QString());
        comboBoxVidros->setObjectName("comboBoxVidros");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBoxVidros->sizePolicy().hasHeightForWidth());
        comboBoxVidros->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        comboBoxVidros->setFont(font1);

        verticalLayout_3->addWidget(comboBoxVidros);

        layoutWidget_9 = new QWidget(BoxFrontal);
        layoutWidget_9->setObjectName("layoutWidget_9");
        layoutWidget_9->setGeometry(QRect(480, 400, 211, 71));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_9);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_9);
        label_7->setObjectName("label_7");

        verticalLayout_8->addWidget(label_7);

        comboBoxPelicula = new QComboBox(layoutWidget_9);
        comboBoxPelicula->addItem(QString());
        comboBoxPelicula->setObjectName("comboBoxPelicula");
        sizePolicy.setHeightForWidth(comboBoxPelicula->sizePolicy().hasHeightForWidth());
        comboBoxPelicula->setSizePolicy(sizePolicy);
        comboBoxPelicula->setFont(font1);

        verticalLayout_8->addWidget(comboBoxPelicula);

        pushButtonSalvar = new QPushButton(BoxFrontal);
        pushButtonSalvar->setObjectName("pushButtonSalvar");
        pushButtonSalvar->setGeometry(QRect(820, 560, 51, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/salvar.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonSalvar->setIcon(icon);
        pushButtonSalvar->setIconSize(QSize(24, 24));
        pushButtonCalcular = new QPushButton(BoxFrontal);
        pushButtonCalcular->setObjectName("pushButtonCalcular");
        pushButtonCalcular->setGeometry(QRect(530, 510, 281, 41));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButtonCalcular->sizePolicy().hasHeightForWidth());
        pushButtonCalcular->setSizePolicy(sizePolicy1);
        pushButtonCalcular->setFont(font);
        layoutWidget_7 = new QWidget(BoxFrontal);
        layoutWidget_7->setObjectName("layoutWidget_7");
        layoutWidget_7->setGeometry(QRect(880, 310, 211, 71));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_7);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_7);
        label_3->setObjectName("label_3");

        verticalLayout_5->addWidget(label_3);

        comboBoxKit = new QComboBox(layoutWidget_7);
        comboBoxKit->addItem(QString());
        comboBoxKit->setObjectName("comboBoxKit");
        sizePolicy.setHeightForWidth(comboBoxKit->sizePolicy().hasHeightForWidth());
        comboBoxKit->setSizePolicy(sizePolicy);
        comboBoxKit->setFont(font1);

        verticalLayout_5->addWidget(comboBoxKit);

        pushButtonRefatorando = new QPushButton(BoxFrontal);
        pushButtonRefatorando->setObjectName("pushButtonRefatorando");
        pushButtonRefatorando->setGeometry(QRect(710, 430, 211, 41));
        pushButtonRefatorando->setFont(font1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagens/adicionar-a-cesta.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonRefatorando->setIcon(icon1);
        pushButtonRefatorando->setIconSize(QSize(24, 24));
        label = new QLabel(BoxFrontal);
        label->setObjectName("label");
        label->setGeometry(QRect(390, 100, 641, 141));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font2.setPointSize(72);
        font2.setBold(false);
        label->setFont(font2);
        layoutWidget_6 = new QWidget(BoxFrontal);
        layoutWidget_6->setObjectName("layoutWidget_6");
        layoutWidget_6->setGeometry(QRect(570, 560, 221, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget_6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_6);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        lineEditValor = new QLineEdit(layoutWidget_6);
        lineEditValor->setObjectName("lineEditValor");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEditValor->sizePolicy().hasHeightForWidth());
        lineEditValor->setSizePolicy(sizePolicy2);
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(true);
        lineEditValor->setFont(font3);

        horizontalLayout->addWidget(lineEditValor);

        layoutWidget = new QWidget(BoxFrontal);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(570, 610, 221, 41));
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
        sizePolicy2.setHeightForWidth(lineEditLucro->sizePolicy().hasHeightForWidth());
        lineEditLucro->setSizePolicy(sizePolicy2);
        lineEditLucro->setFont(font1);

        horizontalLayout_2->addWidget(lineEditLucro);


        verticalLayout_6->addLayout(horizontalLayout_2);

        pushButtonDesconto = new QPushButton(BoxFrontal);
        pushButtonDesconto->setObjectName("pushButtonDesconto");
        pushButtonDesconto->setGeometry(QRect(820, 510, 51, 41));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imagens/desconto.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonDesconto->setIcon(icon2);
        pushButtonDesconto->setIconSize(QSize(24, 24));
        layoutWidget_5 = new QWidget(BoxFrontal);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(280, 310, 131, 71));
        verticalLayout = new QVBoxLayout(layoutWidget_5);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelLargura = new QLabel(layoutWidget_5);
        labelLargura->setObjectName("labelLargura");
        labelLargura->setFont(font);

        verticalLayout->addWidget(labelLargura);

        lineEditLargura = new QLineEdit(layoutWidget_5);
        lineEditLargura->setObjectName("lineEditLargura");
        sizePolicy2.setHeightForWidth(lineEditLargura->sizePolicy().hasHeightForWidth());
        lineEditLargura->setSizePolicy(sizePolicy2);
        lineEditLargura->setFont(font1);

        verticalLayout->addWidget(lineEditLargura);

        pushButtonLimpar = new QPushButton(BoxFrontal);
        pushButtonLimpar->setObjectName("pushButtonLimpar");
        pushButtonLimpar->setGeometry(QRect(820, 610, 51, 41));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/imagens/limpar.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonLimpar->setIcon(icon3);
        pushButtonLimpar->setIconSize(QSize(24, 24));
        layoutWidget_8 = new QWidget(BoxFrontal);
        layoutWidget_8->setObjectName("layoutWidget_8");
        layoutWidget_8->setGeometry(QRect(420, 310, 131, 71));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_8);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelAltura = new QLabel(layoutWidget_8);
        labelAltura->setObjectName("labelAltura");
        labelAltura->setFont(font);

        verticalLayout_2->addWidget(labelAltura);

        lineEditAltura = new QLineEdit(layoutWidget_8);
        lineEditAltura->setObjectName("lineEditAltura");
        sizePolicy2.setHeightForWidth(lineEditAltura->sizePolicy().hasHeightForWidth());
        lineEditAltura->setSizePolicy(sizePolicy2);
        lineEditAltura->setFont(font1);

        verticalLayout_2->addWidget(lineEditAltura);

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

        retranslateUi(BoxFrontal);

        QMetaObject::connectSlotsByName(BoxFrontal);
    } // setupUi

    void retranslateUi(QDialog *BoxFrontal)
    {
        BoxFrontal->setWindowTitle(QCoreApplication::translate("BoxFrontal", "Dialog", nullptr));
        labelVidros->setText(QCoreApplication::translate("BoxFrontal", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Vidros</span></p></body></html>", nullptr));
        comboBoxVidros->setItemText(0, QString());

        label_7->setText(QCoreApplication::translate("BoxFrontal", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Pel\303\255cula</span></p></body></html>", nullptr));
        comboBoxPelicula->setItemText(0, QString());

        pushButtonSalvar->setText(QString());
        pushButtonCalcular->setText(QCoreApplication::translate("BoxFrontal", "CALCULAR", nullptr));
        label_3->setText(QCoreApplication::translate("BoxFrontal", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Kit</span></p></body></html>", nullptr));
        comboBoxKit->setItemText(0, QString());

        pushButtonRefatorando->setText(QCoreApplication::translate("BoxFrontal", "Adicionais", nullptr));
        label->setText(QCoreApplication::translate("BoxFrontal", "<html><head/><body><p>Box Frontal</p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("BoxFrontal", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">VALOR</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("BoxFrontal", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">LUCRO</span></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        lineEditLucro->setWhatsThis(QCoreApplication::translate("BoxFrontal", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButtonDesconto->setText(QString());
        labelLargura->setText(QCoreApplication::translate("BoxFrontal", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Largura</span></p></body></html>", nullptr));
        pushButtonLimpar->setText(QString());
        labelAltura->setText(QCoreApplication::translate("BoxFrontal", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Altura</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BoxFrontal: public Ui_BoxFrontal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOXFRONTAL_H
