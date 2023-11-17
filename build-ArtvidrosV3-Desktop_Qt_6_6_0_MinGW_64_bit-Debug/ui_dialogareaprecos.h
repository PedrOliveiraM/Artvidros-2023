/********************************************************************************
** Form generated from reading UI file 'dialogareaprecos.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGAREAPRECOS_H
#define UI_DIALOGAREAPRECOS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogAreaPrecos
{
public:
    QLabel *label_3;
    QTableWidget *tableWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonADD;
    QPushButton *pushButtonALTER;
    QPushButton *pushButtonDELETE;
    QComboBox *comboBox_OrdenarPor;
    QPushButton *pushButtonOrdem;
    QLabel *label;

    void setupUi(QDialog *DialogAreaPrecos)
    {
        if (DialogAreaPrecos->objectName().isEmpty())
            DialogAreaPrecos->setObjectName("DialogAreaPrecos");
        DialogAreaPrecos->resize(1366, 768);
        label_3 = new QLabel(DialogAreaPrecos);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(353, -10, 631, 161));
        QFont font;
        font.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font.setPointSize(12);
        font.setBold(true);
        label_3->setFont(font);
        tableWidget = new QTableWidget(DialogAreaPrecos);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(180, 230, 1011, 451));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        tableWidget->setFont(font1);
        tableWidget->horizontalHeader()->setDefaultSectionSize(200);
        layoutWidget = new QWidget(DialogAreaPrecos);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(320, 180, 751, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonADD = new QPushButton(layoutWidget);
        pushButtonADD->setObjectName("pushButtonADD");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonADD->sizePolicy().hasHeightForWidth());
        pushButtonADD->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        pushButtonADD->setFont(font2);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/botao-adicionar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonADD->setIcon(icon);
        pushButtonADD->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(pushButtonADD);

        pushButtonALTER = new QPushButton(layoutWidget);
        pushButtonALTER->setObjectName("pushButtonALTER");
        sizePolicy.setHeightForWidth(pushButtonALTER->sizePolicy().hasHeightForWidth());
        pushButtonALTER->setSizePolicy(sizePolicy);
        pushButtonALTER->setFont(font2);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagens/alterar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonALTER->setIcon(icon1);
        pushButtonALTER->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(pushButtonALTER);

        pushButtonDELETE = new QPushButton(layoutWidget);
        pushButtonDELETE->setObjectName("pushButtonDELETE");
        sizePolicy.setHeightForWidth(pushButtonDELETE->sizePolicy().hasHeightForWidth());
        pushButtonDELETE->setSizePolicy(sizePolicy);
        pushButtonDELETE->setFont(font2);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imagens/excluir Normal.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonDELETE->setIcon(icon2);
        pushButtonDELETE->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(pushButtonDELETE);

        comboBox_OrdenarPor = new QComboBox(layoutWidget);
        comboBox_OrdenarPor->addItem(QString());
        comboBox_OrdenarPor->addItem(QString());
        comboBox_OrdenarPor->addItem(QString());
        comboBox_OrdenarPor->addItem(QString());
        comboBox_OrdenarPor->addItem(QString());
        comboBox_OrdenarPor->addItem(QString());
        comboBox_OrdenarPor->setObjectName("comboBox_OrdenarPor");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox_OrdenarPor->sizePolicy().hasHeightForWidth());
        comboBox_OrdenarPor->setSizePolicy(sizePolicy1);
        comboBox_OrdenarPor->setFont(font2);
        comboBox_OrdenarPor->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(comboBox_OrdenarPor);

        pushButtonOrdem = new QPushButton(layoutWidget);
        pushButtonOrdem->setObjectName("pushButtonOrdem");
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButtonOrdem->sizePolicy().hasHeightForWidth());
        pushButtonOrdem->setSizePolicy(sizePolicy2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/imagens/ordenar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonOrdem->setIcon(icon3);
        pushButtonOrdem->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(pushButtonOrdem);

        label = new QLabel(DialogAreaPrecos);
        label->setObjectName("label");
        label->setGeometry(QRect(750, 100, 231, 51));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font3.setPointSize(18);
        font3.setBold(false);
        label->setFont(font3);

        retranslateUi(DialogAreaPrecos);

        QMetaObject::connectSlotsByName(DialogAreaPrecos);
    } // setupUi

    void retranslateUi(QDialog *DialogAreaPrecos)
    {
        DialogAreaPrecos->setWindowTitle(QCoreApplication::translate("DialogAreaPrecos", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("DialogAreaPrecos", "<html><head/><body><p align=\"center\"><span style=\" font-size:82pt; font-weight:700; color:#0000ff;\">Art</span><span style=\" font-size:82pt; font-weight:700; color:#ff0000;\">vidros</span></p></body></html>", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("DialogAreaPrecos", "C\303\263digo", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("DialogAreaPrecos", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("DialogAreaPrecos", "Valor", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("DialogAreaPrecos", "Lucro", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("DialogAreaPrecos", "Tipo", nullptr));
        pushButtonADD->setText(QCoreApplication::translate("DialogAreaPrecos", "  Incluir", nullptr));
        pushButtonALTER->setText(QCoreApplication::translate("DialogAreaPrecos", "  Alterar", nullptr));
        pushButtonDELETE->setText(QCoreApplication::translate("DialogAreaPrecos", "  Excluir", nullptr));
        comboBox_OrdenarPor->setItemText(0, QCoreApplication::translate("DialogAreaPrecos", "Ordenar por :", nullptr));
        comboBox_OrdenarPor->setItemText(1, QCoreApplication::translate("DialogAreaPrecos", "C\303\263digo", nullptr));
        comboBox_OrdenarPor->setItemText(2, QCoreApplication::translate("DialogAreaPrecos", "Produto", nullptr));
        comboBox_OrdenarPor->setItemText(3, QCoreApplication::translate("DialogAreaPrecos", "Valor", nullptr));
        comboBox_OrdenarPor->setItemText(4, QCoreApplication::translate("DialogAreaPrecos", "Lucro", nullptr));
        comboBox_OrdenarPor->setItemText(5, QCoreApplication::translate("DialogAreaPrecos", "Tipo", nullptr));

        pushButtonOrdem->setText(QString());
        label->setText(QCoreApplication::translate("DialogAreaPrecos", "<html><head/><body><p><span style=\" font-size:22pt;\">\303\201rea de Pre\303\247os</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogAreaPrecos: public Ui_DialogAreaPrecos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGAREAPRECOS_H
