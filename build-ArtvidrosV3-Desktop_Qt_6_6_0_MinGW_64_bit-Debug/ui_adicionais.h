/********************************************************************************
** Form generated from reading UI file 'adicionais.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADICIONAIS_H
#define UI_ADICIONAIS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Adicionais
{
public:
    QLabel *label;
    QLabel *label_3;
    QTableWidget *tableWidget;
    QLabel *label_2;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelAltura;
    QLineEdit *lineEditAltura;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QLabel *labelLargura;
    QLineEdit *lineEditLargura;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelVidros;
    QComboBox *comboBoxVidros;
    QPushButton *pushButtonADDvidro;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelLargura_2;
    QLineEdit *lineEditComprimento;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_6;
    QLabel *labelLargura_4;
    QComboBox *comboBoxFechadura;
    QLabel *label_6;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout_8;
    QLabel *labelLargura_6;
    QComboBox *comboBoxTrinco;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelpushButtonADDaluminiosoBox *comboBoxAluminio;
    QPushButton *pushButtonADDvidro_2;
    QWidget *layoutWidget_8;
    QVBoxLayout *verticalLayout_11;
    QLabel *labelLargura_9;
    QComboBox *comboBoxKit;
    QFrame *line_4;
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout_7;
    QLabel *labelLargura_5;
    QComboBox *comboBoxPuxador;
    QWidget *layoutWidget_9;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *spinBox_fechadura;
    QPushButton *pushButtonADDfechadura;
    QWidget *layoutWidget_10;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *spinBox_puxador;
    QPushButton *pushButtonADDpuxador;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBox_kit;
    QPushButton *pushButtonADDkit;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *spinBox_trinco;
    QPushButton *pushButtonADDtrinco;
    QSpinBox *spinBoxVidro;
    QSpinBox *spinBox_Aluminio;
    QFrame *line_pushButtonIncluirNoOrcamentoshButton *pushButton;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_price;
    QLabel *labelLargura_7;
    QLabel *label_8;
    QLabel *label_profit;

    void setupUi(QDialog *Adicionais)
    {
        if (Adicionais->objectName().isEmpty())
            Adicionais->setObjectName("Adicionais");
        Adicionais->resize(1366, 768);
        label = new QLabel(Adicionais);
        label->setObjectName("label");
        label->setGeometry(QRect(720, 120, 281, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font.setPointSize(20);
        font.setBold(false);
        label->setFont(font);
        label_3 = new QLabel(Adicionais);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(320, 0, 631, 161));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font1.setPointSize(12);
        font1.setBold(true);
        label_3->setFont(font1);
        tableWidget = new QTableWidget(Adicionais);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(750, 270, 601, 331));
        label_2 = new QLabel(Adicionais);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(960, 210, 201, 31));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setUnderline(true);
        label_2->setFont(font2);
        line = new QFrame(Adicionais);
        line->setObjectName("line");
        line->setGeometry(QRect(730, 190, 20, 501));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(Adicionais);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(390, 190, 20, 501));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_4 = new QLabel(Adicionais);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(150, 500, 111, 31));
        label_4->setFont(font2);
        label_5 = new QLabel(Adicionais);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(150, 210, 111, 31));
        label_5->setFont(font2);
        layoutWidget = new QWidget(Adicionais);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(210, 270, 131, 71));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelAltura = new QLabel(layoutWidget);
        labelAltura->setObjectName("labelAltura");
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        labelAltura->setFont(font3);

        verticalLayout_2->addWidget(labelAltura);

        lineEditAltura = new QLineEdit(layoutWidget);
        lineEditAltura->setObjectName("lineEditAltura");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditAltura->sizePolicy().hasHeightForWidth());
        lineEditAltura->setSizePolicy(sizePolicy);
        QFont font4;
        font4.setPointSize(11);
        font4.setBold(true);
        lineEditAltura->setFont(font4);

        verticalLayout_2->addWidget(lineEditAltura);

        layoutWidget_2 = new QWidget(Adicionais);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(50, 270, 131, 71));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelLargura = new QLabel(layoutWidget_2);
        labelLargura->setObjectName("labelLargura");
        labelLargura->setFont(font3);

        verticalLayout->addWidget(labelLargura);

        lineEditLargura = new QLineEdit(layoutWidget_2);
        lineEditLargura->setObjectName("lineEditLargura");
        sizePolicy.setHeightForWidth(lineEditLargura->sizePolicy().hasHeightForWidth());
        lineEditLargura->setSizePolicy(sizePolicy);
        lineEditLargura->setFont(font4);

        verticalLayout->addWidget(lineEditLargura);

        layoutWidget_3 = new QWidget(Adicionais);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(50, 360, 291, 71));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelVidros = new QLabel(layoutWidget_3);
        labelVidros->setObjectName("labelVidros");
        labelVidros->setFont(font3);

        verticalLayout_3->addWidget(labelVidros);

        comboBoxVidros = new QComboBox(layoutWidget_3);
        comboBoxVidros->addItem(QString());
        comboBoxVidros->setObjectName("comboBoxVidros");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBoxVidros->sizePolicy().hasHeightForWidth());
        comboBoxVidros->setSizePolicy(sizePolicy1);
        comboBoxVidros->setFont(font4);

        verticalLayout_3->addWidget(comboBoxVidros);

        pushButtonADDvidro = new QPushButton(Adicionais);
        pushButtonADDvidro->setObjectName("pushButtonADDvidro");
        pushButtonADDvidro->setGeometry(QRect(140, 450, 151, 41));
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(true);
        pushButtonADDvidro->setFont(font5);
        layoutWidget_4 = new QWidget(Adicionais);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(20, 550, 138, 71));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        labelLargura_2 = new QLabel(layoutWidget_4);
        labelLargura_2->setObjectName("labelLargura_2");
        labelLargura_2->setFont(font3);

        verticalLayout_4->addWidget(labelLargura_2);

        lineEditComprimento = new QLineEdit(layoutWidget_4);
        lineEditComprimento->setObjectName("lineEditComprimento");
        sizePolicy.setHeightForWidth(lineEditComprimento->sizePolicy().hasHeightForWidth());
        lineEditComprimento->setSizePolicy(sizePolicy);
        lineEditComprimento->setFont(font4);

        verticalLayout_4->addWidget(lineEditComprimento);

        layoutWidget_5 = new QWidget(Adicionais);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(420, 370, 211, 71));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        labelLargura_4 = new QLabel(layoutWidget_5);
        labelLargura_4->setObjectName("labelLargura_4");
        labelLargura_4->setFont(font3);

        verticalLayout_6->addWidget(labelLargura_4);

        comboBoxFechadura = new QComboBox(layoutWidget_5);
        comboBoxFechadura->addItem(QString());
        comboBoxFechadura->setObjectName("comboBoxFechadura");
        sizePolicy1.setHeightForWidth(comboBoxFechadura->sizePolicy().hasHeightForWidth());
        comboBoxFechadura->setSizePolicy(sizePolicy1);
        comboBoxFechadura->setFont(font4);

        verticalLayout_6->addWidget(comboBoxFechadura);

        label_6 = new QLabel(Adicionais);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(540, 210, 71, 31));
        label_6->setFont(font2);
        layoutWidget_7 = new QWidget(Adicionais);
        layoutWidget_7->setObjectName("layoutWidget_7");
        layoutWidget_7->setGeometry(QRect(420, 570, 211, 71));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_7);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        labelLargura_6 = new QLabel(layoutWidget_7);
        labelLargura_6->setObjectName("labelLargura_6");
        labelLargura_6->setFont(font3);

        verticalLayout_8->addWidget(labelLargura_6);

        comboBoxTrinco = new QComboBox(layoutWidget_7);
        comboBoxTrinco->addItem(QString());
        comboBoxTrinco->setObjectName("comboBoxTrinco");
        sizePolicy1.setHeightForWidth(comboBoxTrinco->sizePolicy().hasHeightForWidth());
        comboBoxTrinco->setSizePolicy(sizePolicy1);
        comboBoxTrinco->setFont(font4);

        verticalLayout_8->addWidget(comboBoxTrinco);

        layoutWidget1 = new QWidget(Adicionais);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(170, 550, 211, 71));
        verticalLayout_5 = new QVBoxLayout(layoutWidget1);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        labelLargura_3 = new QLabel(layoutWidget1);
        labelLargura_3->setObjectName("labelLargura_3");
        labelLargura_3->setFont(font3);

        verticalLayout_5->addWidget(labelLargura_3);

        comboBoxAluminio = new QComboBox(layoutWidget1);
        comboBoxAluminio->addItem(QString());
        comboBoxAluminio->setObjectName("comboBoxAluminio");
        sizePolicy1.setHeightForWidth(comboBoxAluminio->sizePolicy().hasHeightForWidth());
        comboBoxAluminio->setSizePolicy(sizePolicy1);
        comboBoxAluminio->setFont(font4);

        pushButtonADDaluminiosdWidget(comboBoxAluminio);

       puspushButtonADDaluminios = new QPushButton(Adicionais);
        pushButtonADDaluminios->setObjectName("pushButtonADDvidro_2");
        pushButtonADDvidro_2->setGeometry(QRect(150, 640, 151, 41));
        pushButtonADDvidro_2->setFont(font5);
        layoutWidget_8 = new QWidget(Adicionais);
        layoutWidget_8->setObjectName("layoutWidget_8");
        layoutWidget_8->setGeometry(QRect(420, 270, 211, 71));
        verticalLayout_11 = new QVBoxLayout(layoutWidget_8);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        labelLargura_9 = new QLabel(layoutWidget_8);
        labelLargura_9->setObjectName("labelLargura_9");
        labelLargura_9->setFont(font3);

        verticalLayout_11->addWidget(labelLargura_9);

        comboBoxKit = new QComboBox(layoutWidget_8);
        comboBoxKit->addItem(QString());
        comboBoxKit->setObjectName("comboBoxKit");
        sizePolicy1.setHeightForWidth(comboBoxKit->sizePolicy().hasHeightForWidth());
        comboBoxKit->setSizePolicy(sizePolicy1);
        comboBoxKit->setFont(font4);

        verticalLayout_11->addWidget(comboBoxKit);

        line_4 = new QFrame(Adicionais);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(-10, 230, 1401, 41));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        layoutWidget_6 = new QWidget(Adicionais);
        layoutWidget_6->setObjectName("layoutWidget_6");
        layoutWidget_6->setGeometry(QRect(420, 470, 211, 71));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_6);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        labelLargura_5 = new QLabel(layoutWidget_6);
        labelLargura_5->setObjectName("labelLargura_5");
        labelLargura_5->setFont(font3);

        verticalLayout_7->addWidget(labelLargura_5);

        comboBoxPuxador = new QComboBox(layoutWidget_6);
        comboBoxPuxador->addItem(QString());
        comboBoxPuxador->setObjectName("comboBoxPuxador");
        sizePolicy1.setHeightForWidth(comboBoxPuxador->sizePolicy().hasHeightForWidth());
        comboBoxPuxador->setSizePolicy(sizePolicy1);
        comboBoxPuxador->setFont(font4);

        verticalLayout_7->addWidget(comboBoxPuxador);

        layoutWidget_9 = new QWidget(Adicionais);
        layoutWidget_9->setObjectName("layoutWidget_9");
        layoutWidget_9->setGeometry(QRect(640, 410, 81, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_9);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        spinBox_fechadura = new QSpinBox(layoutWidget_9);
        spinBox_fechadura->setObjectName("spinBox_fechadura");
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(spinBox_fechadura->sizePolicy().hasHeightForWidth());
        spinBox_fechadura->setSizePolicy(sizePolicy2);
        QFont font6;
        font6.setPointSize(10);
        font6.setBold(true);
        spinBox_fechadura->setFont(font6);

        horizontalLayout_2->addWidget(spinBox_fechadura);

        pushButtonADDfechadura = new QPushButton(layoutWidget_9);
        pushButtonADDfechadura->setObjectName("pushButtonADDfechadura");
        sizePolicy2.setHeightForWidth(pushButtonADDfechadura->sizePolicy().hasHeightForWidth());
        pushButtonADDfechadura->setSizePolicy(sizePolicy2);
        pushButtonADDfechadura->setFont(font5);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/adicionar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonADDfechadura->setIcon(icon);
        pushButtonADDfechadura->setIconSize(QSize(14, 14));

        horizontalLayout_2->addWidget(pushButtonADDfechadura);

        layoutWidget_10 = new QWidget(Adicionais);
        layoutWidget_10->setObjectName("layoutWidget_10");
        layoutWidget_10->setGeometry(QRect(640, 510, 81, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_10);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        spinBox_puxador = new QSpinBox(layoutWidget_10);
        spinBox_puxador->setObjectName("spinBox_puxador");
        sizePolicy2.setHeightForWidth(spinBox_puxador->sizePolicy().hasHeightForWidth());
        spinBox_puxador->setSizePolicy(sizePolicy2);
        spinBox_puxador->setFont(font6);

        horizontalLayout_3->addWidget(spinBox_puxador);

        pushButtonADDpuxador = new QPushButton(layoutWidget_10);
        pushButtonADDpuxador->setObjectName("pushButtonADDpuxador");
        sizePolicy2.setHeightForWidth(pushButtonADDpuxador->sizePolicy().hasHeightForWidth());
        pushButtonADDpuxador->setSizePolicy(sizePolicy2);
        pushButtonADDpuxador->setFont(font5);
        pushButtonADDpuxador->setIcon(icon);
        pushButtonADDpuxador->setIconSize(QSize(14, 14));

        horizontalLayout_3->addWidget(pushButtonADDpuxador);

        layoutWidget2 = new QWidget(Adicionais);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(640, 310, 81, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        spinBox_kit = new QSpinBox(layoutWidget2);
        spinBox_kit->setObjectName("spinBox_kit");
        sizePolicy2.setHeightForWidth(spinBox_kit->sizePolicy().hasHeightForWidth());
        spinBox_kit->setSizePolicy(sizePolicy2);
        spinBox_kit->setFont(font6);

        horizontalLayout->addWidget(spinBox_kit);

        pushButtonADDkit = new QPushButton(layoutWidget2);
        pushButtonADDkit->setObjectName("pushButtonADDkit");
        sizePolicy2.setHeightForWidth(pushButtonADDkit->sizePolicy().hasHeightForWidth());
        pushButtonADDkit->setSizePolicy(sizePolicy2);
        pushButtonADDkit->setFont(font5);
        pushButtonADDkit->setIcon(icon);
        pushButtonADDkit->setIconSize(QSize(14, 14));

        horizontalLayout->addWidget(pushButtonADDkit);

        layoutWidget3 = new QWidget(Adicionais);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(640, 610, 81, 31));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        spinBox_trinco = new QSpinBox(layoutWidget3);
        spinBox_trinco->setObjectName("spinBox_trinco");
        sizePolicy2.setHeightForWidth(spinBox_trinco->sizePolicy().hasHeightForWidth());
        spinBox_trinco->setSizePolicy(sizePolicy2);
        spinBox_trinco->setFont(font6);

        horizontalLayout_4->addWidget(spinBox_trinco);

        pushButtonADDtrinco = new QPushButton(layoutWidget3);
        pushButtonADDtrinco->setObjectName("pushButtonADDtrinco");
        sizePolicy2.setHeightForWidth(pushButtonADDtrinco->sizePolicy().hasHeightForWidth());
        pushButtonADDtrinco->setSizePolicy(sizePolicy2);
        pushButtonADDtrinco->setFont(font5);
        pushButtonADDtrinco->setIcon(icon);
        pushButtonADDtrinco->setIconSize(QSize(14, 14));

        horizontalLayout_4->addWidget(pushButtonADDtrinco);

        spinBoxVidro = new QSpinBox(Adicionais);
        spinBoxVidro->setObjectName("spinBoxVidro");
        spinBoxVidro->setGeometry(QRect(96, 450, 41, 41));
        sizePolicy2.setHeightForWidth(spinBoxVidro->sizePolicy().hasHeightForWidth());
        spinBoxVidro->setSizePolicy(sizePolicy2);
        spinBoxVidro->setFont(font6);
        spinBox_Aluminio = new QSpinBox(Adicionais);
        spinBox_Aluminio->setObjectName("spinBox_Aluminio");
        spinBox_Aluminio->setGeometry(QRect(100, 640, 41, 41));
        sizePolicy2.setHeightForWidth(spinBox_Aluminio->sizePolicy().hasHeightForWidth());
        spinBox_Aluminio->setSizePolicy(sizePolicy2);
        spinBox_Aluminio->setFont(font6);
        line_5 = new QFrame(Adicionais);
        line_5->setObjectName("line_5");
        line_5->setGeometry(QRect(0, 670, 1401, 41));
        line_5->setFrameShape(QFrame::HLine);
        pushButtonIncluirNoOrcamentotFrameShadow(QFrame::Sunken);
        pushButtonIncluirNoOrcamento = new QPushButton(Adicionais);
        pushButtonIncluirNoOrcamento->setObjectName("pushButton");
        pushButtonIncluirNoOrcamento->setGeometry(QRect(530, 700, 291, 51));
        pushButton->setFont(font3);
        gridLayoutWidget = new QWidget(Adicionais);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(950, 600, 191, 91));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_price = new QLabel(gridLayoutWidget);
        label_price->setObjectName("label_price");
        QFont font7;
        font7.setPointSize(16);
        font7.setBold(true);
        label_price->setFont(font7);

        gridLayout->addWidget(label_price, 0, 1, 1, 1);

        labelLargura_7 = new QLabel(gridLayoutWidget);
        labelLargura_7->setObjectName("labelLargura_7");
        labelLargura_7->setFont(font3);

        gridLayout->addWidget(labelLargura_7, 0, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName("label_8");
        label_8->setFont(font7);

        gridLayout->addWidget(label_8, 1, 0, 1, 1);

        label_profit = new QLabel(gridLayoutWidget);
        label_profit->setObjectName("label_profit");
        label_profit->setFont(font7);

        gridLayout->addWidget(label_profit, 1, 1, 1, 1);

        QWidget::setTabOrder(lineEditLargura, lineEditAltura);
        QWidget::setTabOrder(lineEditAltura, comboBoxVidros);
        QWidget::setTabOrder(comboBoxVidros, spinBoxVidro);
        QWidget::setTabOrder(spinBoxVidro, pushButtonADDvidro);
        QWidget::setTabOrder(pushButtonADDvidro, lineEditComprimento);
        QWidget::setTabOrder(lineEditComprimentpushButtonADDaluminios;
        QWidget::setTabOrder(pushButtonADDaluminiosinBox_Aluminio);
        QWidget::setTabOrder(spinBox_Aluminio, pushButtonADDvidro_2);
        QWidget::setTabOrder(pushButtonADDvidro_2, comboBoxKit);
        QWidget::setTabOrder(comboBoxKit, spinBox_kit);
        QWidget::setTabOrder(spinBox_kit, pushButtonADDkit);
        QWidget::setTabOrder(pushButtonADDkit, comboBoxFechadura);
        QWidget::setTabOrder(comboBoxFechadura, spinBox_fechadura);
        QWidget::setTabOrder(spinBox_fechadura, pushButtonADDfechadura);
        QWidget::setTabOrder(pushButtonADDfechadura, comboBoxPuxador);
        QWidget::setTabOrder(comboBoxPuxador, spinBox_puxador);
        QWidget::setTabOrder(spinBox_puxador, pushButtonADDpuxador);
        QWidget::setTabOrder(pushButtonADDpuxador, comboBoxTrinco);
        QWidget::setTabOrder(comboBoxTrinco, spinBox_trinco);
        QWidget::setTabOrder(spinBox_trinco, pushButtonADDtrinco);
        QWidget::setTabOrder(pushButtonADDpushButtonIncluirNoOrcamentobleWidget);
        QWidget::setTabOrder(tableWidget, pushButton);

        retranslateUi(Adicionais);

        QMetaObject::connectSlotsByName(Adicionais);
    } // setupUi

    void retranslateUi(QDialog *Adicionais)
    {
        Adicionais->setWindowTitle(QCoreApplication::translate("Adicionais", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Adicionais", "\303\201rea de Adicionais", nullptr));
        label_3->setText(QCoreApplication::translate("Adicionais", "<html><head/><body><p align=\"center\"><span style=\" font-size:82pt; font-weight:700; color:#0000ff;\">Art</span><span style=\" font-size:82pt; font-weight:700; color:#ff0000;\">vidros</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Adicionais", "<html><head/><body><p><span style=\" text-decoration:none;\">Resumo de Adi\303\247\303\265es</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Adicionais", "<html><head/><body><p><span style=\" text-decoration:none;\">Alum\303\255nios</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("Adicionais", "<html><head/><body><p><span style=\" text-decoration:none;\">Vidro Fixo</span></p></body></html>", nullptr));
        labelAltura->setText(QCoreApplication::translate("Adicionais", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Altura</span></p></body></html>", nullptr));
        labelLargura->setText(QCoreApplication::translate("Adicionais", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Largura</span></p></body></html>", nullptr));
        labelVidros->setText(QCoreApplication::translate("Adicionais", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Vidros</span></p></body></html>", nullptr));
        comboBoxVidros->setItemText(0, QString());

        pushButtonADDvidro->setText(QCoreApplication::translate("Adicionais", "Adicionar", nullptr));
        labelLargura_2->setText(QCoreApplication::translate("Adicionais", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Comprimento</span></p></body></html>", nullptr));
        labelLargura_4->setText(QCoreApplication::translate("Adicionais", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Fechadura</span></p></body></html>", nullptr));
        comboBoxFechadura->setItemText(0, QString());

        label_6->setText(QCoreApplication::translate("Adicionais", "<html><head/><body><p><span style=\" text-decoration:none;\">Outros</span></p></body></html>", nullptr));
        labelLargura_6->setText(QCoreApplication::translate("Adicionais", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Trinco</span></p></body></html>", nullptr));
        comboBoxTrinco->setItemText(0, QString());

        labelLargura_3->setText(QCoreApplication::translate("Adicionais", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Modelo</span></p></body></html>", nullptr));
        pushButtonADDaluminiostItemText(0, QString());

        pushButtonADDvidro_2->setText(QCoreApplication::translate("Adicionais", "Adicionar", nullptr));
        labelLargura_9->setText(QCoreApplication::translate("Adicionais", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Kit</span></p></body></html>", nullptr));
        comboBoxKit->setItemText(0, QString());

        labelLargura_5->setText(QCoreApplication::translate("Adicionais", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Puxador</span></p></body></html>", nullptr));
        comboBoxPuxador->setItemText(0, QString());

        pushButtonADDfechadura->setText(QString());
        pushButtonADDpuxador->setText(QString());
        pushButtonADDkit->setText(QString());
        pushButtonIncluirNoOrcamentoADDtrinco->setText(QString());
        pushButton->setText(QCoreApplication::translate("Adicionais", "Incluir no Or\303\247amento", nullptr));
#if QT_CONFIG(whatsthis)
        label_price->setWhatsThis(QCoreApplication::translate("Adicionais", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_price->setText(QCoreApplication::translate("Adicionais", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        labelLargura_7->setText(QCoreApplication::translate("Adicionais", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Valor:</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("Adicionais", "<html><head/><body><p align=\"center\">Lucro:</p></body></html>", nullptr));
        label_profit->setText(QCoreApplication::translate("Adicionais", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Adicionais: public Ui_Adicionais {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADICIONAIS_H
