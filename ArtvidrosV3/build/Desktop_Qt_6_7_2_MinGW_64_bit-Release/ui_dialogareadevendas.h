/********************************************************************************
** Form generated from reading UI file 'dialogareadevendas.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGAREADEVENDAS_H
#define UI_DIALOGAREADEVENDAS_H

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

class Ui_DialogAreaDeVendas
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonVerResultados;
    QPushButton *pushButton_Adicionar;
    QPushButton *pushButtonAlterar;
    QPushButton *pushButton_Excluir;
    QComboBox *comboBox_Dia;
    QComboBox *comboBox_Mes;
    QComboBox *comboBox_Ano;
    QComboBox *comboBox_Vendedor;
    QPushButton *pushButton_Buscar;
    QLabel *label;
    QTableWidget *tableWidget;
    QLabel *label_3;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QLabel *label_LucroTotal;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QLabel *label_ValorTotal;

    void setupUi(QDialog *DialogAreaDeVendas)
    {
        if (DialogAreaDeVendas->objectName().isEmpty())
            DialogAreaDeVendas->setObjectName("DialogAreaDeVendas");
        DialogAreaDeVendas->resize(1366, 768);
        layoutWidget = new QWidget(DialogAreaDeVendas);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(80, 200, 1201, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonVerResultados = new QPushButton(layoutWidget);
        pushButtonVerResultados->setObjectName("pushButtonVerResultados");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonVerResultados->sizePolicy().hasHeightForWidth());
        pushButtonVerResultados->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        pushButtonVerResultados->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/ficheiro-pdf.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonVerResultados->setIcon(icon);
        pushButtonVerResultados->setIconSize(QSize(30, 30));

        horizontalLayout_2->addWidget(pushButtonVerResultados);

        pushButton_Adicionar = new QPushButton(layoutWidget);
        pushButton_Adicionar->setObjectName("pushButton_Adicionar");
        sizePolicy.setHeightForWidth(pushButton_Adicionar->sizePolicy().hasHeightForWidth());
        pushButton_Adicionar->setSizePolicy(sizePolicy);
        pushButton_Adicionar->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagens/botao-adicionar.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_Adicionar->setIcon(icon1);
        pushButton_Adicionar->setIconSize(QSize(30, 30));

        horizontalLayout_2->addWidget(pushButton_Adicionar);

        pushButtonAlterar = new QPushButton(layoutWidget);
        pushButtonAlterar->setObjectName("pushButtonAlterar");
        sizePolicy.setHeightForWidth(pushButtonAlterar->sizePolicy().hasHeightForWidth());
        pushButtonAlterar->setSizePolicy(sizePolicy);
        pushButtonAlterar->setFont(font);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imagens/alterar.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonAlterar->setIcon(icon2);
        pushButtonAlterar->setIconSize(QSize(30, 30));

        horizontalLayout_2->addWidget(pushButtonAlterar);

        pushButton_Excluir = new QPushButton(layoutWidget);
        pushButton_Excluir->setObjectName("pushButton_Excluir");
        sizePolicy.setHeightForWidth(pushButton_Excluir->sizePolicy().hasHeightForWidth());
        pushButton_Excluir->setSizePolicy(sizePolicy);
        pushButton_Excluir->setFont(font);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/imagens/excluir Normal.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_Excluir->setIcon(icon3);
        pushButton_Excluir->setIconSize(QSize(30, 30));

        horizontalLayout_2->addWidget(pushButton_Excluir);

        comboBox_Dia = new QComboBox(layoutWidget);
        comboBox_Dia->addItem(QString());
        comboBox_Dia->setObjectName("comboBox_Dia");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox_Dia->sizePolicy().hasHeightForWidth());
        comboBox_Dia->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        comboBox_Dia->setFont(font1);

        horizontalLayout_2->addWidget(comboBox_Dia);

        comboBox_Mes = new QComboBox(layoutWidget);
        comboBox_Mes->addItem(QString());
        comboBox_Mes->setObjectName("comboBox_Mes");
        sizePolicy1.setHeightForWidth(comboBox_Mes->sizePolicy().hasHeightForWidth());
        comboBox_Mes->setSizePolicy(sizePolicy1);
        comboBox_Mes->setFont(font1);

        horizontalLayout_2->addWidget(comboBox_Mes);

        comboBox_Ano = new QComboBox(layoutWidget);
        comboBox_Ano->addItem(QString());
        comboBox_Ano->setObjectName("comboBox_Ano");
        sizePolicy1.setHeightForWidth(comboBox_Ano->sizePolicy().hasHeightForWidth());
        comboBox_Ano->setSizePolicy(sizePolicy1);
        comboBox_Ano->setFont(font1);

        horizontalLayout_2->addWidget(comboBox_Ano);

        comboBox_Vendedor = new QComboBox(layoutWidget);
        comboBox_Vendedor->addItem(QString());
        comboBox_Vendedor->setObjectName("comboBox_Vendedor");
        sizePolicy1.setHeightForWidth(comboBox_Vendedor->sizePolicy().hasHeightForWidth());
        comboBox_Vendedor->setSizePolicy(sizePolicy1);
        comboBox_Vendedor->setFont(font1);

        horizontalLayout_2->addWidget(comboBox_Vendedor);

        pushButton_Buscar = new QPushButton(layoutWidget);
        pushButton_Buscar->setObjectName("pushButton_Buscar");
        sizePolicy.setHeightForWidth(pushButton_Buscar->sizePolicy().hasHeightForWidth());
        pushButton_Buscar->setSizePolicy(sizePolicy);
        pushButton_Buscar->setFont(font);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/imagens/lupa.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_Buscar->setIcon(icon4);
        pushButton_Buscar->setIconSize(QSize(30, 30));

        horizontalLayout_2->addWidget(pushButton_Buscar);

        label = new QLabel(DialogAreaDeVendas);
        label->setObjectName("label");
        label->setGeometry(QRect(900, 130, 321, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font2.setPointSize(18);
        font2.setBold(false);
        label->setFont(font2);
        tableWidget = new QTableWidget(DialogAreaDeVendas);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QFont font3;
        font3.setBold(false);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font3);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(80, 250, 1201, 381));
        QFont font4;
        font4.setBold(true);
        font4.setItalic(false);
        tableWidget->setFont(font4);
        tableWidget->horizontalHeader()->setDefaultSectionSize(200);
        label_3 = new QLabel(DialogAreaDeVendas);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(350, -40, 671, 261));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        label_3->setFont(font5);
        layoutWidget_2 = new QWidget(DialogAreaDeVendas);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(690, 640, 251, 41));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName("label_8");
        QFont font6;
        font6.setPointSize(14);
        font6.setBold(true);
        label_8->setFont(font6);

        horizontalLayout_3->addWidget(label_8);

        label_LucroTotal = new QLabel(layoutWidget_2);
        label_LucroTotal->setObjectName("label_LucroTotal");
        label_LucroTotal->setFont(font6);

        horizontalLayout_3->addWidget(label_LucroTotal);

        layoutWidget1 = new QWidget(DialogAreaDeVendas);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(420, 640, 251, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName("label_6");
        label_6->setFont(font6);

        horizontalLayout->addWidget(label_6);

        label_ValorTotal = new QLabel(layoutWidget1);
        label_ValorTotal->setObjectName("label_ValorTotal");
        label_ValorTotal->setFont(font6);

        horizontalLayout->addWidget(label_ValorTotal);


        retranslateUi(DialogAreaDeVendas);

        QMetaObject::connectSlotsByName(DialogAreaDeVendas);
    } // setupUi

    void retranslateUi(QDialog *DialogAreaDeVendas)
    {
        DialogAreaDeVendas->setWindowTitle(QCoreApplication::translate("DialogAreaDeVendas", "Dialog", nullptr));
        pushButtonVerResultados->setText(QCoreApplication::translate("DialogAreaDeVendas", "Ver Resultados", nullptr));
        pushButton_Adicionar->setText(QCoreApplication::translate("DialogAreaDeVendas", "Adicionar", nullptr));
        pushButtonAlterar->setText(QCoreApplication::translate("DialogAreaDeVendas", "Alterar", nullptr));
        pushButton_Excluir->setText(QCoreApplication::translate("DialogAreaDeVendas", "Excluir", nullptr));
        comboBox_Dia->setItemText(0, QCoreApplication::translate("DialogAreaDeVendas", "Dia", nullptr));

        comboBox_Mes->setItemText(0, QCoreApplication::translate("DialogAreaDeVendas", "M\303\252s", nullptr));

        comboBox_Ano->setItemText(0, QCoreApplication::translate("DialogAreaDeVendas", "Ano", nullptr));

        comboBox_Vendedor->setItemText(0, QCoreApplication::translate("DialogAreaDeVendas", "Vendedor", nullptr));

        pushButton_Buscar->setText(QCoreApplication::translate("DialogAreaDeVendas", "Buscar", nullptr));
        label->setText(QCoreApplication::translate("DialogAreaDeVendas", "<html><head/><body><p><span style=\" font-size:22pt;\">\303\201rea de Or\303\247amentos</span></p></body></html>", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("DialogAreaDeVendas", "C\303\263digo", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("DialogAreaDeVendas", "Cliente", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("DialogAreaDeVendas", "Valor", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("DialogAreaDeVendas", "Lucro", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("DialogAreaDeVendas", "Data", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("DialogAreaDeVendas", "Vendedor", nullptr));
#if QT_CONFIG(whatsthis)
        tableWidget->setWhatsThis(QCoreApplication::translate("DialogAreaDeVendas", "<html><head/><body><p><span style=\" font-weight:700;\"><br/></span></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_3->setText(QCoreApplication::translate("DialogAreaDeVendas", "<html><head/><body><p align=\"center\"><span style=\" font-size:100pt; font-weight:700; color:#0000ff;\">Art</span><span style=\" font-size:100pt; font-weight:700; color:#ff0000;\">vidros</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("DialogAreaDeVendas", "Lucro Total :", nullptr));
        label_LucroTotal->setText(QString());
        label_6->setText(QCoreApplication::translate("DialogAreaDeVendas", "Valor Total :", nullptr));
        label_ValorTotal->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogAreaDeVendas: public Ui_DialogAreaDeVendas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGAREADEVENDAS_H
