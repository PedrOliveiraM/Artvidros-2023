/********************************************************************************
** Form generated from reading UI file 'janelade2folhas.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELADE2FOLHAS_H
#define UI_JANELADE2FOLHAS_H

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

class Ui_JanelaDe2Folhas
{
public:
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_7;
    QComboBox *comboBoxPelicula;
    QPushButton *pushButtonLimpar;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_5;
    QComboBox *comboBoxTrinco;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *lineEditValor;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout;
    QLabel *labelLargura;
    QLineEdit *lineEditLargura;
    QLabel *label;
    QPushButton *pushButtonSalvar;
    QPushButton *pushButtonCalcular;
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLineEdit *lineEditLucro;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelVidros;
    QComboBox *comboBoxVidros;
    QPushButton *pushButtonRefatorando;
    QWidget *layoutWidget_8;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QComboBox *comboBoxKit;
    QPushButton *pushButtonDesconto;
    QWidget *layoutWidget_9;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelAltura;
    QLineEdit *lineEditAltura;
    QWidget *layoutWidget_10;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_8;
    QComboBox *comboBoxBateFecha;

    void setupUi(QDialog *JanelaDe2Folhas)
    {
        if (JanelaDe2Folhas->objectName().isEmpty())
            JanelaDe2Folhas->setObjectName("JanelaDe2Folhas");
        JanelaDe2Folhas->resize(1366, 768);
        layoutWidget_3 = new QWidget(JanelaDe2Folhas);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(610, 420, 211, 71));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_3);
        label_7->setObjectName("label_7");

        verticalLayout_8->addWidget(label_7);

        comboBoxPelicula = new QComboBox(layoutWidget_3);
        comboBoxPelicula->addItem(QString());
        comboBoxPelicula->setObjectName("comboBoxPelicula");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBoxPelicula->sizePolicy().hasHeightForWidth());
        comboBoxPelicula->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        comboBoxPelicula->setFont(font);

        verticalLayout_8->addWidget(comboBoxPelicula);

        pushButtonLimpar = new QPushButton(JanelaDe2Folhas);
        pushButtonLimpar->setObjectName("pushButtonLimpar");
        pushButtonLimpar->setGeometry(QRect(820, 630, 51, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/limpar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonLimpar->setIcon(icon);
        pushButtonLimpar->setIconSize(QSize(24, 24));
        layoutWidget_2 = new QWidget(JanelaDe2Folhas);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(390, 420, 211, 71));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName("label_5");

        verticalLayout_7->addWidget(label_5);

        comboBoxTrinco = new QComboBox(layoutWidget_2);
        comboBoxTrinco->addItem(QString());
        comboBoxTrinco->setObjectName("comboBoxTrinco");
        sizePolicy.setHeightForWidth(comboBoxTrinco->sizePolicy().hasHeightForWidth());
        comboBoxTrinco->setSizePolicy(sizePolicy);
        comboBoxTrinco->setFont(font);

        verticalLayout_7->addWidget(comboBoxTrinco);

        layoutWidget_4 = new QWidget(JanelaDe2Folhas);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(570, 580, 221, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget_4);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_4);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        lineEditValor = new QLineEdit(layoutWidget_4);
        lineEditValor->setObjectName("lineEditValor");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditValor->sizePolicy().hasHeightForWidth());
        lineEditValor->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        lineEditValor->setFont(font1);

        horizontalLayout->addWidget(lineEditValor);

        layoutWidget_5 = new QWidget(JanelaDe2Folhas);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(170, 330, 131, 71));
        verticalLayout = new QVBoxLayout(layoutWidget_5);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelLargura = new QLabel(layoutWidget_5);
        labelLargura->setObjectName("labelLargura");
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        labelLargura->setFont(font2);

        verticalLayout->addWidget(labelLargura);

        lineEditLargura = new QLineEdit(layoutWidget_5);
        lineEditLargura->setObjectName("lineEditLargura");
        sizePolicy1.setHeightForWidth(lineEditLargura->sizePolicy().hasHeightForWidth());
        lineEditLargura->setSizePolicy(sizePolicy1);
        lineEditLargura->setFont(font);

        verticalLayout->addWidget(lineEditLargura);

        label = new QLabel(JanelaDe2Folhas);
        label->setObjectName("label");
        label->setGeometry(QRect(300, 70, 801, 201));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font3.setPointSize(72);
        font3.setBold(false);
        label->setFont(font3);
        pushButtonSalvar = new QPushButton(JanelaDe2Folhas);
        pushButtonSalvar->setObjectName("pushButtonSalvar");
        pushButtonSalvar->setGeometry(QRect(820, 580, 51, 41));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagens/salvar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSalvar->setIcon(icon1);
        pushButtonSalvar->setIconSize(QSize(24, 24));
        pushButtonCalcular = new QPushButton(JanelaDe2Folhas);
        pushButtonCalcular->setObjectName("pushButtonCalcular");
        pushButtonCalcular->setGeometry(QRect(530, 530, 281, 41));
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButtonCalcular->sizePolicy().hasHeightForWidth());
        pushButtonCalcular->setSizePolicy(sizePolicy2);
        pushButtonCalcular->setFont(font2);
        layoutWidget_6 = new QWidget(JanelaDe2Folhas);
        layoutWidget_6->setObjectName("layoutWidget_6");
        layoutWidget_6->setGeometry(QRect(570, 630, 221, 41));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_6);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_6 = new QLabel(layoutWidget_6);
        label_6->setObjectName("label_6");

        horizontalLayout_2->addWidget(label_6);

        lineEditLucro = new QLineEdit(layoutWidget_6);
        lineEditLucro->setObjectName("lineEditLucro");
        sizePolicy1.setHeightForWidth(lineEditLucro->sizePolicy().hasHeightForWidth());
        lineEditLucro->setSizePolicy(sizePolicy1);
        lineEditLucro->setFont(font);

        horizontalLayout_2->addWidget(lineEditLucro);


        verticalLayout_6->addLayout(horizontalLayout_2);

        layoutWidget_7 = new QWidget(JanelaDe2Folhas);
        layoutWidget_7->setObjectName("layoutWidget_7");
        layoutWidget_7->setGeometry(QRect(450, 330, 311, 71));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_7);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelVidros = new QLabel(layoutWidget_7);
        labelVidros->setObjectName("labelVidros");
        labelVidros->setFont(font2);

        verticalLayout_3->addWidget(labelVidros);

        comboBoxVidros = new QComboBox(layoutWidget_7);
        comboBoxVidros->addItem(QString());
        comboBoxVidros->setObjectName("comboBoxVidros");
        sizePolicy.setHeightForWidth(comboBoxVidros->sizePolicy().hasHeightForWidth());
        comboBoxVidros->setSizePolicy(sizePolicy);
        comboBoxVidros->setFont(font);

        verticalLayout_3->addWidget(comboBoxVidros);

        pushButtonRefatorando = new QPushButton(JanelaDe2Folhas);
        pushButtonRefatorando->setObjectName("pushButtonRefatorando");
        pushButtonRefatorando->setGeometry(QRect(830, 450, 211, 41));
        pushButtonRefatorando->setFont(font);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imagens/adicionar-a-cesta.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonRefatorando->setIcon(icon2);
        pushButtonRefatorando->setIconSize(QSize(24, 24));
        layoutWidget_8 = new QWidget(JanelaDe2Folhas);
        layoutWidget_8->setObjectName("layoutWidget_8");
        layoutWidget_8->setGeometry(QRect(770, 330, 211, 71));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_8);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_8);
        label_3->setObjectName("label_3");

        verticalLayout_5->addWidget(label_3);

        comboBoxKit = new QComboBox(layoutWidget_8);
        comboBoxKit->addItem(QString());
        comboBoxKit->setObjectName("comboBoxKit");
        sizePolicy.setHeightForWidth(comboBoxKit->sizePolicy().hasHeightForWidth());
        comboBoxKit->setSizePolicy(sizePolicy);
        comboBoxKit->setFont(font);

        verticalLayout_5->addWidget(comboBoxKit);

        pushButtonDesconto = new QPushButton(JanelaDe2Folhas);
        pushButtonDesconto->setObjectName("pushButtonDesconto");
        pushButtonDesconto->setGeometry(QRect(820, 530, 51, 41));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/imagens/desconto.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonDesconto->setIcon(icon3);
        pushButtonDesconto->setIconSize(QSize(24, 24));
        layoutWidget_9 = new QWidget(JanelaDe2Folhas);
        layoutWidget_9->setObjectName("layoutWidget_9");
        layoutWidget_9->setGeometry(QRect(310, 330, 131, 71));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_9);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelAltura = new QLabel(layoutWidget_9);
        labelAltura->setObjectName("labelAltura");
        labelAltura->setFont(font2);

        verticalLayout_2->addWidget(labelAltura);

        lineEditAltura = new QLineEdit(layoutWidget_9);
        lineEditAltura->setObjectName("lineEditAltura");
        sizePolicy1.setHeightForWidth(lineEditAltura->sizePolicy().hasHeightForWidth());
        lineEditAltura->setSizePolicy(sizePolicy1);
        lineEditAltura->setFont(font);

        verticalLayout_2->addWidget(lineEditAltura);

        layoutWidget_10 = new QWidget(JanelaDe2Folhas);
        layoutWidget_10->setObjectName("layoutWidget_10");
        layoutWidget_10->setGeometry(QRect(990, 330, 211, 71));
        verticalLayout_9 = new QVBoxLayout(layoutWidget_10);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget_10);
        label_8->setObjectName("label_8");

        verticalLayout_9->addWidget(label_8);

        comboBoxBateFecha = new QComboBox(layoutWidget_10);
        comboBoxBateFecha->addItem(QString());
        comboBoxBateFecha->setObjectName("comboBoxBateFecha");
        sizePolicy.setHeightForWidth(comboBoxBateFecha->sizePolicy().hasHeightForWidth());
        comboBoxBateFecha->setSizePolicy(sizePolicy);
        comboBoxBateFecha->setFont(font);

        verticalLayout_9->addWidget(comboBoxBateFecha);

        QWidget::setTabOrder(lineEditLargura, lineEditAltura);
        QWidget::setTabOrder(lineEditAltura, comboBoxVidros);
        QWidget::setTabOrder(comboBoxVidros, comboBoxKit);
        QWidget::setTabOrder(comboBoxKit, comboBoxBateFecha);
        QWidget::setTabOrder(comboBoxBateFecha, comboBoxTrinco);
        QWidget::setTabOrder(comboBoxTrinco, comboBoxPelicula);
        QWidget::setTabOrder(comboBoxPelicula, pushButtonRefatorando);
        QWidget::setTabOrder(pushButtonRefatorando, pushButtonCalcular);
        QWidget::setTabOrder(pushButtonCalcular, pushButtonDesconto);
        QWidget::setTabOrder(pushButtonDesconto, pushButtonSalvar);
        QWidget::setTabOrder(pushButtonSalvar, pushButtonLimpar);
        QWidget::setTabOrder(pushButtonLimpar, lineEditValor);
        QWidget::setTabOrder(lineEditValor, lineEditLucro);

        retranslateUi(JanelaDe2Folhas);

        QMetaObject::connectSlotsByName(JanelaDe2Folhas);
    } // setupUi

    void retranslateUi(QDialog *JanelaDe2Folhas)
    {
        JanelaDe2Folhas->setWindowTitle(QCoreApplication::translate("JanelaDe2Folhas", "Dialog", nullptr));
        label_7->setText(QCoreApplication::translate("JanelaDe2Folhas", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Pel\303\255cula</span></p></body></html>", nullptr));
        comboBoxPelicula->setItemText(0, QString());

        pushButtonLimpar->setText(QString());
        label_5->setText(QCoreApplication::translate("JanelaDe2Folhas", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Trinco</span></p></body></html>", nullptr));
        comboBoxTrinco->setItemText(0, QString());

        label_4->setText(QCoreApplication::translate("JanelaDe2Folhas", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">VALOR</span></p></body></html>", nullptr));
        labelLargura->setText(QCoreApplication::translate("JanelaDe2Folhas", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Largura</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("JanelaDe2Folhas", "<html><head/><body><p>Janela 2 Folhas</p></body></html>", nullptr));
        pushButtonSalvar->setText(QString());
        pushButtonCalcular->setText(QCoreApplication::translate("JanelaDe2Folhas", "CALCULAR", nullptr));
        label_6->setText(QCoreApplication::translate("JanelaDe2Folhas", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">LUCRO</span></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        lineEditLucro->setWhatsThis(QCoreApplication::translate("JanelaDe2Folhas", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        labelVidros->setText(QCoreApplication::translate("JanelaDe2Folhas", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Vidros</span></p></body></html>", nullptr));
        comboBoxVidros->setItemText(0, QString());

        pushButtonRefatorando->setText(QCoreApplication::translate("JanelaDe2Folhas", "Adicionais", nullptr));
        label_3->setText(QCoreApplication::translate("JanelaDe2Folhas", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Kit</span></p></body></html>", nullptr));
        comboBoxKit->setItemText(0, QString());

        pushButtonDesconto->setText(QString());
        labelAltura->setText(QCoreApplication::translate("JanelaDe2Folhas", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Altura</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("JanelaDe2Folhas", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">BateFecha</span></p></body></html>", nullptr));
        comboBoxBateFecha->setItemText(0, QString());

    } // retranslateUi

};

namespace Ui {
    class JanelaDe2Folhas: public Ui_JanelaDe2Folhas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELADE2FOLHAS_H
