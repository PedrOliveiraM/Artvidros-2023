/********************************************************************************
** Form generated from reading UI file 'dialogareaorcamentos.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGAREAORCAMENTOS_H
#define UI_DIALOGAREAORCAMENTOS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialogareaorcamentos
{
public:
    QLabel *label_3;
    QTableWidget *tableWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonGerarPDF;
    QPushButton *pushButton_Adicionar;
    QPushButton *pushButton_Alterar;
    QPushButton *pushButton_Excluir;
    QPushButton *pushButtonApagarTODOS;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditPesquisa;
    QPushButton *pushButtonLimpar;
    QLabel *label;

    void setupUi(QDialog *Dialogareaorcamentos)
    {
        if (Dialogareaorcamentos->objectName().isEmpty())
            Dialogareaorcamentos->setObjectName("Dialogareaorcamentos");
        Dialogareaorcamentos->resize(1366, 768);
        label_3 = new QLabel(Dialogareaorcamentos);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(360, -30, 671, 261));
        QFont font;
        font.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        label_3->setFont(font);
        tableWidget = new QTableWidget(Dialogareaorcamentos);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QFont font1;
        font1.setBold(false);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font1);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(50, 250, 1251, 381));
        QFont font2;
        font2.setBold(true);
        font2.setItalic(false);
        tableWidget->setFont(font2);
        tableWidget->horizontalHeader()->setDefaultSectionSize(200);
        layoutWidget = new QWidget(Dialogareaorcamentos);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(410, 650, 621, 51));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonGerarPDF = new QPushButton(layoutWidget);
        pushButtonGerarPDF->setObjectName("pushButtonGerarPDF");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonGerarPDF->sizePolicy().hasHeightForWidth());
        pushButtonGerarPDF->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setBold(true);
        pushButtonGerarPDF->setFont(font3);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/ficheiro-pdf.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonGerarPDF->setIcon(icon);
        pushButtonGerarPDF->setIconSize(QSize(30, 30));

        horizontalLayout_2->addWidget(pushButtonGerarPDF);

        pushButton_Adicionar = new QPushButton(layoutWidget);
        pushButton_Adicionar->setObjectName("pushButton_Adicionar");
        sizePolicy.setHeightForWidth(pushButton_Adicionar->sizePolicy().hasHeightForWidth());
        pushButton_Adicionar->setSizePolicy(sizePolicy);
        pushButton_Adicionar->setFont(font3);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagens/botao-adicionar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Adicionar->setIcon(icon1);
        pushButton_Adicionar->setIconSize(QSize(30, 30));

        horizontalLayout_2->addWidget(pushButton_Adicionar);

        pushButton_Alterar = new QPushButton(layoutWidget);
        pushButton_Alterar->setObjectName("pushButton_Alterar");
        sizePolicy.setHeightForWidth(pushButton_Alterar->sizePolicy().hasHeightForWidth());
        pushButton_Alterar->setSizePolicy(sizePolicy);
        pushButton_Alterar->setFont(font3);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imagens/alterar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Alterar->setIcon(icon2);
        pushButton_Alterar->setIconSize(QSize(30, 30));

        horizontalLayout_2->addWidget(pushButton_Alterar);

        pushButton_Excluir = new QPushButton(layoutWidget);
        pushButton_Excluir->setObjectName("pushButton_Excluir");
        sizePolicy.setHeightForWidth(pushButton_Excluir->sizePolicy().hasHeightForWidth());
        pushButton_Excluir->setSizePolicy(sizePolicy);
        pushButton_Excluir->setFont(font3);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/imagens/excluir Normal.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Excluir->setIcon(icon3);
        pushButton_Excluir->setIconSize(QSize(30, 30));

        horizontalLayout_2->addWidget(pushButton_Excluir);

        pushButtonApagarTODOS = new QPushButton(layoutWidget);
        pushButtonApagarTODOS->setObjectName("pushButtonApagarTODOS");
        sizePolicy.setHeightForWidth(pushButtonApagarTODOS->sizePolicy().hasHeightForWidth());
        pushButtonApagarTODOS->setSizePolicy(sizePolicy);
        pushButtonApagarTODOS->setFont(font3);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/imagens/excluir.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonApagarTODOS->setIcon(icon4);
        pushButtonApagarTODOS->setIconSize(QSize(30, 30));

        horizontalLayout_2->addWidget(pushButtonApagarTODOS);

        layoutWidget_2 = new QWidget(Dialogareaorcamentos);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(330, 200, 741, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEditPesquisa = new QLineEdit(layoutWidget_2);
        lineEditPesquisa->setObjectName("lineEditPesquisa");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditPesquisa->sizePolicy().hasHeightForWidth());
        lineEditPesquisa->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(lineEditPesquisa);

        pushButtonLimpar = new QPushButton(layoutWidget_2);
        pushButtonLimpar->setObjectName("pushButtonLimpar");
        sizePolicy.setHeightForWidth(pushButtonLimpar->sizePolicy().hasHeightForWidth());
        pushButtonLimpar->setSizePolicy(sizePolicy);
        pushButtonLimpar->setFont(font3);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/imagens/limpar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonLimpar->setIcon(icon5);

        horizontalLayout->addWidget(pushButtonLimpar);

        label = new QLabel(Dialogareaorcamentos);
        label->setObjectName("label");
        label->setGeometry(QRect(900, 140, 321, 51));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font4.setPointSize(18);
        font4.setBold(false);
        label->setFont(font4);
        QWidget::setTabOrder(lineEditPesquisa, pushButtonLimpar);
        QWidget::setTabOrder(pushButtonLimpar, pushButtonGerarPDF);
        QWidget::setTabOrder(pushButtonGerarPDF, pushButton_Adicionar);
        QWidget::setTabOrder(pushButton_Adicionar, pushButton_Alterar);
        QWidget::setTabOrder(pushButton_Alterar, pushButton_Excluir);
        QWidget::setTabOrder(pushButton_Excluir, pushButtonApagarTODOS);
        QWidget::setTabOrder(pushButtonApagarTODOS, tableWidget);

        retranslateUi(Dialogareaorcamentos);

        QMetaObject::connectSlotsByName(Dialogareaorcamentos);
    } // setupUi

    void retranslateUi(QDialog *Dialogareaorcamentos)
    {
        Dialogareaorcamentos->setWindowTitle(QCoreApplication::translate("Dialogareaorcamentos", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("Dialogareaorcamentos", "<html><head/><body><p align=\"center\"><span style=\" font-size:100pt; font-weight:700; color:#0000ff;\">Art</span><span style=\" font-size:100pt; font-weight:700; color:#ff0000;\">vidros</span></p></body></html>", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Dialogareaorcamentos", "C\303\263digo", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Dialogareaorcamentos", "Cliente", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Dialogareaorcamentos", "Valor", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Dialogareaorcamentos", "Lucro", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Dialogareaorcamentos", "Data", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Dialogareaorcamentos", "Vendedor", nullptr));
#if QT_CONFIG(whatsthis)
        tableWidget->setWhatsThis(QCoreApplication::translate("Dialogareaorcamentos", "<html><head/><body><p><span style=\" font-weight:700;\"><br/></span></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButtonGerarPDF->setText(QCoreApplication::translate("Dialogareaorcamentos", "Gerar PDF", nullptr));
        pushButton_Adicionar->setText(QCoreApplication::translate("Dialogareaorcamentos", "Adicionar", nullptr));
        pushButton_Alterar->setText(QCoreApplication::translate("Dialogareaorcamentos", "Alterar", nullptr));
        pushButton_Excluir->setText(QCoreApplication::translate("Dialogareaorcamentos", "Excluir", nullptr));
        pushButtonApagarTODOS->setText(QCoreApplication::translate("Dialogareaorcamentos", "Apagar Todos", nullptr));
        pushButtonLimpar->setText(QCoreApplication::translate("Dialogareaorcamentos", "Limpar", nullptr));
        label->setText(QCoreApplication::translate("Dialogareaorcamentos", "<html><head/><body><p><span style=\" font-size:22pt;\">\303\201rea de Or\303\247amentos</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialogareaorcamentos: public Ui_Dialogareaorcamentos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGAREAORCAMENTOS_H
