/********************************************************************************
** Form generated from reading UI file 'dialogsalvar.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSALVAR_H
#define UI_DIALOGSALVAR_H

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

class Ui_DialogSalvar
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_7;
    QLineEdit *lineEditData;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_price;
    QLineEdit *lineEditPrice;
    QPushButton *pushButtonLimpar;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_profit;
    QLineEdit *lineEditProfit;
    QPushButton *pushButtonVoltar;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_name;
    QLineEdit *lineEditCliente;
    QLabel *label_8;
    QPushButton *pushButtonAdicionar;
    QLabel *label_9;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_name_2;
    QLineEdit *lineEditVendedor;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_name_3;
    QLineEdit *lineEditProduct;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_Id_2;
    QComboBox *comboBoxID;
    QLabel *labelNomeOrcamento;
    QPushButton *pushButtonMostrar;

    void setupUi(QDialog *DialogSalvar)
    {
        if (DialogSalvar->objectName().isEmpty())
            DialogSalvar->setObjectName("DialogSalvar");
        DialogSalvar->resize(800, 600);
        layoutWidget = new QWidget(DialogSalvar);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(410, 350, 121, 64));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label_7->setFont(font);

        verticalLayout->addWidget(label_7);

        lineEditData = new QLineEdit(layoutWidget);
        lineEditData->setObjectName("lineEditData");
        QFont font1;
        font1.setPointSize(14);
        lineEditData->setFont(font1);

        verticalLayout->addWidget(lineEditData);

        layoutWidget_5 = new QWidget(DialogSalvar);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(130, 350, 175, 36));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        layoutWidget_5->setFont(font2);
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_price = new QLabel(layoutWidget_5);
        label_price->setObjectName("label_price");
        label_price->setFont(font2);

        horizontalLayout_3->addWidget(label_price);

        lineEditPrice = new QLineEdit(layoutWidget_5);
        lineEditPrice->setObjectName("lineEditPrice");
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(false);
        lineEditPrice->setFont(font3);

        horizontalLayout_3->addWidget(lineEditPrice);

        pushButtonLimpar = new QPushButton(DialogSalvar);
        pushButtonLimpar->setObjectName("pushButtonLimpar");
        pushButtonLimpar->setGeometry(QRect(350, 510, 121, 41));
        QFont font4;
        font4.setBold(true);
        pushButtonLimpar->setFont(font4);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/limpar.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonLimpar->setIcon(icon);
        layoutWidget_3 = new QWidget(DialogSalvar);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(130, 400, 175, 36));
        layoutWidget_3->setFont(font2);
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_profit = new QLabel(layoutWidget_3);
        label_profit->setObjectName("label_profit");
        label_profit->setFont(font2);

        horizontalLayout_4->addWidget(label_profit);

        lineEditProfit = new QLineEdit(layoutWidget_3);
        lineEditProfit->setObjectName("lineEditProfit");
        lineEditProfit->setFont(font3);

        horizontalLayout_4->addWidget(lineEditProfit);

        pushButtonVoltar = new QPushButton(DialogSalvar);
        pushButtonVoltar->setObjectName("pushButtonVoltar");
        pushButtonVoltar->setGeometry(QRect(480, 510, 121, 41));
        pushButtonVoltar->setFont(font4);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagens/voltar.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonVoltar->setIcon(icon1);
        layoutWidget_2 = new QWidget(DialogSalvar);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(130, 250, 381, 36));
        layoutWidget_2->setFont(font2);
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_name = new QLabel(layoutWidget_2);
        label_name->setObjectName("label_name");
        label_name->setFont(font2);

        horizontalLayout_2->addWidget(label_name);

        lineEditCliente = new QLineEdit(layoutWidget_2);
        lineEditCliente->setObjectName("lineEditCliente");
        lineEditCliente->setFont(font3);

        horizontalLayout_2->addWidget(lineEditCliente);

        label_8 = new QLabel(DialogSalvar);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(80, 0, 631, 161));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font5.setPointSize(12);
        font5.setBold(true);
        label_8->setFont(font5);
        pushButtonAdicionar = new QPushButton(DialogSalvar);
        pushButtonAdicionar->setObjectName("pushButtonAdicionar");
        pushButtonAdicionar->setGeometry(QRect(220, 510, 121, 41));
        pushButtonAdicionar->setFont(font4);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imagens/salvar.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonAdicionar->setIcon(icon2);
        label_9 = new QLabel(DialogSalvar);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(360, 120, 351, 61));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font6.setPointSize(20);
        font6.setBold(false);
        label_9->setFont(font6);
        layoutWidget_4 = new QWidget(DialogSalvar);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(130, 450, 381, 36));
        layoutWidget_4->setFont(font2);
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_name_2 = new QLabel(layoutWidget_4);
        label_name_2->setObjectName("label_name_2");
        label_name_2->setFont(font2);

        horizontalLayout_5->addWidget(label_name_2);

        lineEditVendedor = new QLineEdit(layoutWidget_4);
        lineEditVendedor->setObjectName("lineEditVendedor");
        lineEditVendedor->setFont(font3);

        horizontalLayout_5->addWidget(lineEditVendedor);

        layoutWidget_7 = new QWidget(DialogSalvar);
        layoutWidget_7->setObjectName("layoutWidget_7");
        layoutWidget_7->setGeometry(QRect(130, 300, 561, 36));
        layoutWidget_7->setFont(font2);
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_name_3 = new QLabel(layoutWidget_7);
        label_name_3->setObjectName("label_name_3");
        label_name_3->setFont(font2);

        horizontalLayout_6->addWidget(label_name_3);

        lineEditProduct = new QLineEdit(layoutWidget_7);
        lineEditProduct->setObjectName("lineEditProduct");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditProduct->sizePolicy().hasHeightForWidth());
        lineEditProduct->setSizePolicy(sizePolicy);
        lineEditProduct->setFont(font3);

        horizontalLayout_6->addWidget(lineEditProduct);

        layoutWidget_8 = new QWidget(DialogSalvar);
        layoutWidget_8->setObjectName("layoutWidget_8");
        layoutWidget_8->setGeometry(QRect(130, 200, 181, 36));
        layoutWidget_8->setFont(font2);
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_8);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_Id_2 = new QLabel(layoutWidget_8);
        label_Id_2->setObjectName("label_Id_2");
        label_Id_2->setFont(font2);

        horizontalLayout_7->addWidget(label_Id_2);

        comboBoxID = new QComboBox(layoutWidget_8);
        comboBoxID->addItem(QString());
        comboBoxID->setObjectName("comboBoxID");

        horizontalLayout_7->addWidget(comboBoxID);

        labelNomeOrcamento = new QLabel(DialogSalvar);
        labelNomeOrcamento->setObjectName("labelNomeOrcamento");
        labelNomeOrcamento->setGeometry(QRect(360, 200, 191, 31));
        labelNomeOrcamento->setFont(font2);
        pushButtonMostrar = new QPushButton(DialogSalvar);
        pushButtonMostrar->setObjectName("pushButtonMostrar");
        pushButtonMostrar->setGeometry(QRect(320, 203, 31, 31));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/imagens/olho.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonMostrar->setIcon(icon3);
        QWidget::setTabOrder(comboBoxID, pushButtonMostrar);
        QWidget::setTabOrder(pushButtonMostrar, lineEditCliente);
        QWidget::setTabOrder(lineEditCliente, lineEditProduct);
        QWidget::setTabOrder(lineEditProduct, lineEditPrice);
        QWidget::setTabOrder(lineEditPrice, lineEditProfit);
        QWidget::setTabOrder(lineEditProfit, lineEditData);
        QWidget::setTabOrder(lineEditData, lineEditVendedor);
        QWidget::setTabOrder(lineEditVendedor, pushButtonAdicionar);
        QWidget::setTabOrder(pushButtonAdicionar, pushButtonLimpar);
        QWidget::setTabOrder(pushButtonLimpar, pushButtonVoltar);

        retranslateUi(DialogSalvar);

        QMetaObject::connectSlotsByName(DialogSalvar);
    } // setupUi

    void retranslateUi(QDialog *DialogSalvar)
    {
        DialogSalvar->setWindowTitle(QCoreApplication::translate("DialogSalvar", "Dialog", nullptr));
        label_7->setText(QCoreApplication::translate("DialogSalvar", "<html><head/><body><p align=\"center\">Data</p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        lineEditData->setWhatsThis(QCoreApplication::translate("DialogSalvar", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_price->setText(QCoreApplication::translate("DialogSalvar", "Pre\303\247o ", nullptr));
        pushButtonLimpar->setText(QCoreApplication::translate("DialogSalvar", " Limpar", nullptr));
        label_profit->setText(QCoreApplication::translate("DialogSalvar", "Lucro ", nullptr));
        pushButtonVoltar->setText(QCoreApplication::translate("DialogSalvar", " Voltar", nullptr));
        label_name->setText(QCoreApplication::translate("DialogSalvar", "Cliente", nullptr));
        label_8->setText(QCoreApplication::translate("DialogSalvar", "<html><head/><body><p align=\"center\"><span style=\" font-size:82pt; font-weight:700; color:#0000ff;\">Art</span><span style=\" font-size:82pt; font-weight:700; color:#ff0000;\">vidros</span></p></body></html>", nullptr));
        pushButtonAdicionar->setText(QCoreApplication::translate("DialogSalvar", " Salvar", nullptr));
        label_9->setText(QCoreApplication::translate("DialogSalvar", "\303\201rea de Salvar Or\303\247amento", nullptr));
        label_name_2->setText(QCoreApplication::translate("DialogSalvar", "Vendedor", nullptr));
        label_name_3->setText(QCoreApplication::translate("DialogSalvar", "Produto", nullptr));
        label_Id_2->setText(QCoreApplication::translate("DialogSalvar", "C\303\263digo", nullptr));
        comboBoxID->setItemText(0, QString());

        labelNomeOrcamento->setText(QString());
        pushButtonMostrar->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogSalvar: public Ui_DialogSalvar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSALVAR_H
