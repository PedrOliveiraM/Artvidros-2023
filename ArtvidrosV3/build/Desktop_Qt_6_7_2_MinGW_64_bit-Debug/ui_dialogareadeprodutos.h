/********************************************************************************
** Form generated from reading UI file 'dialogareadeprodutos.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGAREADEPRODUTOS_H
#define UI_DIALOGAREADEPRODUTOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogAreaDeProdutos
{
public:
    QLabel *label;
    QTableWidget *tableWidget;
    QLabel *label_3;
    QLineEdit *lineEditPesquisa;

    void setupUi(QDialog *DialogAreaDeProdutos)
    {
        if (DialogAreaDeProdutos->objectName().isEmpty())
            DialogAreaDeProdutos->setObjectName("DialogAreaDeProdutos");
        DialogAreaDeProdutos->resize(1366, 768);
        label = new QLabel(DialogAreaDeProdutos);
        label->setObjectName("label");
        label->setGeometry(QRect(790, 130, 301, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font.setPointSize(18);
        font.setBold(false);
        label->setFont(font);
        tableWidget = new QTableWidget(DialogAreaDeProdutos);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(290, 250, 731, 491));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        tableWidget->setFont(font1);
        tableWidget->horizontalHeader()->setDefaultSectionSize(200);
        label_3 = new QLabel(DialogAreaDeProdutos);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(320, 0, 631, 161));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font2.setPointSize(12);
        font2.setBold(true);
        label_3->setFont(font2);
        lineEditPesquisa = new QLineEdit(DialogAreaDeProdutos);
        lineEditPesquisa->setObjectName("lineEditPesquisa");
        lineEditPesquisa->setGeometry(QRect(290, 210, 731, 29));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditPesquisa->sizePolicy().hasHeightForWidth());
        lineEditPesquisa->setSizePolicy(sizePolicy);

        retranslateUi(DialogAreaDeProdutos);

        QMetaObject::connectSlotsByName(DialogAreaDeProdutos);
    } // setupUi

    void retranslateUi(QDialog *DialogAreaDeProdutos)
    {
        DialogAreaDeProdutos->setWindowTitle(QCoreApplication::translate("DialogAreaDeProdutos", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogAreaDeProdutos", "<html><head/><body><p><span style=\" font-size:22pt;\">\303\201rea de Pre\303\247os</span></p></body></html>", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("DialogAreaDeProdutos", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("DialogAreaDeProdutos", "Valor", nullptr));
        label_3->setText(QCoreApplication::translate("DialogAreaDeProdutos", "<html><head/><body><p align=\"center\"><span style=\" font-size:82pt; font-weight:700; color:#0000ff;\">Art</span><span style=\" font-size:82pt; font-weight:700; color:#ff0000;\">vidros</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogAreaDeProdutos: public Ui_DialogAreaDeProdutos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGAREADEPRODUTOS_H
