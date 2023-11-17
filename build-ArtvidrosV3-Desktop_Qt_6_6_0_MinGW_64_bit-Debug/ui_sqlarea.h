/********************************************************************************
** Form generated from reading UI file 'sqlarea.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SQLAREA_H
#define UI_SQLAREA_H

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

class Ui_SQLarea
{
public:
    QPushButton *pushButtonLimpar;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_name;
    QLineEdit *lineEditProduct;
    QLabel *label;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QLabel *labeltype;
    QComboBox *comboBoxType;
    QLabel *label_3;
    QPushButton *pushButtonVoltar;
    QPushButton *pushButtonAdicionar;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_profit;
    QLineEdit *lineEditProductProfit;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_Id;
    QLineEdit *lineEditID;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_price;
    QLineEdit *lineEditPrice;

    void setupUi(QDialog *SQLarea)
    {
        if (SQLarea->objectName().isEmpty())
            SQLarea->setObjectName("SQLarea");
        SQLarea->resize(800, 600);
        pushButtonLimpar = new QPushButton(SQLarea);
        pushButtonLimpar->setObjectName("pushButtonLimpar");
        pushButtonLimpar->setGeometry(QRect(340, 500, 121, 41));
        QFont font;
        font.setBold(true);
        pushButtonLimpar->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/limpar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonLimpar->setIcon(icon);
        layoutWidget = new QWidget(SQLarea);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(170, 270, 381, 36));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        layoutWidget->setFont(font1);
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_name = new QLabel(layoutWidget);
        label_name->setObjectName("label_name");
        label_name->setFont(font1);

        horizontalLayout_2->addWidget(label_name);

        lineEditProduct = new QLineEdit(layoutWidget);
        lineEditProduct->setObjectName("lineEditProduct");
        lineEditProduct->setFont(font1);

        horizontalLayout_2->addWidget(lineEditProduct);

        label = new QLabel(SQLarea);
        label->setObjectName("label");
        label->setGeometry(QRect(470, 140, 231, 61));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font2.setPointSize(20);
        font2.setBold(false);
        label->setFont(font2);
        layoutWidget_2 = new QWidget(SQLarea);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(410, 320, 201, 68));
        layoutWidget_2->setFont(font1);
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labeltype = new QLabel(layoutWidget_2);
        labeltype->setObjectName("labeltype");
        labeltype->setFont(font1);

        verticalLayout->addWidget(labeltype);

        comboBoxType = new QComboBox(layoutWidget_2);
        comboBoxType->setObjectName("comboBoxType");
        comboBoxType->setFont(font1);

        verticalLayout->addWidget(comboBoxType);

        label_3 = new QLabel(SQLarea);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 20, 631, 161));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font3.setPointSize(12);
        font3.setBold(true);
        label_3->setFont(font3);
        pushButtonVoltar = new QPushButton(SQLarea);
        pushButtonVoltar->setObjectName("pushButtonVoltar");
        pushButtonVoltar->setGeometry(QRect(470, 500, 121, 41));
        pushButtonVoltar->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagens/voltar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonVoltar->setIcon(icon1);
        pushButtonAdicionar = new QPushButton(SQLarea);
        pushButtonAdicionar->setObjectName("pushButtonAdicionar");
        pushButtonAdicionar->setGeometry(QRect(210, 500, 121, 41));
        pushButtonAdicionar->setFont(font);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imagens/botao-adicionar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAdicionar->setIcon(icon2);
        layoutWidget_3 = new QWidget(SQLarea);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(170, 370, 175, 36));
        layoutWidget_3->setFont(font1);
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_profit = new QLabel(layoutWidget_3);
        label_profit->setObjectName("label_profit");
        label_profit->setFont(font1);

        horizontalLayout_4->addWidget(label_profit);

        lineEditProductProfit = new QLineEdit(layoutWidget_3);
        lineEditProductProfit->setObjectName("lineEditProductProfit");
        lineEditProductProfit->setFont(font1);

        horizontalLayout_4->addWidget(lineEditProductProfit);

        layoutWidget_4 = new QWidget(SQLarea);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(160, 220, 181, 36));
        layoutWidget_4->setFont(font1);
        horizontalLayout = new QHBoxLayout(layoutWidget_4);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_Id = new QLabel(layoutWidget_4);
        label_Id->setObjectName("label_Id");
        label_Id->setFont(font1);

        horizontalLayout->addWidget(label_Id);

        lineEditID = new QLineEdit(layoutWidget_4);
        lineEditID->setObjectName("lineEditID");
        lineEditID->setFont(font1);

        horizontalLayout->addWidget(lineEditID);

        layoutWidget_5 = new QWidget(SQLarea);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(170, 320, 175, 36));
        layoutWidget_5->setFont(font1);
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_price = new QLabel(layoutWidget_5);
        label_price->setObjectName("label_price");
        label_price->setFont(font1);

        horizontalLayout_3->addWidget(label_price);

        lineEditPrice = new QLineEdit(layoutWidget_5);
        lineEditPrice->setObjectName("lineEditPrice");
        lineEditPrice->setFont(font1);

        horizontalLayout_3->addWidget(lineEditPrice);

        QWidget::setTabOrder(lineEditID, lineEditProduct);
        QWidget::setTabOrder(lineEditProduct, lineEditPrice);
        QWidget::setTabOrder(lineEditPrice, lineEditProductProfit);
        QWidget::setTabOrder(lineEditProductProfit, comboBoxType);
        QWidget::setTabOrder(comboBoxType, pushButtonAdicionar);
        QWidget::setTabOrder(pushButtonAdicionar, pushButtonLimpar);
        QWidget::setTabOrder(pushButtonLimpar, pushButtonVoltar);

        retranslateUi(SQLarea);

        QMetaObject::connectSlotsByName(SQLarea);
    } // setupUi

    void retranslateUi(QDialog *SQLarea)
    {
        SQLarea->setWindowTitle(QCoreApplication::translate("SQLarea", "Dialog", nullptr));
        pushButtonLimpar->setText(QCoreApplication::translate("SQLarea", " Limpar", nullptr));
        label_name->setText(QCoreApplication::translate("SQLarea", "Nome", nullptr));
        label->setText(QCoreApplication::translate("SQLarea", "\303\201rea de Inclus\303\243o", nullptr));
        labeltype->setText(QCoreApplication::translate("SQLarea", "<html><head/><body><p align=\"center\">Tipo</p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("SQLarea", "<html><head/><body><p align=\"center\"><span style=\" font-size:82pt; font-weight:700; color:#0000ff;\">Art</span><span style=\" font-size:82pt; font-weight:700; color:#ff0000;\">vidros</span></p></body></html>", nullptr));
        pushButtonVoltar->setText(QCoreApplication::translate("SQLarea", " Voltar", nullptr));
        pushButtonAdicionar->setText(QCoreApplication::translate("SQLarea", " Adicionar", nullptr));
        label_profit->setText(QCoreApplication::translate("SQLarea", "Lucro ", nullptr));
        label_Id->setText(QCoreApplication::translate("SQLarea", "C\303\263digo", nullptr));
#if QT_CONFIG(whatsthis)
        lineEditID->setWhatsThis(QCoreApplication::translate("SQLarea", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_price->setText(QCoreApplication::translate("SQLarea", "Pre\303\247o ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SQLarea: public Ui_SQLarea {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SQLAREA_H
