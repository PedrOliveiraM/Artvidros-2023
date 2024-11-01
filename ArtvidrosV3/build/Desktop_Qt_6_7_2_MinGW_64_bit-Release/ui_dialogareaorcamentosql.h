/********************************************************************************
** Form generated from reading UI file 'dialogareaorcamentosql.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGAREAORCAMENTOSQL_H
#define UI_DIALOGAREAORCAMENTOSQL_H

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

class Ui_DialogAreaOrcamentoSQL
{
public:
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_name_2;
    QLineEdit *lineEditVendedor;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_7;
    QLineEdit *lineEditData;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_name;
    QLineEdit *lineEditCliente;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_name_3;
    QLineEdit *lineEditProduct;
    QPushButton *pushButtonAdicionar;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_profit;
    QLineEdit *lineEditProfit;
    QLabel *label_9;
    QLabel *labelNomeOrcamento;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_price;
    QLineEdit *lineEditPrice;
    QPushButton *pushButtonMostrar;
    QPushButton *pushButtonLimpar;
    QLabel *label_8;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_Id_2;
    QComboBox *comboBoxID;
    QPushButton *pushButtonVoltar;

    void setupUi(QDialog *DialogAreaOrcamentoSQL)
    {
        if (DialogAreaOrcamentoSQL->objectName().isEmpty())
            DialogAreaOrcamentoSQL->setObjectName("DialogAreaOrcamentoSQL");
        DialogAreaOrcamentoSQL->resize(800, 600);
        layoutWidget_4 = new QWidget(DialogAreaOrcamentoSQL);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(120, 450, 411, 36));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        layoutWidget_4->setFont(font);
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_name_2 = new QLabel(layoutWidget_4);
        label_name_2->setObjectName("label_name_2");
        label_name_2->setFont(font);

        horizontalLayout_5->addWidget(label_name_2);

        lineEditVendedor = new QLineEdit(layoutWidget_4);
        lineEditVendedor->setObjectName("lineEditVendedor");
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(false);
        lineEditVendedor->setFont(font1);

        horizontalLayout_5->addWidget(lineEditVendedor);

        layoutWidget = new QWidget(DialogAreaOrcamentoSQL);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(410, 370, 121, 68));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");
        label_7->setFont(font);

        verticalLayout->addWidget(label_7);

        lineEditData = new QLineEdit(layoutWidget);
        lineEditData->setObjectName("lineEditData");
        QFont font2;
        font2.setPointSize(14);
        lineEditData->setFont(font2);

        verticalLayout->addWidget(lineEditData);

        layoutWidget_2 = new QWidget(DialogAreaOrcamentoSQL);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(140, 250, 381, 36));
        layoutWidget_2->setFont(font);
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_name = new QLabel(layoutWidget_2);
        label_name->setObjectName("label_name");
        label_name->setFont(font);

        horizontalLayout_2->addWidget(label_name);

        lineEditCliente = new QLineEdit(layoutWidget_2);
        lineEditCliente->setObjectName("lineEditCliente");
        lineEditCliente->setFont(font1);

        horizontalLayout_2->addWidget(lineEditCliente);

        layoutWidget_7 = new QWidget(DialogAreaOrcamentoSQL);
        layoutWidget_7->setObjectName("layoutWidget_7");
        layoutWidget_7->setGeometry(QRect(130, 300, 561, 36));
        layoutWidget_7->setFont(font);
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_name_3 = new QLabel(layoutWidget_7);
        label_name_3->setObjectName("label_name_3");
        label_name_3->setFont(font);

        horizontalLayout_6->addWidget(label_name_3);

        lineEditProduct = new QLineEdit(layoutWidget_7);
        lineEditProduct->setObjectName("lineEditProduct");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditProduct->sizePolicy().hasHeightForWidth());
        lineEditProduct->setSizePolicy(sizePolicy);
        lineEditProduct->setFont(font1);

        horizontalLayout_6->addWidget(lineEditProduct);

        pushButtonAdicionar = new QPushButton(DialogAreaOrcamentoSQL);
        pushButtonAdicionar->setObjectName("pushButtonAdicionar");
        pushButtonAdicionar->setGeometry(QRect(220, 510, 121, 41));
        QFont font3;
        font3.setBold(true);
        pushButtonAdicionar->setFont(font3);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/salvar.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonAdicionar->setIcon(icon);
        layoutWidget_3 = new QWidget(DialogAreaOrcamentoSQL);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(150, 400, 175, 36));
        layoutWidget_3->setFont(font);
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_profit = new QLabel(layoutWidget_3);
        label_profit->setObjectName("label_profit");
        label_profit->setFont(font);

        horizontalLayout_4->addWidget(label_profit);

        lineEditProfit = new QLineEdit(layoutWidget_3);
        lineEditProfit->setObjectName("lineEditProfit");
        lineEditProfit->setFont(font1);

        horizontalLayout_4->addWidget(lineEditProfit);

        label_9 = new QLabel(DialogAreaOrcamentoSQL);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(360, 120, 351, 61));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font4.setPointSize(20);
        font4.setBold(false);
        label_9->setFont(font4);
        labelNomeOrcamento = new QLabel(DialogAreaOrcamentoSQL);
        labelNomeOrcamento->setObjectName("labelNomeOrcamento");
        labelNomeOrcamento->setGeometry(QRect(360, 200, 191, 31));
        labelNomeOrcamento->setFont(font);
        layoutWidget_5 = new QWidget(DialogAreaOrcamentoSQL);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(150, 350, 181, 36));
        layoutWidget_5->setFont(font);
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_price = new QLabel(layoutWidget_5);
        label_price->setObjectName("label_price");
        label_price->setFont(font);

        horizontalLayout_3->addWidget(label_price);

        lineEditPrice = new QLineEdit(layoutWidget_5);
        lineEditPrice->setObjectName("lineEditPrice");
        lineEditPrice->setFont(font1);

        horizontalLayout_3->addWidget(lineEditPrice);

        pushButtonMostrar = new QPushButton(DialogAreaOrcamentoSQL);
        pushButtonMostrar->setObjectName("pushButtonMostrar");
        pushButtonMostrar->setGeometry(QRect(320, 203, 31, 31));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagens/olho.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonMostrar->setIcon(icon1);
        pushButtonLimpar = new QPushButton(DialogAreaOrcamentoSQL);
        pushButtonLimpar->setObjectName("pushButtonLimpar");
        pushButtonLimpar->setGeometry(QRect(350, 510, 121, 41));
        pushButtonLimpar->setFont(font3);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imagens/limpar.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonLimpar->setIcon(icon2);
        label_8 = new QLabel(DialogAreaOrcamentoSQL);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(80, 0, 631, 161));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font5.setPointSize(12);
        font5.setBold(true);
        label_8->setFont(font5);
        layoutWidget_8 = new QWidget(DialogAreaOrcamentoSQL);
        layoutWidget_8->setObjectName("layoutWidget_8");
        layoutWidget_8->setGeometry(QRect(130, 200, 181, 36));
        layoutWidget_8->setFont(font);
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_8);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_Id_2 = new QLabel(layoutWidget_8);
        label_Id_2->setObjectName("label_Id_2");
        label_Id_2->setFont(font);

        horizontalLayout_7->addWidget(label_Id_2);

        comboBoxID = new QComboBox(layoutWidget_8);
        comboBoxID->addItem(QString());
        comboBoxID->setObjectName("comboBoxID");

        horizontalLayout_7->addWidget(comboBoxID);

        pushButtonVoltar = new QPushButton(DialogAreaOrcamentoSQL);
        pushButtonVoltar->setObjectName("pushButtonVoltar");
        pushButtonVoltar->setGeometry(QRect(480, 510, 121, 41));
        pushButtonVoltar->setFont(font3);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/imagens/voltar.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonVoltar->setIcon(icon3);
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

        retranslateUi(DialogAreaOrcamentoSQL);

        QMetaObject::connectSlotsByName(DialogAreaOrcamentoSQL);
    } // setupUi

    void retranslateUi(QDialog *DialogAreaOrcamentoSQL)
    {
        DialogAreaOrcamentoSQL->setWindowTitle(QCoreApplication::translate("DialogAreaOrcamentoSQL", "Dialog", nullptr));
        label_name_2->setText(QCoreApplication::translate("DialogAreaOrcamentoSQL", "Vendedor", nullptr));
        label_7->setText(QCoreApplication::translate("DialogAreaOrcamentoSQL", "<html><head/><body><p align=\"center\">Data</p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        lineEditData->setWhatsThis(QCoreApplication::translate("DialogAreaOrcamentoSQL", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_name->setText(QCoreApplication::translate("DialogAreaOrcamentoSQL", "Cliente", nullptr));
        label_name_3->setText(QCoreApplication::translate("DialogAreaOrcamentoSQL", "Produto", nullptr));
        pushButtonAdicionar->setText(QString());
        label_profit->setText(QCoreApplication::translate("DialogAreaOrcamentoSQL", "Lucro ", nullptr));
        label_9->setText(QCoreApplication::translate("DialogAreaOrcamentoSQL", "\303\201rea de Or\303\247amentos", nullptr));
        labelNomeOrcamento->setText(QString());
        label_price->setText(QCoreApplication::translate("DialogAreaOrcamentoSQL", "Pre\303\247o ", nullptr));
        pushButtonMostrar->setText(QString());
        pushButtonLimpar->setText(QCoreApplication::translate("DialogAreaOrcamentoSQL", " Limpar", nullptr));
        label_8->setText(QCoreApplication::translate("DialogAreaOrcamentoSQL", "<html><head/><body><p align=\"center\"><span style=\" font-size:82pt; font-weight:700; color:#0000ff;\">Art</span><span style=\" font-size:82pt; font-weight:700; color:#ff0000;\">vidros</span></p></body></html>", nullptr));
        label_Id_2->setText(QCoreApplication::translate("DialogAreaOrcamentoSQL", "C\303\263digo", nullptr));
        comboBoxID->setItemText(0, QString());

        pushButtonVoltar->setText(QCoreApplication::translate("DialogAreaOrcamentoSQL", " Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogAreaOrcamentoSQL: public Ui_DialogAreaOrcamentoSQL {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGAREAORCAMENTOSQL_H
