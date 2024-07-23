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
    QSpinBox *spinBoxVidro;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout_8;
    QLabel *labelLargura_6;
    QComboBox *comboBoxTrinco;
    QFrame *line_4;
    QLabel *label;
    QLabel *label_4;
    QTableWidget *tableWidget;
    QPushButton *pushButtonADDvidro;
    QFrame *line_2;
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout_7;
    QLabel *labelLargura_5;
    QComboBox *comboBoxPuxador;
    QFrame *line;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBox_kit;
    QPushButton *pushButtonADDkit;
    QWidget *layoutWidget_13;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelLargura_3;
    QComboBox *comboBoxAluminio;
    QPushButton *pushButtonIncluirNoOrcamentoRef;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelLargura_2;
    QLineEdit *lineEditComprimento;
    QWidget *layoutWidget_10;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *spinBox_puxador;
    QPushButton *pushButtonADDpuxador;
    QLabel *label_6;
    QWidget *layoutWidget_11;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelAltura;
    QLineEdit *lineEditAltura;
    QWidget *layoutWidget_8;
    QVBoxLayout *verticalLayout_11;
    QLabel *labelLargura_9;
    QComboBox *comboBoxKit;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelVidros;
    QComboBox *comboBoxVidros;
    QVBoxLayout *verticalLayout_10;
    QLabel *labelLargura_10;
    QComboBox *comboBoxPelicula;
    QSpinBox *spinBox_Aluminio;
    QLabel *label_2;
    QWidget *layoutWidget_12;
    QVBoxLayout *verticalLayout_6;
    QLabel *labelLargura_4;
    QComboBox *comboBoxFechadura;
    QPushButton *pushButtonADDaluminios;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *spinBox_trinco;
    QPushButton *pushButtonADDtrinco;
    QWidget *layoutWidget_9;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *spinBox_fechadura;
    QPushButton *pushButtonADDfechadura;
    QLabel *label_3;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QLabel *labelLargura;
    QLineEdit *lineEditLargura;
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
    QHBoxLayout *horizontalLayout_9;
    QSpinBox *spinBox_Rodana;
    QPushButton *pushButtonADDrodana;
    QPushButton *pushButtonAreaDePrecos;
    QPushButton *pushButtonTodosOsAluminios;

    void setupUi(QDialog *AdicionaisRef)
    {
        if (AdicionaisRef->objectName().isEmpty())
            AdicionaisRef->setObjectName("AdicionaisRef");
        AdicionaisRef->resize(1366, 768);
        line_5 = new QFrame(AdicionaisRef);
        line_5->setObjectName("line_5");
        line_5->setGeometry(QRect(10, 670, 1401, 41));
        line_5->setFrameShape(QFrame::Shape::HLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);
        spinBoxVidro = new QSpinBox(AdicionaisRef);
        spinBoxVidro->setObjectName("spinBoxVidro");
        spinBoxVidro->setGeometry(QRect(96, 470, 51, 41));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spinBoxVidro->sizePolicy().hasHeightForWidth());
        spinBoxVidro->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        spinBoxVidro->setFont(font);
        layoutWidget_7 = new QWidget(AdicionaisRef);
        layoutWidget_7->setObjectName("layoutWidget_7");
        layoutWidget_7->setGeometry(QRect(430, 500, 211, 77));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_7);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        labelLargura_6 = new QLabel(layoutWidget_7);
        labelLargura_6->setObjectName("labelLargura_6");
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        labelLargura_6->setFont(font1);

        verticalLayout_8->addWidget(labelLargura_6);

        comboBoxTrinco = new QComboBox(layoutWidget_7);
        comboBoxTrinco->addItem(QString());
        comboBoxTrinco->setObjectName("comboBoxTrinco");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBoxTrinco->sizePolicy().hasHeightForWidth());
        comboBoxTrinco->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        comboBoxTrinco->setFont(font2);

        verticalLayout_8->addWidget(comboBoxTrinco);

        line_4 = new QFrame(AdicionaisRef);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(0, 200, 1401, 41));
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);
        label = new QLabel(AdicionaisRef);
        label->setObjectName("label");
        label->setGeometry(QRect(730, 90, 561, 61));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font3.setPointSize(20);
        font3.setBold(false);
        label->setFont(font3);
        label_4 = new QLabel(AdicionaisRef);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(160, 520, 141, 31));
        QFont font4;
        font4.setPointSize(16);
        font4.setBold(true);
        font4.setUnderline(true);
        label_4->setFont(font4);
        tableWidget = new QTableWidget(AdicionaisRef);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(760, 270, 601, 331));
        QFont font5;
        font5.setPointSize(10);
        tableWidget->setFont(font5);
        pushButtonADDvidro = new QPushButton(AdicionaisRef);
        pushButtonADDvidro->setObjectName("pushButtonADDvidro");
        pushButtonADDvidro->setGeometry(QRect(150, 470, 151, 41));
        QFont font6;
        font6.setPointSize(12);
        font6.setBold(true);
        pushButtonADDvidro->setFont(font6);
        line_2 = new QFrame(AdicionaisRef);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(400, 160, 20, 531));
        line_2->setFrameShape(QFrame::Shape::VLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        layoutWidget_6 = new QWidget(AdicionaisRef);
        layoutWidget_6->setObjectName("layoutWidget_6");
        layoutWidget_6->setGeometry(QRect(430, 410, 211, 77));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_6);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        labelLargura_5 = new QLabel(layoutWidget_6);
        labelLargura_5->setObjectName("labelLargura_5");
        labelLargura_5->setFont(font1);

        verticalLayout_7->addWidget(labelLargura_5);

        comboBoxPuxador = new QComboBox(layoutWidget_6);
        comboBoxPuxador->addItem(QString());
        comboBoxPuxador->setObjectName("comboBoxPuxador");
        sizePolicy1.setHeightForWidth(comboBoxPuxador->sizePolicy().hasHeightForWidth());
        comboBoxPuxador->setSizePolicy(sizePolicy1);
        comboBoxPuxador->setFont(font2);

        verticalLayout_7->addWidget(comboBoxPuxador);

        line = new QFrame(AdicionaisRef);
        line->setObjectName("line");
        line->setGeometry(QRect(740, 160, 20, 531));
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        layoutWidget_5 = new QWidget(AdicionaisRef);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(650, 270, 91, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget_5);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        spinBox_kit = new QSpinBox(layoutWidget_5);
        spinBox_kit->setObjectName("spinBox_kit");
        sizePolicy.setHeightForWidth(spinBox_kit->sizePolicy().hasHeightForWidth());
        spinBox_kit->setSizePolicy(sizePolicy);
        spinBox_kit->setFont(font);

        horizontalLayout->addWidget(spinBox_kit);

        pushButtonADDkit = new QPushButton(layoutWidget_5);
        pushButtonADDkit->setObjectName("pushButtonADDkit");
        sizePolicy.setHeightForWidth(pushButtonADDkit->sizePolicy().hasHeightForWidth());
        pushButtonADDkit->setSizePolicy(sizePolicy);
        pushButtonADDkit->setFont(font6);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/adicionar.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonADDkit->setIcon(icon);
        pushButtonADDkit->setIconSize(QSize(14, 14));

        horizontalLayout->addWidget(pushButtonADDkit);

        layoutWidget_13 = new QWidget(AdicionaisRef);
        layoutWidget_13->setObjectName("layoutWidget_13");
        layoutWidget_13->setGeometry(QRect(190, 560, 211, 77));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_13);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        labelLargura_3 = new QLabel(layoutWidget_13);
        labelLargura_3->setObjectName("labelLargura_3");
        labelLargura_3->setFont(font1);

        verticalLayout_5->addWidget(labelLargura_3);

        comboBoxAluminio = new QComboBox(layoutWidget_13);
        comboBoxAluminio->addItem(QString());
        comboBoxAluminio->setObjectName("comboBoxAluminio");
        sizePolicy1.setHeightForWidth(comboBoxAluminio->sizePolicy().hasHeightForWidth());
        comboBoxAluminio->setSizePolicy(sizePolicy1);
        comboBoxAluminio->setFont(font2);

        verticalLayout_5->addWidget(comboBoxAluminio);

        pushButtonIncluirNoOrcamentoRef = new QPushButton(AdicionaisRef);
        pushButtonIncluirNoOrcamentoRef->setObjectName("pushButtonIncluirNoOrcamentoRef");
        pushButtonIncluirNoOrcamentoRef->setGeometry(QRect(540, 700, 291, 51));
        pushButtonIncluirNoOrcamentoRef->setFont(font1);
        layoutWidget_4 = new QWidget(AdicionaisRef);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(10, 560, 178, 77));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        labelLargura_2 = new QLabel(layoutWidget_4);
        labelLargura_2->setObjectName("labelLargura_2");
        labelLargura_2->setFont(font1);

        verticalLayout_4->addWidget(labelLargura_2);

        lineEditComprimento = new QLineEdit(layoutWidget_4);
        lineEditComprimento->setObjectName("lineEditComprimento");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEditComprimento->sizePolicy().hasHeightForWidth());
        lineEditComprimento->setSizePolicy(sizePolicy2);
        lineEditComprimento->setFont(font2);

        verticalLayout_4->addWidget(lineEditComprimento);

        layoutWidget_10 = new QWidget(AdicionaisRef);
        layoutWidget_10->setObjectName("layoutWidget_10");
        layoutWidget_10->setGeometry(QRect(650, 450, 91, 41));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_10);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        spinBox_puxador = new QSpinBox(layoutWidget_10);
        spinBox_puxador->setObjectName("spinBox_puxador");
        sizePolicy.setHeightForWidth(spinBox_puxador->sizePolicy().hasHeightForWidth());
        spinBox_puxador->setSizePolicy(sizePolicy);
        spinBox_puxador->setFont(font);

        horizontalLayout_3->addWidget(spinBox_puxador);

        pushButtonADDpuxador = new QPushButton(layoutWidget_10);
        pushButtonADDpuxador->setObjectName("pushButtonADDpuxador");
        sizePolicy.setHeightForWidth(pushButtonADDpuxador->sizePolicy().hasHeightForWidth());
        pushButtonADDpuxador->setSizePolicy(sizePolicy);
        pushButtonADDpuxador->setFont(font6);
        pushButtonADDpuxador->setIcon(icon);
        pushButtonADDpuxador->setIconSize(QSize(14, 14));

        horizontalLayout_3->addWidget(pushButtonADDpuxador);

        label_6 = new QLabel(AdicionaisRef);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(550, 180, 71, 31));
        label_6->setFont(font4);
        layoutWidget_11 = new QWidget(AdicionaisRef);
        layoutWidget_11->setObjectName("layoutWidget_11");
        layoutWidget_11->setGeometry(QRect(210, 230, 141, 80));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelAltura = new QLabel(layoutWidget_11);
        labelAltura->setObjectName("labelAltura");
        labelAltura->setFont(font1);

        verticalLayout_2->addWidget(labelAltura);

        lineEditAltura = new QLineEdit(layoutWidget_11);
        lineEditAltura->setObjectName("lineEditAltura");
        sizePolicy2.setHeightForWidth(lineEditAltura->sizePolicy().hasHeightForWidth());
        lineEditAltura->setSizePolicy(sizePolicy2);
        lineEditAltura->setFont(font6);

        verticalLayout_2->addWidget(lineEditAltura);

        layoutWidget_8 = new QWidget(AdicionaisRef);
        layoutWidget_8->setObjectName("layoutWidget_8");
        layoutWidget_8->setGeometry(QRect(430, 230, 211, 77));
        verticalLayout_11 = new QVBoxLayout(layoutWidget_8);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        labelLargura_9 = new QLabel(layoutWidget_8);
        labelLargura_9->setObjectName("labelLargura_9");
        labelLargura_9->setFont(font1);

        verticalLayout_11->addWidget(labelLargura_9);

        comboBoxKit = new QComboBox(layoutWidget_8);
        comboBoxKit->addItem(QString());
        comboBoxKit->setObjectName("comboBoxKit");
        sizePolicy1.setHeightForWidth(comboBoxKit->sizePolicy().hasHeightForWidth());
        comboBoxKit->setSizePolicy(sizePolicy1);
        comboBoxKit->setFont(font2);

        verticalLayout_11->addWidget(comboBoxKit);

        layoutWidget_3 = new QWidget(AdicionaisRef);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(60, 300, 291, 161));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelVidros = new QLabel(layoutWidget_3);
        labelVidros->setObjectName("labelVidros");
        labelVidros->setFont(font1);

        verticalLayout_3->addWidget(labelVidros);

        comboBoxVidros = new QComboBox(layoutWidget_3);
        comboBoxVidros->addItem(QString());
        comboBoxVidros->setObjectName("comboBoxVidros");
        sizePolicy1.setHeightForWidth(comboBoxVidros->sizePolicy().hasHeightForWidth());
        comboBoxVidros->setSizePolicy(sizePolicy1);
        comboBoxVidros->setFont(font2);

        verticalLayout_3->addWidget(comboBoxVidros);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        labelLargura_10 = new QLabel(layoutWidget_3);
        labelLargura_10->setObjectName("labelLargura_10");
        labelLargura_10->setFont(font1);

        verticalLayout_10->addWidget(labelLargura_10);

        comboBoxPelicula = new QComboBox(layoutWidget_3);
        comboBoxPelicula->addItem(QString());
        comboBoxPelicula->setObjectName("comboBoxPelicula");
        sizePolicy1.setHeightForWidth(comboBoxPelicula->sizePolicy().hasHeightForWidth());
        comboBoxPelicula->setSizePolicy(sizePolicy1);
        comboBoxPelicula->setFont(font2);

        verticalLayout_10->addWidget(comboBoxPelicula);


        verticalLayout_3->addLayout(verticalLayout_10);

        spinBox_Aluminio = new QSpinBox(AdicionaisRef);
        spinBox_Aluminio->setObjectName("spinBox_Aluminio");
        spinBox_Aluminio->setGeometry(QRect(20, 640, 41, 41));
        sizePolicy.setHeightForWidth(spinBox_Aluminio->sizePolicy().hasHeightForWidth());
        spinBox_Aluminio->setSizePolicy(sizePolicy);
        spinBox_Aluminio->setFont(font);
        label_2 = new QLabel(AdicionaisRef);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(970, 180, 201, 31));
        label_2->setFont(font4);
        layoutWidget_12 = new QWidget(AdicionaisRef);
        layoutWidget_12->setObjectName("layoutWidget_12");
        layoutWidget_12->setGeometry(QRect(430, 320, 211, 77));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_12);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        labelLargura_4 = new QLabel(layoutWidget_12);
        labelLargura_4->setObjectName("labelLargura_4");
        labelLargura_4->setFont(font1);

        verticalLayout_6->addWidget(labelLargura_4);

        comboBoxFechadura = new QComboBox(layoutWidget_12);
        comboBoxFechadura->addItem(QString());
        comboBoxFechadura->setObjectName("comboBoxFechadura");
        sizePolicy1.setHeightForWidth(comboBoxFechadura->sizePolicy().hasHeightForWidth());
        comboBoxFechadura->setSizePolicy(sizePolicy1);
        comboBoxFechadura->setFont(font2);

        verticalLayout_6->addWidget(comboBoxFechadura);

        pushButtonADDaluminios = new QPushButton(AdicionaisRef);
        pushButtonADDaluminios->setObjectName("pushButtonADDaluminios");
        pushButtonADDaluminios->setGeometry(QRect(70, 640, 151, 41));
        pushButtonADDaluminios->setFont(font6);
        layoutWidget = new QWidget(AdicionaisRef);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(650, 532, 91, 41));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        spinBox_trinco = new QSpinBox(layoutWidget);
        spinBox_trinco->setObjectName("spinBox_trinco");
        sizePolicy.setHeightForWidth(spinBox_trinco->sizePolicy().hasHeightForWidth());
        spinBox_trinco->setSizePolicy(sizePolicy);
        spinBox_trinco->setFont(font);

        horizontalLayout_4->addWidget(spinBox_trinco);

        pushButtonADDtrinco = new QPushButton(layoutWidget);
        pushButtonADDtrinco->setObjectName("pushButtonADDtrinco");
        sizePolicy.setHeightForWidth(pushButtonADDtrinco->sizePolicy().hasHeightForWidth());
        pushButtonADDtrinco->setSizePolicy(sizePolicy);
        pushButtonADDtrinco->setFont(font6);
        pushButtonADDtrinco->setIcon(icon);
        pushButtonADDtrinco->setIconSize(QSize(14, 14));

        horizontalLayout_4->addWidget(pushButtonADDtrinco);

        layoutWidget_9 = new QWidget(AdicionaisRef);
        layoutWidget_9->setObjectName("layoutWidget_9");
        layoutWidget_9->setGeometry(QRect(650, 360, 91, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_9);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        spinBox_fechadura = new QSpinBox(layoutWidget_9);
        spinBox_fechadura->setObjectName("spinBox_fechadura");
        sizePolicy.setHeightForWidth(spinBox_fechadura->sizePolicy().hasHeightForWidth());
        spinBox_fechadura->setSizePolicy(sizePolicy);
        spinBox_fechadura->setFont(font);

        horizontalLayout_2->addWidget(spinBox_fechadura);

        pushButtonADDfechadura = new QPushButton(layoutWidget_9);
        pushButtonADDfechadura->setObjectName("pushButtonADDfechadura");
        sizePolicy.setHeightForWidth(pushButtonADDfechadura->sizePolicy().hasHeightForWidth());
        pushButtonADDfechadura->setSizePolicy(sizePolicy);
        pushButtonADDfechadura->setFont(font6);
        pushButtonADDfechadura->setIcon(icon);
        pushButtonADDfechadura->setIconSize(QSize(14, 14));

        horizontalLayout_2->addWidget(pushButtonADDfechadura);

        label_3 = new QLabel(AdicionaisRef);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(330, 0, 631, 161));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font7.setPointSize(12);
        font7.setBold(true);
        label_3->setFont(font7);
        layoutWidget_2 = new QWidget(AdicionaisRef);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(60, 230, 141, 80));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelLargura = new QLabel(layoutWidget_2);
        labelLargura->setObjectName("labelLargura");
        labelLargura->setFont(font1);

        verticalLayout->addWidget(labelLargura);

        lineEditLargura = new QLineEdit(layoutWidget_2);
        lineEditLargura->setObjectName("lineEditLargura");
        sizePolicy2.setHeightForWidth(lineEditLargura->sizePolicy().hasHeightForWidth());
        lineEditLargura->setSizePolicy(sizePolicy2);
        lineEditLargura->setFont(font6);

        verticalLayout->addWidget(lineEditLargura);

        label_5 = new QLabel(AdicionaisRef);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(160, 180, 111, 31));
        label_5->setFont(font4);
        layoutWidget1 = new QWidget(AdicionaisRef);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(890, 610, 371, 76));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        labelLargura_7 = new QLabel(layoutWidget1);
        labelLargura_7->setObjectName("labelLargura_7");
        labelLargura_7->setFont(font1);

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
        layoutWidget_14->setGeometry(QRect(430, 590, 211, 77));
        verticalLayout_12 = new QVBoxLayout(layoutWidget_14);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        labelLargura_11 = new QLabel(layoutWidget_14);
        labelLargura_11->setObjectName("labelLargura_11");
        labelLargura_11->setFont(font1);

        verticalLayout_12->addWidget(labelLargura_11);

        comboBoxRodana = new QComboBox(layoutWidget_14);
        comboBoxRodana->addItem(QString());
        comboBoxRodana->setObjectName("comboBoxRodana");
        sizePolicy1.setHeightForWidth(comboBoxRodana->sizePolicy().hasHeightForWidth());
        comboBoxRodana->setSizePolicy(sizePolicy1);
        comboBoxRodana->setFont(font2);

        verticalLayout_12->addWidget(comboBoxRodana);

        layoutWidget_16 = new QWidget(AdicionaisRef);
        layoutWidget_16->setObjectName("layoutWidget_16");
        layoutWidget_16->setGeometry(QRect(650, 622, 91, 41));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget_16);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        spinBox_Rodana = new QSpinBox(layoutWidget_16);
        spinBox_Rodana->setObjectName("spinBox_Rodana");
        sizePolicy.setHeightForWidth(spinBox_Rodana->sizePolicy().hasHeightForWidth());
        spinBox_Rodana->setSizePolicy(sizePolicy);
        spinBox_Rodana->setFont(font);

        horizontalLayout_9->addWidget(spinBox_Rodana);

        pushButtonADDrodana = new QPushButton(layoutWidget_16);
        pushButtonADDrodana->setObjectName("pushButtonADDrodana");
        sizePolicy.setHeightForWidth(pushButtonADDrodana->sizePolicy().hasHeightForWidth());
        pushButtonADDrodana->setSizePolicy(sizePolicy);
        pushButtonADDrodana->setFont(font6);
        pushButtonADDrodana->setIcon(icon);
        pushButtonADDrodana->setIconSize(QSize(14, 14));

        horizontalLayout_9->addWidget(pushButtonADDrodana);

        pushButtonAreaDePrecos = new QPushButton(AdicionaisRef);
        pushButtonAreaDePrecos->setObjectName("pushButtonAreaDePrecos");
        pushButtonAreaDePrecos->setGeometry(QRect(840, 700, 61, 51));
        pushButtonAreaDePrecos->setFont(font1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagens/Preco.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonAreaDePrecos->setIcon(icon1);
        pushButtonAreaDePrecos->setIconSize(QSize(32, 32));
        pushButtonTodosOsAluminios = new QPushButton(AdicionaisRef);
        pushButtonTodosOsAluminios->setObjectName("pushButtonTodosOsAluminios");
        pushButtonTodosOsAluminios->setGeometry(QRect(230, 640, 161, 41));
        pushButtonTodosOsAluminios->setFont(font6);
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
        QWidget::setTabOrder(pushButtonADDtrinco, comboBoxRodana);
        QWidget::setTabOrder(comboBoxRodana, spinBox_Rodana);
        QWidget::setTabOrder(spinBox_Rodana, pushButtonADDrodana);
        QWidget::setTabOrder(pushButtonADDrodana, pushButtonIncluirNoOrcamentoRef);
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

        label->setText(QCoreApplication::translate("AdicionaisRef", "\303\201rea de Adicionais Refatorando", nullptr));
        label_4->setText(QCoreApplication::translate("AdicionaisRef", "<html><head/><body><p><span style=\" text-decoration:none;\">Alum\303\255nios</span></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        tableWidget->setWhatsThis(QCoreApplication::translate("AdicionaisRef", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButtonADDvidro->setText(QCoreApplication::translate("AdicionaisRef", "Adicionar", nullptr));
        labelLargura_5->setText(QCoreApplication::translate("AdicionaisRef", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Puxador</span></p></body></html>", nullptr));
        comboBoxPuxador->setItemText(0, QString());

        pushButtonADDkit->setText(QString());
        labelLargura_3->setText(QCoreApplication::translate("AdicionaisRef", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Modelo</span></p></body></html>", nullptr));
        comboBoxAluminio->setItemText(0, QString());

        pushButtonIncluirNoOrcamentoRef->setText(QCoreApplication::translate("AdicionaisRef", "Incluir no Or\303\247amento ", nullptr));
        labelLargura_2->setText(QCoreApplication::translate("AdicionaisRef", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Comprimento</span></p></body></html>", nullptr));
        pushButtonADDpuxador->setText(QString());
        label_6->setText(QCoreApplication::translate("AdicionaisRef", "<html><head/><body><p><span style=\" text-decoration:none;\">Outros</span></p></body></html>", nullptr));
        labelAltura->setText(QCoreApplication::translate("AdicionaisRef", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Altura</span></p></body></html>", nullptr));
        labelLargura_9->setText(QCoreApplication::translate("AdicionaisRef", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Kit</span></p></body></html>", nullptr));
        comboBoxKit->setItemText(0, QString());

        labelVidros->setText(QCoreApplication::translate("AdicionaisRef", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Vidros</span></p></body></html>", nullptr));
        comboBoxVidros->setItemText(0, QString());

        labelLargura_10->setText(QCoreApplication::translate("AdicionaisRef", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Pel\303\255cula</span></p></body></html>", nullptr));
        comboBoxPelicula->setItemText(0, QString());

        label_2->setText(QCoreApplication::translate("AdicionaisRef", "<html><head/><body><p><span style=\" text-decoration:none;\">Resumo de Adi\303\247\303\265es</span></p></body></html>", nullptr));
        labelLargura_4->setText(QCoreApplication::translate("AdicionaisRef", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Fechadura</span></p></body></html>", nullptr));
        comboBoxFechadura->setItemText(0, QString());

        pushButtonADDaluminios->setText(QCoreApplication::translate("AdicionaisRef", "Adicionar", nullptr));
        pushButtonADDtrinco->setText(QString());
        pushButtonADDfechadura->setText(QString());
        label_3->setText(QCoreApplication::translate("AdicionaisRef", "<html><head/><body><p align=\"center\"><span style=\" font-size:82pt; font-weight:700; color:#0000ff;\">Art</span><span style=\" font-size:82pt; font-weight:700; color:#ff0000;\">vidros</span></p></body></html>", nullptr));
        labelLargura->setText(QCoreApplication::translate("AdicionaisRef", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Largura</span></p></body></html>", nullptr));
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
        pushButtonTodosOsAluminios->setText(QCoreApplication::translate("AdicionaisRef", "Todos os Alum\303\255nios", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdicionaisRef: public Ui_AdicionaisRef {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADICIONAISREF_H
