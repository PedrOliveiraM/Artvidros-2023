/********************************************************************************
** Form generated from reading UI file 'adicionaisref.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADICIONAISREF_H
#define UI_ADICIONAISREF_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
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

class Ui_AdicionaisRef
{
public:
    QFrame *line_5;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout_8;
    QLabel *labelLargura_6;
    QComboBox *comboBoxTrinco;
    QFrame *line_4;
    QLabel *label;
    QLabel *label_4;
    QTableWidget *tableWidget;
    QFrame *line_2;
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout_7;
    QLabel *labelLargura_5;
    QComboBox *comboBoxPuxador;
    QFrame *line;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_9;
    QSpinBox *spinBox_kit;
    QPushButton *pushButtonADDkit;
    QPushButton *pushButtonIncluirNoOrcamentoRef;
    QWidget *layoutWidget_10;
    QVBoxLayout *verticalLayout_14;
    QSpinBox *spinBox_puxador;
    QPushButton *pushButtonADDpuxador;
    QLabel *label_6;
    QWidget *layoutWidget_8;
    QVBoxLayout *verticalLayout_11;
    QLabel *labelLargura_9;
    QComboBox *comboBoxKit;
    QLabel *label_2;
    QWidget *layoutWidget_12;
    QVBoxLayout *verticalLayout_6;
    QLabel *labelLargura_4;
    QComboBox *comboBoxFechadura;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_15;
    QSpinBox *spinBox_trinco;
    QPushButton *pushButtonADDtrinco;
    QWidget *layoutWidget_9;
    QVBoxLayout *verticalLayout_13;
    QSpinBox *spinBox_fechadura;
    QPushButton *pushButtonADDfechadura;
    QLabel *label_3;
    QLabel *label_5;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelLargura_7;
    QLabel *label_price;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QLabel *label_profit;
    QWidget *layoutWidget_14;
    QVBoxLayout *verticalLayout_12;
    QLabel *labelLargura_11;
    QComboBox *comboBoxRodana;
    QWidget *layoutWidget_16;
    QVBoxLayout *verticalLayout_16;
    QSpinBox *spinBox_Rodana;
    QPushButton *pushButtonADDrodana;
    QPushButton *pushButtonAreaDePrecos;
    QWidget *widget;
    QVBoxLayout *verticalLayout_17;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelLargura_3;
    QComboBox *comboBoxAluminio;
    QPushButton *pushButtonTodosOsAluminios;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_18;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelLargura_2;
    QLineEdit *lineEditComprimento;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBox_Aluminio;
    QPushButton *pushButtonADDaluminios;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *labelLargura;
    QLineEdit *lineEditLargura;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelAltura;
    QLineEdit *lineEditAltura;
    QWidget *widget3;
    QVBoxLayout *verticalLayout_19;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelVidros;
    QComboBox *comboBoxVidros;
    QVBoxLayout *verticalLayout_10;
    QLabel *labelLargura_10;
    QComboBox *comboBoxPelicula;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *spinBoxVidro;
    QPushButton *pushButtonADDvidro;

    void setupUi(QDialog *AdicionaisRef)
    {
        if (AdicionaisRef->objectName().isEmpty())
            AdicionaisRef->setObjectName("AdicionaisRef");
        AdicionaisRef->resize(1366, 768);
        line_5 = new QFrame(AdicionaisRef);
        line_5->setObjectName("line_5");
        line_5->setGeometry(QRect(-10, 630, 1431, 41));
        line_5->setFrameShape(QFrame::Shape::HLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);
        layoutWidget_7 = new QWidget(AdicionaisRef);
        layoutWidget_7->setObjectName("layoutWidget_7");
        layoutWidget_7->setGeometry(QRect(440, 470, 211, 77));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_7);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        labelLargura_6 = new QLabel(layoutWidget_7);
        labelLargura_6->setObjectName("labelLargura_6");
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        labelLargura_6->setFont(font);

        verticalLayout_8->addWidget(labelLargura_6);

        comboBoxTrinco = new QComboBox(layoutWidget_7);
        comboBoxTrinco->addItem(QString());
        comboBoxTrinco->setObjectName("comboBoxTrinco");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBoxTrinco->sizePolicy().hasHeightForWidth());
        comboBoxTrinco->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        comboBoxTrinco->setFont(font1);

        verticalLayout_8->addWidget(comboBoxTrinco);

        line_4 = new QFrame(AdicionaisRef);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(0, 160, 1401, 41));
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);
        label = new QLabel(AdicionaisRef);
        label->setObjectName("label");
        label->setGeometry(QRect(660, 70, 341, 61));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font2.setPointSize(20);
        font2.setBold(false);
        label->setFont(font2);
        label_4 = new QLabel(AdicionaisRef);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(150, 480, 141, 31));
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setUnderline(true);
        label_4->setFont(font3);
        tableWidget = new QTableWidget(AdicionaisRef);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(770, 230, 591, 331));
        QFont font4;
        font4.setPointSize(10);
        tableWidget->setFont(font4);
        line_2 = new QFrame(AdicionaisRef);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(420, 120, 20, 531));
        line_2->setFrameShape(QFrame::Shape::VLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        layoutWidget_6 = new QWidget(AdicionaisRef);
        layoutWidget_6->setObjectName("layoutWidget_6");
        layoutWidget_6->setGeometry(QRect(440, 380, 211, 77));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_6);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        labelLargura_5 = new QLabel(layoutWidget_6);
        labelLargura_5->setObjectName("labelLargura_5");
        labelLargura_5->setFont(font);

        verticalLayout_7->addWidget(labelLargura_5);

        comboBoxPuxador = new QComboBox(layoutWidget_6);
        comboBoxPuxador->addItem(QString());
        comboBoxPuxador->setObjectName("comboBoxPuxador");
        sizePolicy.setHeightForWidth(comboBoxPuxador->sizePolicy().hasHeightForWidth());
        comboBoxPuxador->setSizePolicy(sizePolicy);
        comboBoxPuxador->setFont(font1);

        verticalLayout_7->addWidget(comboBoxPuxador);

        line = new QFrame(AdicionaisRef);
        line->setObjectName("line");
        line->setGeometry(QRect(750, 120, 20, 531));
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        layoutWidget_5 = new QWidget(AdicionaisRef);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(660, 190, 91, 91));
        verticalLayout_9 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        spinBox_kit = new QSpinBox(layoutWidget_5);
        spinBox_kit->setObjectName("spinBox_kit");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinBox_kit->sizePolicy().hasHeightForWidth());
        spinBox_kit->setSizePolicy(sizePolicy1);
        QFont font5;
        font5.setPointSize(10);
        font5.setBold(true);
        spinBox_kit->setFont(font5);

        verticalLayout_9->addWidget(spinBox_kit);

        pushButtonADDkit = new QPushButton(layoutWidget_5);
        pushButtonADDkit->setObjectName("pushButtonADDkit");
        sizePolicy1.setHeightForWidth(pushButtonADDkit->sizePolicy().hasHeightForWidth());
        pushButtonADDkit->setSizePolicy(sizePolicy1);
        QFont font6;
        font6.setPointSize(12);
        font6.setBold(true);
        pushButtonADDkit->setFont(font6);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/adicionar.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonADDkit->setIcon(icon);
        pushButtonADDkit->setIconSize(QSize(14, 14));

        verticalLayout_9->addWidget(pushButtonADDkit);

        pushButtonIncluirNoOrcamentoRef = new QPushButton(AdicionaisRef);
        pushButtonIncluirNoOrcamentoRef->setObjectName("pushButtonIncluirNoOrcamentoRef");
        pushButtonIncluirNoOrcamentoRef->setGeometry(QRect(540, 660, 291, 51));
        pushButtonIncluirNoOrcamentoRef->setFont(font);
        layoutWidget_10 = new QWidget(AdicionaisRef);
        layoutWidget_10->setObjectName("layoutWidget_10");
        layoutWidget_10->setGeometry(QRect(660, 380, 91, 81));
        verticalLayout_14 = new QVBoxLayout(layoutWidget_10);
        verticalLayout_14->setObjectName("verticalLayout_14");
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        spinBox_puxador = new QSpinBox(layoutWidget_10);
        spinBox_puxador->setObjectName("spinBox_puxador");
        sizePolicy1.setHeightForWidth(spinBox_puxador->sizePolicy().hasHeightForWidth());
        spinBox_puxador->setSizePolicy(sizePolicy1);
        spinBox_puxador->setFont(font5);

        verticalLayout_14->addWidget(spinBox_puxador);

        pushButtonADDpuxador = new QPushButton(layoutWidget_10);
        pushButtonADDpuxador->setObjectName("pushButtonADDpuxador");
        sizePolicy1.setHeightForWidth(pushButtonADDpuxador->sizePolicy().hasHeightForWidth());
        pushButtonADDpuxador->setSizePolicy(sizePolicy1);
        pushButtonADDpuxador->setFont(font6);
        pushButtonADDpuxador->setIcon(icon);
        pushButtonADDpuxador->setIconSize(QSize(14, 14));

        verticalLayout_14->addWidget(pushButtonADDpuxador);

        label_6 = new QLabel(AdicionaisRef);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(550, 140, 71, 31));
        label_6->setFont(font3);
        layoutWidget_8 = new QWidget(AdicionaisRef);
        layoutWidget_8->setObjectName("layoutWidget_8");
        layoutWidget_8->setGeometry(QRect(440, 190, 211, 87));
        verticalLayout_11 = new QVBoxLayout(layoutWidget_8);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        labelLargura_9 = new QLabel(layoutWidget_8);
        labelLargura_9->setObjectName("labelLargura_9");
        labelLargura_9->setFont(font);

        verticalLayout_11->addWidget(labelLargura_9);

        comboBoxKit = new QComboBox(layoutWidget_8);
        comboBoxKit->addItem(QString());
        comboBoxKit->setObjectName("comboBoxKit");
        sizePolicy.setHeightForWidth(comboBoxKit->sizePolicy().hasHeightForWidth());
        comboBoxKit->setSizePolicy(sizePolicy);
        comboBoxKit->setFont(font1);

        verticalLayout_11->addWidget(comboBoxKit);

        label_2 = new QLabel(AdicionaisRef);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(970, 140, 261, 31));
        label_2->setFont(font3);
        layoutWidget_12 = new QWidget(AdicionaisRef);
        layoutWidget_12->setObjectName("layoutWidget_12");
        layoutWidget_12->setGeometry(QRect(440, 290, 211, 77));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_12);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        labelLargura_4 = new QLabel(layoutWidget_12);
        labelLargura_4->setObjectName("labelLargura_4");
        labelLargura_4->setFont(font);

        verticalLayout_6->addWidget(labelLargura_4);

        comboBoxFechadura = new QComboBox(layoutWidget_12);
        comboBoxFechadura->addItem(QString());
        comboBoxFechadura->setObjectName("comboBoxFechadura");
        sizePolicy.setHeightForWidth(comboBoxFechadura->sizePolicy().hasHeightForWidth());
        comboBoxFechadura->setSizePolicy(sizePolicy);
        comboBoxFechadura->setFont(font1);

        verticalLayout_6->addWidget(comboBoxFechadura);

        layoutWidget = new QWidget(AdicionaisRef);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(660, 472, 91, 71));
        verticalLayout_15 = new QVBoxLayout(layoutWidget);
        verticalLayout_15->setObjectName("verticalLayout_15");
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        spinBox_trinco = new QSpinBox(layoutWidget);
        spinBox_trinco->setObjectName("spinBox_trinco");
        sizePolicy1.setHeightForWidth(spinBox_trinco->sizePolicy().hasHeightForWidth());
        spinBox_trinco->setSizePolicy(sizePolicy1);
        spinBox_trinco->setFont(font5);

        verticalLayout_15->addWidget(spinBox_trinco);

        pushButtonADDtrinco = new QPushButton(layoutWidget);
        pushButtonADDtrinco->setObjectName("pushButtonADDtrinco");
        sizePolicy1.setHeightForWidth(pushButtonADDtrinco->sizePolicy().hasHeightForWidth());
        pushButtonADDtrinco->setSizePolicy(sizePolicy1);
        pushButtonADDtrinco->setFont(font6);
        pushButtonADDtrinco->setIcon(icon);
        pushButtonADDtrinco->setIconSize(QSize(14, 14));

        verticalLayout_15->addWidget(pushButtonADDtrinco);

        layoutWidget_9 = new QWidget(AdicionaisRef);
        layoutWidget_9->setObjectName("layoutWidget_9");
        layoutWidget_9->setGeometry(QRect(660, 290, 91, 81));
        verticalLayout_13 = new QVBoxLayout(layoutWidget_9);
        verticalLayout_13->setObjectName("verticalLayout_13");
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        spinBox_fechadura = new QSpinBox(layoutWidget_9);
        spinBox_fechadura->setObjectName("spinBox_fechadura");
        sizePolicy1.setHeightForWidth(spinBox_fechadura->sizePolicy().hasHeightForWidth());
        spinBox_fechadura->setSizePolicy(sizePolicy1);
        spinBox_fechadura->setFont(font5);

        verticalLayout_13->addWidget(spinBox_fechadura);

        pushButtonADDfechadura = new QPushButton(layoutWidget_9);
        pushButtonADDfechadura->setObjectName("pushButtonADDfechadura");
        sizePolicy1.setHeightForWidth(pushButtonADDfechadura->sizePolicy().hasHeightForWidth());
        pushButtonADDfechadura->setSizePolicy(sizePolicy1);
        pushButtonADDfechadura->setFont(font6);
        pushButtonADDfechadura->setIcon(icon);
        pushButtonADDfechadura->setIconSize(QSize(14, 14));

        verticalLayout_13->addWidget(pushButtonADDfechadura);

        label_3 = new QLabel(AdicionaisRef);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(360, 0, 441, 91));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font7.setPointSize(12);
        font7.setBold(true);
        label_3->setFont(font7);
        label_5 = new QLabel(AdicionaisRef);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(160, 140, 161, 31));
        label_5->setFont(font3);
        layoutWidget1 = new QWidget(AdicionaisRef);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(890, 570, 371, 76));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        labelLargura_7 = new QLabel(layoutWidget1);
        labelLargura_7->setObjectName("labelLargura_7");
        labelLargura_7->setFont(font);

        horizontalLayout_6->addWidget(labelLargura_7);

        label_price = new QLabel(layoutWidget1);
        label_price->setObjectName("label_price");
        QFont font8;
        font8.setPointSize(16);
        font8.setBold(true);
        label_price->setFont(font8);

        horizontalLayout_6->addWidget(label_price);


        horizontalLayout_7->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName("label_8");
        label_8->setFont(font8);

        horizontalLayout_5->addWidget(label_8);

        label_profit = new QLabel(layoutWidget1);
        label_profit->setObjectName("label_profit");
        label_profit->setFont(font8);

        horizontalLayout_5->addWidget(label_profit);


        horizontalLayout_7->addLayout(horizontalLayout_5);

        layoutWidget_14 = new QWidget(AdicionaisRef);
        layoutWidget_14->setObjectName("layoutWidget_14");
        layoutWidget_14->setGeometry(QRect(440, 560, 211, 77));
        verticalLayout_12 = new QVBoxLayout(layoutWidget_14);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        labelLargura_11 = new QLabel(layoutWidget_14);
        labelLargura_11->setObjectName("labelLargura_11");
        labelLargura_11->setFont(font);

        verticalLayout_12->addWidget(labelLargura_11);

        comboBoxRodana = new QComboBox(layoutWidget_14);
        comboBoxRodana->addItem(QString());
        comboBoxRodana->setObjectName("comboBoxRodana");
        sizePolicy.setHeightForWidth(comboBoxRodana->sizePolicy().hasHeightForWidth());
        comboBoxRodana->setSizePolicy(sizePolicy);
        comboBoxRodana->setFont(font1);

        verticalLayout_12->addWidget(comboBoxRodana);

        layoutWidget_16 = new QWidget(AdicionaisRef);
        layoutWidget_16->setObjectName("layoutWidget_16");
        layoutWidget_16->setGeometry(QRect(660, 560, 91, 81));
        verticalLayout_16 = new QVBoxLayout(layoutWidget_16);
        verticalLayout_16->setObjectName("verticalLayout_16");
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        spinBox_Rodana = new QSpinBox(layoutWidget_16);
        spinBox_Rodana->setObjectName("spinBox_Rodana");
        sizePolicy1.setHeightForWidth(spinBox_Rodana->sizePolicy().hasHeightForWidth());
        spinBox_Rodana->setSizePolicy(sizePolicy1);
        spinBox_Rodana->setFont(font5);

        verticalLayout_16->addWidget(spinBox_Rodana);

        pushButtonADDrodana = new QPushButton(layoutWidget_16);
        pushButtonADDrodana->setObjectName("pushButtonADDrodana");
        sizePolicy1.setHeightForWidth(pushButtonADDrodana->sizePolicy().hasHeightForWidth());
        pushButtonADDrodana->setSizePolicy(sizePolicy1);
        pushButtonADDrodana->setFont(font6);
        pushButtonADDrodana->setIcon(icon);
        pushButtonADDrodana->setIconSize(QSize(14, 14));

        verticalLayout_16->addWidget(pushButtonADDrodana);

        pushButtonAreaDePrecos = new QPushButton(AdicionaisRef);
        pushButtonAreaDePrecos->setObjectName("pushButtonAreaDePrecos");
        pushButtonAreaDePrecos->setGeometry(QRect(840, 660, 61, 51));
        pushButtonAreaDePrecos->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagens/Preco.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonAreaDePrecos->setIcon(icon1);
        pushButtonAreaDePrecos->setIconSize(QSize(32, 32));
        widget = new QWidget(AdicionaisRef);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(230, 520, 194, 122));
        verticalLayout_17 = new QVBoxLayout(widget);
        verticalLayout_17->setObjectName("verticalLayout_17");
        verticalLayout_17->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        labelLargura_3 = new QLabel(widget);
        labelLargura_3->setObjectName("labelLargura_3");
        labelLargura_3->setFont(font);

        verticalLayout_5->addWidget(labelLargura_3);

        comboBoxAluminio = new QComboBox(widget);
        comboBoxAluminio->addItem(QString());
        comboBoxAluminio->setObjectName("comboBoxAluminio");
        sizePolicy.setHeightForWidth(comboBoxAluminio->sizePolicy().hasHeightForWidth());
        comboBoxAluminio->setSizePolicy(sizePolicy);
        comboBoxAluminio->setFont(font1);

        verticalLayout_5->addWidget(comboBoxAluminio);


        verticalLayout_17->addLayout(verticalLayout_5);

        pushButtonTodosOsAluminios = new QPushButton(widget);
        pushButtonTodosOsAluminios->setObjectName("pushButtonTodosOsAluminios");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButtonTodosOsAluminios->sizePolicy().hasHeightForWidth());
        pushButtonTodosOsAluminios->setSizePolicy(sizePolicy2);
        pushButtonTodosOsAluminios->setFont(font6);

        verticalLayout_17->addWidget(pushButtonTodosOsAluminios);

        widget1 = new QWidget(AdicionaisRef);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(10, 520, 211, 124));
        verticalLayout_18 = new QVBoxLayout(widget1);
        verticalLayout_18->setObjectName("verticalLayout_18");
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        labelLargura_2 = new QLabel(widget1);
        labelLargura_2->setObjectName("labelLargura_2");
        labelLargura_2->setFont(font);

        verticalLayout_4->addWidget(labelLargura_2);

        lineEditComprimento = new QLineEdit(widget1);
        lineEditComprimento->setObjectName("lineEditComprimento");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEditComprimento->sizePolicy().hasHeightForWidth());
        lineEditComprimento->setSizePolicy(sizePolicy3);
        lineEditComprimento->setFont(font1);

        verticalLayout_4->addWidget(lineEditComprimento);


        verticalLayout_18->addLayout(verticalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        spinBox_Aluminio = new QSpinBox(widget1);
        spinBox_Aluminio->setObjectName("spinBox_Aluminio");
        sizePolicy1.setHeightForWidth(spinBox_Aluminio->sizePolicy().hasHeightForWidth());
        spinBox_Aluminio->setSizePolicy(sizePolicy1);
        spinBox_Aluminio->setFont(font5);

        horizontalLayout->addWidget(spinBox_Aluminio);

        pushButtonADDaluminios = new QPushButton(widget1);
        pushButtonADDaluminios->setObjectName("pushButtonADDaluminios");
        pushButtonADDaluminios->setFont(font6);

        horizontalLayout->addWidget(pushButtonADDaluminios);


        verticalLayout_18->addLayout(horizontalLayout);

        widget2 = new QWidget(AdicionaisRef);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(20, 190, 399, 82));
        horizontalLayout_2 = new QHBoxLayout(widget2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        labelLargura = new QLabel(widget2);
        labelLargura->setObjectName("labelLargura");
        labelLargura->setFont(font);

        verticalLayout->addWidget(labelLargura);

        lineEditLargura = new QLineEdit(widget2);
        lineEditLargura->setObjectName("lineEditLargura");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lineEditLargura->sizePolicy().hasHeightForWidth());
        lineEditLargura->setSizePolicy(sizePolicy4);
        lineEditLargura->setFont(font6);

        verticalLayout->addWidget(lineEditLargura);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        labelAltura = new QLabel(widget2);
        labelAltura->setObjectName("labelAltura");
        labelAltura->setFont(font);

        verticalLayout_2->addWidget(labelAltura);

        lineEditAltura = new QLineEdit(widget2);
        lineEditAltura->setObjectName("lineEditAltura");
        sizePolicy4.setHeightForWidth(lineEditAltura->sizePolicy().hasHeightForWidth());
        lineEditAltura->setSizePolicy(sizePolicy4);
        lineEditAltura->setFont(font6);

        verticalLayout_2->addWidget(lineEditAltura);


        horizontalLayout_2->addLayout(verticalLayout_2);

        widget3 = new QWidget(AdicionaisRef);
        widget3->setObjectName("widget3");
        widget3->setGeometry(QRect(20, 270, 401, 208));
        verticalLayout_19 = new QVBoxLayout(widget3);
        verticalLayout_19->setObjectName("verticalLayout_19");
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        labelVidros = new QLabel(widget3);
        labelVidros->setObjectName("labelVidros");
        labelVidros->setFont(font);

        verticalLayout_3->addWidget(labelVidros);

        comboBoxVidros = new QComboBox(widget3);
        comboBoxVidros->addItem(QString());
        comboBoxVidros->setObjectName("comboBoxVidros");
        sizePolicy1.setHeightForWidth(comboBoxVidros->sizePolicy().hasHeightForWidth());
        comboBoxVidros->setSizePolicy(sizePolicy1);
        comboBoxVidros->setFont(font1);

        verticalLayout_3->addWidget(comboBoxVidros);


        verticalLayout_19->addLayout(verticalLayout_3);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        labelLargura_10 = new QLabel(widget3);
        labelLargura_10->setObjectName("labelLargura_10");
        labelLargura_10->setFont(font);

        verticalLayout_10->addWidget(labelLargura_10);

        comboBoxPelicula = new QComboBox(widget3);
        comboBoxPelicula->addItem(QString());
        comboBoxPelicula->setObjectName("comboBoxPelicula");
        sizePolicy1.setHeightForWidth(comboBoxPelicula->sizePolicy().hasHeightForWidth());
        comboBoxPelicula->setSizePolicy(sizePolicy1);
        comboBoxPelicula->setFont(font1);

        verticalLayout_10->addWidget(comboBoxPelicula);


        verticalLayout_19->addLayout(verticalLayout_10);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        spinBoxVidro = new QSpinBox(widget3);
        spinBoxVidro->setObjectName("spinBoxVidro");
        sizePolicy1.setHeightForWidth(spinBoxVidro->sizePolicy().hasHeightForWidth());
        spinBoxVidro->setSizePolicy(sizePolicy1);
        spinBoxVidro->setFont(font5);

        horizontalLayout_3->addWidget(spinBoxVidro);

        pushButtonADDvidro = new QPushButton(widget3);
        pushButtonADDvidro->setObjectName("pushButtonADDvidro");
        sizePolicy2.setHeightForWidth(pushButtonADDvidro->sizePolicy().hasHeightForWidth());
        pushButtonADDvidro->setSizePolicy(sizePolicy2);
        pushButtonADDvidro->setFont(font6);

        horizontalLayout_3->addWidget(pushButtonADDvidro);


        verticalLayout_19->addLayout(horizontalLayout_3);

        QWidget::setTabOrder(lineEditLargura, lineEditAltura);
        QWidget::setTabOrder(lineEditAltura, comboBoxVidros);
        QWidget::setTabOrder(comboBoxVidros, comboBoxPelicula);
        QWidget::setTabOrder(comboBoxPelicula, spinBoxVidro);
        QWidget::setTabOrder(spinBoxVidro, pushButtonADDvidro);
        QWidget::setTabOrder(pushButtonADDvidro, lineEditComprimento);
        QWidget::setTabOrder(lineEditComprimento, comboBoxAluminio);
        QWidget::setTabOrder(comboBoxAluminio, spinBox_Aluminio);
        QWidget::setTabOrder(spinBox_Aluminio, pushButtonADDaluminios);
        QWidget::setTabOrder(pushButtonADDaluminios, pushButtonTodosOsAluminios);
        QWidget::setTabOrder(pushButtonTodosOsAluminios, comboBoxKit);
        QWidget::setTabOrder(comboBoxKit, pushButtonADDkit);
        QWidget::setTabOrder(pushButtonADDkit, comboBoxFechadura);
        QWidget::setTabOrder(comboBoxFechadura, pushButtonADDfechadura);
        QWidget::setTabOrder(pushButtonADDfechadura, comboBoxPuxador);
        QWidget::setTabOrder(comboBoxPuxador, pushButtonADDpuxador);
        QWidget::setTabOrder(pushButtonADDpuxador, comboBoxTrinco);
        QWidget::setTabOrder(comboBoxTrinco, spinBox_trinco);
        QWidget::setTabOrder(spinBox_trinco, comboBoxRodana);
        QWidget::setTabOrder(comboBoxRodana, spinBox_Rodana);
        QWidget::setTabOrder(spinBox_Rodana, pushButtonIncluirNoOrcamentoRef);
        QWidget::setTabOrder(pushButtonIncluirNoOrcamentoRef, pushButtonAreaDePrecos);
        QWidget::setTabOrder(pushButtonAreaDePrecos, tableWidget);

        retranslateUi(AdicionaisRef);

        QMetaObject::connectSlotsByName(AdicionaisRef);
    } // setupUi

    void retranslateUi(QDialog *AdicionaisRef)
    {
        AdicionaisRef->setWindowTitle(QCoreApplication::translate("AdicionaisRef", "Dialog", nullptr));
        labelLargura_6->setText(QCoreApplication::translate("AdicionaisRef", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Trinco</span></p></body></html>", nullptr));
        comboBoxTrinco->setItemText(0, QString());

        label->setText(QCoreApplication::translate("AdicionaisRef", "\303\201rea de Adicionais", nullptr));
        label_4->setText(QCoreApplication::translate("AdicionaisRef", "<html><head/><body><p><span style=\" text-decoration:none;\">Alum\303\255nios</span></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        tableWidget->setWhatsThis(QCoreApplication::translate("AdicionaisRef", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        labelLargura_5->setText(QCoreApplication::translate("AdicionaisRef", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Puxador</span></p></body></html>", nullptr));
        comboBoxPuxador->setItemText(0, QString());

        pushButtonADDkit->setText(QString());
        pushButtonIncluirNoOrcamentoRef->setText(QCoreApplication::translate("AdicionaisRef", "Incluir no Or\303\247amento ", nullptr));
        pushButtonADDpuxador->setText(QString());
        label_6->setText(QCoreApplication::translate("AdicionaisRef", "<html><head/><body><p><span style=\" text-decoration:none;\">Outros</span></p></body></html>", nullptr));
        labelLargura_9->setText(QCoreApplication::translate("AdicionaisRef", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Kit</span></p></body></html>", nullptr));
        comboBoxKit->setItemText(0, QString());

        label_2->setText(QCoreApplication::translate("AdicionaisRef", "<html><head/><body><p><span style=\" text-decoration:none;\">Resumo de Adi\303\247\303\265es</span></p></body></html>", nullptr));
        labelLargura_4->setText(QCoreApplication::translate("AdicionaisRef", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Fechadura</span></p></body></html>", nullptr));
        comboBoxFechadura->setItemText(0, QString());

        pushButtonADDtrinco->setText(QString());
        pushButtonADDfechadura->setText(QString());
        label_3->setText(QCoreApplication::translate("AdicionaisRef", "<html><head/><body><p align=\"center\"><span style=\" font-size:50pt; font-weight:700; color:#0000ff;\">Art</span><span style=\" font-size:50pt; font-weight:600; color:#ff0000;\">vidros</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("AdicionaisRef", "<html><head/><body><p><span style=\" text-decoration:none;\">Vidro Fixo</span></p></body></html>", nullptr));
        labelLargura_7->setText(QCoreApplication::translate("AdicionaisRef", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Valor:</span></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        label_price->setWhatsThis(QCoreApplication::translate("AdicionaisRef", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_price->setText(QCoreApplication::translate("AdicionaisRef", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("AdicionaisRef", "<html><head/><body><p align=\"center\">Lucro:</p></body></html>", nullptr));
        label_profit->setText(QCoreApplication::translate("AdicionaisRef", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        labelLargura_11->setText(QCoreApplication::translate("AdicionaisRef", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Rodana</span></p></body></html>", nullptr));
        comboBoxRodana->setItemText(0, QString());

        pushButtonADDrodana->setText(QString());
        pushButtonAreaDePrecos->setText(QString());
        labelLargura_3->setText(QCoreApplication::translate("AdicionaisRef", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Modelo</span></p></body></html>", nullptr));
        comboBoxAluminio->setItemText(0, QString());

        pushButtonTodosOsAluminios->setText(QCoreApplication::translate("AdicionaisRef", "Todos os Alum\303\255nios", nullptr));
        labelLargura_2->setText(QCoreApplication::translate("AdicionaisRef", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Comprimento</span></p></body></html>", nullptr));
        pushButtonADDaluminios->setText(QCoreApplication::translate("AdicionaisRef", "Adicionar", nullptr));
        labelLargura->setText(QCoreApplication::translate("AdicionaisRef", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Largura</span></p></body></html>", nullptr));
        labelAltura->setText(QCoreApplication::translate("AdicionaisRef", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Altura</span></p></body></html>", nullptr));
        labelVidros->setText(QCoreApplication::translate("AdicionaisRef", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Vidros</span></p></body></html>", nullptr));
        comboBoxVidros->setItemText(0, QString());

        labelLargura_10->setText(QCoreApplication::translate("AdicionaisRef", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Pel\303\255cula</span></p></body></html>", nullptr));
        comboBoxPelicula->setItemText(0, QString());

        pushButtonADDvidro->setText(QCoreApplication::translate("AdicionaisRef", "Adicionar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdicionaisRef: public Ui_AdicionaisRef {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADICIONAISREF_H
