/********************************************************************************
** Form generated from reading UI file 'moldura.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOLDURA_H
#define UI_MOLDURA_H

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

class Ui_Moldura
{
public:
    QPushButton *pushButtonCalcular;
    QWidget *layoutWidget_8;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelAltura;
    QLineEdit *lineEditAltura;
    QPushButton *pushButtonSalvar;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelVidros;
    QLineEdit *lineEditValorMoldura;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout;
    QLabel *labelLargura;
    QLineEdit *lineEditLargura;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *lineEditValor;
    QPushButton *pushButtonDesconto;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLineEdit *lineEditLucro;
    QPushButton *pushButtonLimpar;
    QLabel *label;
    QWidget *layoutWidget_12;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_10;
    QComboBox *comboBoxAcabamento;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *spinBox_Acessorios;
    QWidget *layoutWidget_9;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_7;
    QComboBox *comboBoxAcessorios;
    QWidget *layoutWidget_13;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_11;
    QComboBox *comboBoxEspessura;

    void setupUi(QDialog *Moldura)
    {
        if (Moldura->objectName().isEmpty())
            Moldura->setObjectName("Moldura");
        Moldura->resize(1366, 768);
        pushButtonCalcular = new QPushButton(Moldura);
        pushButtonCalcular->setObjectName("pushButtonCalcular");
        pushButtonCalcular->setGeometry(QRect(490, 480, 281, 41));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonCalcular->sizePolicy().hasHeightForWidth());
        pushButtonCalcular->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        pushButtonCalcular->setFont(font);
        layoutWidget_8 = new QWidget(Moldura);
        layoutWidget_8->setObjectName("layoutWidget_8");
        layoutWidget_8->setGeometry(QRect(430, 290, 131, 71));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_8);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelAltura = new QLabel(layoutWidget_8);
        labelAltura->setObjectName("labelAltura");
        labelAltura->setFont(font);

        verticalLayout_2->addWidget(labelAltura);

        lineEditAltura = new QLineEdit(layoutWidget_8);
        lineEditAltura->setObjectName("lineEditAltura");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditAltura->sizePolicy().hasHeightForWidth());
        lineEditAltura->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        lineEditAltura->setFont(font1);

        verticalLayout_2->addWidget(lineEditAltura);

        pushButtonSalvar = new QPushButton(Moldura);
        pushButtonSalvar->setObjectName("pushButtonSalvar");
        pushButtonSalvar->setGeometry(QRect(780, 530, 51, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/salvar.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonSalvar->setIcon(icon);
        pushButtonSalvar->setIconSize(QSize(24, 24));
        layoutWidget_2 = new QWidget(Moldura);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(570, 290, 231, 71));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelVidros = new QLabel(layoutWidget_2);
        labelVidros->setObjectName("labelVidros");
        labelVidros->setFont(font);

        verticalLayout_3->addWidget(labelVidros);

        lineEditValorMoldura = new QLineEdit(layoutWidget_2);
        lineEditValorMoldura->setObjectName("lineEditValorMoldura");
        sizePolicy1.setHeightForWidth(lineEditValorMoldura->sizePolicy().hasHeightForWidth());
        lineEditValorMoldura->setSizePolicy(sizePolicy1);
        lineEditValorMoldura->setFont(font1);

        verticalLayout_3->addWidget(lineEditValorMoldura);

        layoutWidget_5 = new QWidget(Moldura);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(290, 290, 131, 71));
        verticalLayout = new QVBoxLayout(layoutWidget_5);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelLargura = new QLabel(layoutWidget_5);
        labelLargura->setObjectName("labelLargura");
        labelLargura->setFont(font);

        verticalLayout->addWidget(labelLargura);

        lineEditLargura = new QLineEdit(layoutWidget_5);
        lineEditLargura->setObjectName("lineEditLargura");
        sizePolicy1.setHeightForWidth(lineEditLargura->sizePolicy().hasHeightForWidth());
        lineEditLargura->setSizePolicy(sizePolicy1);
        lineEditLargura->setFont(font1);

        verticalLayout->addWidget(lineEditLargura);

        layoutWidget_6 = new QWidget(Moldura);
        layoutWidget_6->setObjectName("layoutWidget_6");
        layoutWidget_6->setGeometry(QRect(530, 530, 221, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget_6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_6);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        lineEditValor = new QLineEdit(layoutWidget_6);
        lineEditValor->setObjectName("lineEditValor");
        sizePolicy1.setHeightForWidth(lineEditValor->sizePolicy().hasHeightForWidth());
        lineEditValor->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        lineEditValor->setFont(font2);

        horizontalLayout->addWidget(lineEditValor);

        pushButtonDesconto = new QPushButton(Moldura);
        pushButtonDesconto->setObjectName("pushButtonDesconto");
        pushButtonDesconto->setGeometry(QRect(780, 480, 51, 41));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagens/desconto.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonDesconto->setIcon(icon1);
        pushButtonDesconto->setIconSize(QSize(24, 24));
        layoutWidget = new QWidget(Moldura);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(530, 580, 221, 41));
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
        sizePolicy1.setHeightForWidth(lineEditLucro->sizePolicy().hasHeightForWidth());
        lineEditLucro->setSizePolicy(sizePolicy1);
        lineEditLucro->setFont(font1);

        horizontalLayout_2->addWidget(lineEditLucro);


        verticalLayout_6->addLayout(horizontalLayout_2);

        pushButtonLimpar = new QPushButton(Moldura);
        pushButtonLimpar->setObjectName("pushButtonLimpar");
        pushButtonLimpar->setGeometry(QRect(780, 580, 51, 41));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imagens/limpar.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonLimpar->setIcon(icon2);
        pushButtonLimpar->setIconSize(QSize(24, 24));
        label = new QLabel(Moldura);
        label->setObjectName("label");
        label->setGeometry(QRect(450, 70, 441, 141));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font3.setPointSize(72);
        font3.setBold(false);
        label->setFont(font3);
        layoutWidget_12 = new QWidget(Moldura);
        layoutWidget_12->setObjectName("layoutWidget_12");
        layoutWidget_12->setGeometry(QRect(710, 370, 211, 71));
        verticalLayout_11 = new QVBoxLayout(layoutWidget_12);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget_12);
        label_10->setObjectName("label_10");

        verticalLayout_11->addWidget(label_10);

        comboBoxAcabamento = new QComboBox(layoutWidget_12);
        comboBoxAcabamento->addItem(QString());
        comboBoxAcabamento->setObjectName("comboBoxAcabamento");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBoxAcabamento->sizePolicy().hasHeightForWidth());
        comboBoxAcabamento->setSizePolicy(sizePolicy2);
        comboBoxAcabamento->setFont(font1);

        verticalLayout_11->addWidget(comboBoxAcabamento);

        layoutWidget_7 = new QWidget(Moldura);
        layoutWidget_7->setObjectName("layoutWidget_7");
        layoutWidget_7->setGeometry(QRect(620, 410, 81, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        spinBox_Acessorios = new QSpinBox(layoutWidget_7);
        spinBox_Acessorios->setObjectName("spinBox_Acessorios");
        sizePolicy.setHeightForWidth(spinBox_Acessorios->sizePolicy().hasHeightForWidth());
        spinBox_Acessorios->setSizePolicy(sizePolicy);
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        spinBox_Acessorios->setFont(font4);

        horizontalLayout_3->addWidget(spinBox_Acessorios);

        layoutWidget_9 = new QWidget(Moldura);
        layoutWidget_9->setObjectName("layoutWidget_9");
        layoutWidget_9->setGeometry(QRect(400, 370, 211, 71));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_9);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_9);
        label_7->setObjectName("label_7");

        verticalLayout_8->addWidget(label_7);

        comboBoxAcessorios = new QComboBox(layoutWidget_9);
        comboBoxAcessorios->addItem(QString());
        comboBoxAcessorios->setObjectName("comboBoxAcessorios");
        sizePolicy2.setHeightForWidth(comboBoxAcessorios->sizePolicy().hasHeightForWidth());
        comboBoxAcessorios->setSizePolicy(sizePolicy2);
        comboBoxAcessorios->setFont(font1);

        verticalLayout_8->addWidget(comboBoxAcessorios);

        layoutWidget_13 = new QWidget(Moldura);
        layoutWidget_13->setObjectName("layoutWidget_13");
        layoutWidget_13->setGeometry(QRect(810, 290, 211, 71));
        verticalLayout_12 = new QVBoxLayout(layoutWidget_13);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget_13);
        label_11->setObjectName("label_11");

        verticalLayout_12->addWidget(label_11);

        comboBoxEspessura = new QComboBox(layoutWidget_13);
        comboBoxEspessura->addItem(QString());
        comboBoxEspessura->addItem(QString());
        comboBoxEspessura->addItem(QString());
        comboBoxEspessura->addItem(QString());
        comboBoxEspessura->setObjectName("comboBoxEspessura");
        sizePolicy2.setHeightForWidth(comboBoxEspessura->sizePolicy().hasHeightForWidth());
        comboBoxEspessura->setSizePolicy(sizePolicy2);
        comboBoxEspessura->setFont(font1);

        verticalLayout_12->addWidget(comboBoxEspessura);

        QWidget::setTabOrder(lineEditLargura, lineEditAltura);
        QWidget::setTabOrder(lineEditAltura, lineEditValorMoldura);
        QWidget::setTabOrder(lineEditValorMoldura, comboBoxEspessura);
        QWidget::setTabOrder(comboBoxEspessura, comboBoxAcessorios);
        QWidget::setTabOrder(comboBoxAcessorios, spinBox_Acessorios);
        QWidget::setTabOrder(spinBox_Acessorios, comboBoxAcabamento);
        QWidget::setTabOrder(comboBoxAcabamento, pushButtonCalcular);
        QWidget::setTabOrder(pushButtonCalcular, pushButtonDesconto);
        QWidget::setTabOrder(pushButtonDesconto, pushButtonSalvar);
        QWidget::setTabOrder(pushButtonSalvar, pushButtonLimpar);
        QWidget::setTabOrder(pushButtonLimpar, lineEditValor);
        QWidget::setTabOrder(lineEditValor, lineEditLucro);

        retranslateUi(Moldura);

        QMetaObject::connectSlotsByName(Moldura);
    } // setupUi

    void retranslateUi(QDialog *Moldura)
    {
        Moldura->setWindowTitle(QCoreApplication::translate("Moldura", "Dialog", nullptr));
        pushButtonCalcular->setText(QCoreApplication::translate("Moldura", "CALCULAR", nullptr));
        labelAltura->setText(QCoreApplication::translate("Moldura", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Altura</span></p></body></html>", nullptr));
        pushButtonSalvar->setText(QString());
        labelVidros->setText(QCoreApplication::translate("Moldura", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Valor da Moldura</span></p></body></html>", nullptr));
        labelLargura->setText(QCoreApplication::translate("Moldura", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Largura</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Moldura", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">VALOR</span></p></body></html>", nullptr));
        pushButtonDesconto->setText(QString());
        label_6->setText(QCoreApplication::translate("Moldura", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">LUCRO</span></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        lineEditLucro->setWhatsThis(QCoreApplication::translate("Moldura", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButtonLimpar->setText(QString());
        label->setText(QCoreApplication::translate("Moldura", "<html><head/><body><p>Moldura</p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("Moldura", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Acabamento</span></p></body></html>", nullptr));
        comboBoxAcabamento->setItemText(0, QString());

        label_7->setText(QCoreApplication::translate("Moldura", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Acessorios</span></p></body></html>", nullptr));
        comboBoxAcessorios->setItemText(0, QString());

        label_11->setText(QCoreApplication::translate("Moldura", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Espessura</span></p></body></html>", nullptr));
        comboBoxEspessura->setItemText(0, QString());
        comboBoxEspessura->setItemText(1, QCoreApplication::translate("Moldura", "Fina", nullptr));
        comboBoxEspessura->setItemText(2, QCoreApplication::translate("Moldura", "M\303\251dia", nullptr));
        comboBoxEspessura->setItemText(3, QCoreApplication::translate("Moldura", "Grossa", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Moldura: public Ui_Moldura {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOLDURA_H
