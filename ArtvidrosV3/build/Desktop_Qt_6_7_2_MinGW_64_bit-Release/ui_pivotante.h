/********************************************************************************
** Form generated from reading UI file 'pivotante.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIVOTANTE_H
#define UI_PIVOTANTE_H

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

class Ui_Pivotante
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLineEdit *lineEditLucro;
    QWidget *layoutWidget_9;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_7;
    QComboBox *comboBoxPelicula;
    QPushButton *pushButtonDesconto;
    QPushButton *pushButtonSalvar;
    QPushButton *pushButtonRefatorando;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelVidros;
    QComboBox *comboBoxVidros;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_5;
    QComboBox *comboBoxTrinco;
    QWidget *layoutWidget_8;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelAltura;
    QLineEdit *lineEditAltura;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QComboBox *comboBoxKit;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout;
    QLabel *labelLargura;
    QLineEdit *lineEditLargura;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *lineEditValor;
    QPushButton *pushButtonLimpar;
    QLabel *label;
    QPushButton *pushButtonCalcular;

    void setupUi(QDialog *Pivotante)
    {
        if (Pivotante->objectName().isEmpty())
            Pivotante->setObjectName("Pivotante");
        Pivotante->resize(1366, 768);
        layoutWidget = new QWidget(Pivotante);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(580, 610, 221, 41));
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
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditLucro->sizePolicy().hasHeightForWidth());
        lineEditLucro->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        lineEditLucro->setFont(font);

        horizontalLayout_2->addWidget(lineEditLucro);


        verticalLayout_6->addLayout(horizontalLayout_2);

        layoutWidget_9 = new QWidget(Pivotante);
        layoutWidget_9->setObjectName("layoutWidget_9");
        layoutWidget_9->setGeometry(QRect(380, 400, 211, 71));
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
        comboBoxPelicula->setFont(font);

        verticalLayout_8->addWidget(comboBoxPelicula);

        pushButtonDesconto = new QPushButton(Pivotante);
        pushButtonDesconto->setObjectName("pushButtonDesconto");
        pushButtonDesconto->setGeometry(QRect(830, 510, 51, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/desconto.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonDesconto->setIcon(icon);
        pushButtonDesconto->setIconSize(QSize(24, 24));
        pushButtonSalvar = new QPushButton(Pivotante);
        pushButtonSalvar->setObjectName("pushButtonSalvar");
        pushButtonSalvar->setGeometry(QRect(830, 560, 51, 41));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagens/salvar.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonSalvar->setIcon(icon1);
        pushButtonSalvar->setIconSize(QSize(24, 24));
        pushButtonRefatorando = new QPushButton(Pivotante);
        pushButtonRefatorando->setObjectName("pushButtonRefatorando");
        pushButtonRefatorando->setGeometry(QRect(840, 430, 211, 41));
        pushButtonRefatorando->setFont(font);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imagens/adicionar-a-cesta.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonRefatorando->setIcon(icon2);
        pushButtonRefatorando->setIconSize(QSize(24, 24));
        layoutWidget_2 = new QWidget(Pivotante);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(570, 310, 311, 71));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelVidros = new QLabel(layoutWidget_2);
        labelVidros->setObjectName("labelVidros");
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        labelVidros->setFont(font1);

        verticalLayout_3->addWidget(labelVidros);

        comboBoxVidros = new QComboBox(layoutWidget_2);
        comboBoxVidros->addItem(QString());
        comboBoxVidros->setObjectName("comboBoxVidros");
        sizePolicy1.setHeightForWidth(comboBoxVidros->sizePolicy().hasHeightForWidth());
        comboBoxVidros->setSizePolicy(sizePolicy1);
        comboBoxVidros->setFont(font);

        verticalLayout_3->addWidget(comboBoxVidros);

        layoutWidget_3 = new QWidget(Pivotante);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(610, 400, 211, 71));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_3);
        label_5->setObjectName("label_5");

        verticalLayout_7->addWidget(label_5);

        comboBoxTrinco = new QComboBox(layoutWidget_3);
        comboBoxTrinco->addItem(QString());
        comboBoxTrinco->setObjectName("comboBoxTrinco");
        sizePolicy1.setHeightForWidth(comboBoxTrinco->sizePolicy().hasHeightForWidth());
        comboBoxTrinco->setSizePolicy(sizePolicy1);
        comboBoxTrinco->setFont(font);

        verticalLayout_7->addWidget(comboBoxTrinco);

        layoutWidget_8 = new QWidget(Pivotante);
        layoutWidget_8->setObjectName("layoutWidget_8");
        layoutWidget_8->setGeometry(QRect(420, 310, 131, 71));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_8);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelAltura = new QLabel(layoutWidget_8);
        labelAltura->setObjectName("labelAltura");
        labelAltura->setFont(font1);

        verticalLayout_2->addWidget(labelAltura);

        lineEditAltura = new QLineEdit(layoutWidget_8);
        lineEditAltura->setObjectName("lineEditAltura");
        sizePolicy.setHeightForWidth(lineEditAltura->sizePolicy().hasHeightForWidth());
        lineEditAltura->setSizePolicy(sizePolicy);
        lineEditAltura->setFont(font);

        verticalLayout_2->addWidget(lineEditAltura);

        layoutWidget_7 = new QWidget(Pivotante);
        layoutWidget_7->setObjectName("layoutWidget_7");
        layoutWidget_7->setGeometry(QRect(890, 310, 211, 71));
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
        comboBoxKit->setFont(font);

        verticalLayout_5->addWidget(comboBoxKit);

        layoutWidget_5 = new QWidget(Pivotante);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(270, 310, 131, 71));
        verticalLayout = new QVBoxLayout(layoutWidget_5);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelLargura = new QLabel(layoutWidget_5);
        labelLargura->setObjectName("labelLargura");
        labelLargura->setFont(font1);

        verticalLayout->addWidget(labelLargura);

        lineEditLargura = new QLineEdit(layoutWidget_5);
        lineEditLargura->setObjectName("lineEditLargura");
        sizePolicy.setHeightForWidth(lineEditLargura->sizePolicy().hasHeightForWidth());
        lineEditLargura->setSizePolicy(sizePolicy);
        lineEditLargura->setFont(font);

        verticalLayout->addWidget(lineEditLargura);

        layoutWidget_6 = new QWidget(Pivotante);
        layoutWidget_6->setObjectName("layoutWidget_6");
        layoutWidget_6->setGeometry(QRect(580, 560, 221, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget_6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_6);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        lineEditValor = new QLineEdit(layoutWidget_6);
        lineEditValor->setObjectName("lineEditValor");
        sizePolicy.setHeightForWidth(lineEditValor->sizePolicy().hasHeightForWidth());
        lineEditValor->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        lineEditValor->setFont(font2);

        horizontalLayout->addWidget(lineEditValor);

        pushButtonLimpar = new QPushButton(Pivotante);
        pushButtonLimpar->setObjectName("pushButtonLimpar");
        pushButtonLimpar->setGeometry(QRect(830, 610, 51, 41));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/imagens/limpar.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonLimpar->setIcon(icon3);
        pushButtonLimpar->setIconSize(QSize(24, 24));
        label = new QLabel(Pivotante);
        label->setObjectName("label");
        label->setGeometry(QRect(490, 60, 501, 151));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font3.setPointSize(72);
        font3.setBold(false);
        label->setFont(font3);
        pushButtonCalcular = new QPushButton(Pivotante);
        pushButtonCalcular->setObjectName("pushButtonCalcular");
        pushButtonCalcular->setGeometry(QRect(540, 510, 281, 41));
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButtonCalcular->sizePolicy().hasHeightForWidth());
        pushButtonCalcular->setSizePolicy(sizePolicy2);
        pushButtonCalcular->setFont(font1);
        QWidget::setTabOrder(lineEditLargura, lineEditAltura);
        QWidget::setTabOrder(lineEditAltura, comboBoxVidros);
        QWidget::setTabOrder(comboBoxVidros, comboBoxKit);
        QWidget::setTabOrder(comboBoxKit, comboBoxPelicula);
        QWidget::setTabOrder(comboBoxPelicula, comboBoxTrinco);
        QWidget::setTabOrder(comboBoxTrinco, pushButtonRefatorando);
        QWidget::setTabOrder(pushButtonRefatorando, pushButtonCalcular);
        QWidget::setTabOrder(pushButtonCalcular, pushButtonDesconto);
        QWidget::setTabOrder(pushButtonDesconto, pushButtonSalvar);
        QWidget::setTabOrder(pushButtonSalvar, pushButtonLimpar);
        QWidget::setTabOrder(pushButtonLimpar, lineEditValor);
        QWidget::setTabOrder(lineEditValor, lineEditLucro);

        retranslateUi(Pivotante);

        QMetaObject::connectSlotsByName(Pivotante);
    } // setupUi

    void retranslateUi(QDialog *Pivotante)
    {
        Pivotante->setWindowTitle(QCoreApplication::translate("Pivotante", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("Pivotante", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">LUCRO</span></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        lineEditLucro->setWhatsThis(QCoreApplication::translate("Pivotante", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_7->setText(QCoreApplication::translate("Pivotante", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Pel\303\255cula</span></p></body></html>", nullptr));
        comboBoxPelicula->setItemText(0, QString());

        pushButtonDesconto->setText(QString());
        pushButtonSalvar->setText(QString());
        pushButtonRefatorando->setText(QCoreApplication::translate("Pivotante", "Adicionais", nullptr));
        labelVidros->setText(QCoreApplication::translate("Pivotante", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Vidros</span></p></body></html>", nullptr));
        comboBoxVidros->setItemText(0, QString());

        label_5->setText(QCoreApplication::translate("Pivotante", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Trinco</span></p></body></html>", nullptr));
        comboBoxTrinco->setItemText(0, QString());

        labelAltura->setText(QCoreApplication::translate("Pivotante", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Altura</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Pivotante", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Kit</span></p></body></html>", nullptr));
        comboBoxKit->setItemText(0, QString());

        labelLargura->setText(QCoreApplication::translate("Pivotante", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Largura</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Pivotante", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">VALOR</span></p></body></html>", nullptr));
        pushButtonLimpar->setText(QString());
        label->setText(QCoreApplication::translate("Pivotante", "<html><head/><body><p>Pivotante</p></body></html>", nullptr));
        pushButtonCalcular->setText(QCoreApplication::translate("Pivotante", "CALCULAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pivotante: public Ui_Pivotante {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PIVOTANTE_H
