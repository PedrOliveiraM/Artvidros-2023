/********************************************************************************
** Form generated from reading UI file 'pdfarea.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PDFAREA_H
#define UI_PDFAREA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PDFarea
{
public:
    QLabel *label;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_name_2;
    QLineEdit *lineEditEndereco;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_name;
    QLineEdit *lineEditCliente;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_7;
    QLineEdit *lineEditData;
    QLabel *labelNomeOrcamento;
    QPushButton *pushButtonLimpar;
    QPushButton *pushButtonVoltar;
    QPushButton *pushButtonAdicionar;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_name_4;
    QLineEdit *lineEditTelefone;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_name_3;
    QLineEdit *lineEditCNPJ_CPF;

    void setupUi(QDialog *PDFarea)
    {
        if (PDFarea->objectName().isEmpty())
            PDFarea->setObjectName("PDFarea");
        PDFarea->resize(739, 596);
        label = new QLabel(PDFarea);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 10, 461, 231));
        QFont font;
        font.setBold(true);
        label->setFont(font);
        label->setPixmap(QPixmap(QString::fromUtf8(":/imagens/AberturaArtvidros.png")));
        label->setScaledContents(true);
        layoutWidget_2 = new QWidget(PDFarea);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(110, 390, 381, 36));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        layoutWidget_2->setFont(font1);
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_name_2 = new QLabel(layoutWidget_2);
        label_name_2->setObjectName("label_name_2");
        label_name_2->setFont(font1);

        horizontalLayout_4->addWidget(label_name_2);

        lineEditEndereco = new QLineEdit(layoutWidget_2);
        lineEditEndereco->setObjectName("lineEditEndereco");
        lineEditEndereco->setFont(font1);

        horizontalLayout_4->addWidget(lineEditEndereco);

        layoutWidget_3 = new QWidget(PDFarea);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(110, 237, 381, 36));
        layoutWidget_3->setFont(font1);
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_name = new QLabel(layoutWidget_3);
        label_name->setObjectName("label_name");
        label_name->setFont(font1);

        horizontalLayout_2->addWidget(label_name);

        lineEditCliente = new QLineEdit(layoutWidget_3);
        lineEditCliente->setObjectName("lineEditCliente");
        lineEditCliente->setFont(font1);

        horizontalLayout_2->addWidget(lineEditCliente);

        layoutWidget = new QWidget(PDFarea);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(510, 240, 151, 64));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        label_7->setFont(font2);

        verticalLayout->addWidget(label_7);

        lineEditData = new QLineEdit(layoutWidget);
        lineEditData->setObjectName("lineEditData");
        lineEditData->setFont(font1);

        verticalLayout->addWidget(lineEditData);

        labelNomeOrcamento = new QLabel(PDFarea);
        labelNomeOrcamento->setObjectName("labelNomeOrcamento");
        labelNomeOrcamento->setGeometry(QRect(300, 157, 191, 31));
        labelNomeOrcamento->setFont(font1);
        pushButtonLimpar = new QPushButton(PDFarea);
        pushButtonLimpar->setObjectName("pushButtonLimpar");
        pushButtonLimpar->setGeometry(QRect(310, 500, 121, 41));
        pushButtonLimpar->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/limpar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonLimpar->setIcon(icon);
        pushButtonVoltar = new QPushButton(PDFarea);
        pushButtonVoltar->setObjectName("pushButtonVoltar");
        pushButtonVoltar->setGeometry(QRect(440, 500, 121, 41));
        pushButtonVoltar->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagens/voltar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonVoltar->setIcon(icon1);
        pushButtonAdicionar = new QPushButton(PDFarea);
        pushButtonAdicionar->setObjectName("pushButtonAdicionar");
        pushButtonAdicionar->setGeometry(QRect(180, 500, 121, 41));
        pushButtonAdicionar->setFont(font);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imagens/salvar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAdicionar->setIcon(icon2);
        layoutWidget_4 = new QWidget(PDFarea);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(110, 340, 381, 36));
        layoutWidget_4->setFont(font1);
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_name_4 = new QLabel(layoutWidget_4);
        label_name_4->setObjectName("label_name_4");
        label_name_4->setFont(font1);

        horizontalLayout_5->addWidget(label_name_4);

        lineEditTelefone = new QLineEdit(layoutWidget_4);
        lineEditTelefone->setObjectName("lineEditTelefone");
        lineEditTelefone->setFont(font1);

        horizontalLayout_5->addWidget(lineEditTelefone);

        layoutWidget1 = new QWidget(PDFarea);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(110, 290, 324, 36));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_name_3 = new QLabel(layoutWidget1);
        label_name_3->setObjectName("label_name_3");
        label_name_3->setFont(font1);

        horizontalLayout->addWidget(label_name_3);

        lineEditCNPJ_CPF = new QLineEdit(layoutWidget1);
        lineEditCNPJ_CPF->setObjectName("lineEditCNPJ_CPF");
        lineEditCNPJ_CPF->setFont(font1);

        horizontalLayout->addWidget(lineEditCNPJ_CPF);

        QWidget::setTabOrder(lineEditCliente, lineEditCNPJ_CPF);
        QWidget::setTabOrder(lineEditCNPJ_CPF, lineEditTelefone);
        QWidget::setTabOrder(lineEditTelefone, lineEditEndereco);
        QWidget::setTabOrder(lineEditEndereco, lineEditData);
        QWidget::setTabOrder(lineEditData, pushButtonAdicionar);
        QWidget::setTabOrder(pushButtonAdicionar, pushButtonLimpar);
        QWidget::setTabOrder(pushButtonLimpar, pushButtonVoltar);

        retranslateUi(PDFarea);

        QMetaObject::connectSlotsByName(PDFarea);
    } // setupUi

    void retranslateUi(QDialog *PDFarea)
    {
        PDFarea->setWindowTitle(QCoreApplication::translate("PDFarea", "Dialog", nullptr));
        label->setText(QString());
        label_name_2->setText(QCoreApplication::translate("PDFarea", "Endere\303\247o", nullptr));
        label_name->setText(QCoreApplication::translate("PDFarea", "Cliente", nullptr));
        label_7->setText(QCoreApplication::translate("PDFarea", "<html><head/><body><p align=\"center\">Data</p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        lineEditData->setWhatsThis(QCoreApplication::translate("PDFarea", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        labelNomeOrcamento->setText(QString());
        pushButtonLimpar->setText(QCoreApplication::translate("PDFarea", " Limpar", nullptr));
        pushButtonVoltar->setText(QCoreApplication::translate("PDFarea", " Voltar", nullptr));
        pushButtonAdicionar->setText(QCoreApplication::translate("PDFarea", "Salvar", nullptr));
        label_name_4->setText(QCoreApplication::translate("PDFarea", "Telefone", nullptr));
        label_name_3->setText(QCoreApplication::translate("PDFarea", "CNPJ / CPF", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PDFarea: public Ui_PDFarea {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PDFAREA_H
