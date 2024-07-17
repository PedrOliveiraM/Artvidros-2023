/********************************************************************************
** Form generated from reading UI file 'dialogboxs.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGBOXS_H
#define UI_DIALOGBOXS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogBoxs
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonBoxFrontal;
    QPushButton *pushButtonBoxCanto;

    void setupUi(QDialog *DialogBoxs)
    {
        if (DialogBoxs->objectName().isEmpty())
            DialogBoxs->setObjectName("DialogBoxs");
        DialogBoxs->resize(500, 600);
        label = new QLabel(DialogBoxs);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 40, 321, 191));
        label->setPixmap(QPixmap(QString::fromUtf8(":/imagens/AberturaArtvidros.png")));
        label->setScaledContents(true);
        layoutWidget = new QWidget(DialogBoxs);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(90, 280, 301, 131));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonBoxFrontal = new QPushButton(layoutWidget);
        pushButtonBoxFrontal->setObjectName("pushButtonBoxFrontal");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonBoxFrontal->sizePolicy().hasHeightForWidth());
        pushButtonBoxFrontal->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        pushButtonBoxFrontal->setFont(font);

        verticalLayout->addWidget(pushButtonBoxFrontal);

        pushButtonBoxCanto = new QPushButton(layoutWidget);
        pushButtonBoxCanto->setObjectName("pushButtonBoxCanto");
        sizePolicy.setHeightForWidth(pushButtonBoxCanto->sizePolicy().hasHeightForWidth());
        pushButtonBoxCanto->setSizePolicy(sizePolicy);
        pushButtonBoxCanto->setFont(font);

        verticalLayout->addWidget(pushButtonBoxCanto);


        retranslateUi(DialogBoxs);

        QMetaObject::connectSlotsByName(DialogBoxs);
    } // setupUi

    void retranslateUi(QDialog *DialogBoxs)
    {
        DialogBoxs->setWindowTitle(QCoreApplication::translate("DialogBoxs", "Dialog", nullptr));
        label->setText(QString());
        pushButtonBoxFrontal->setText(QCoreApplication::translate("DialogBoxs", "Box Frontal", nullptr));
        pushButtonBoxCanto->setText(QCoreApplication::translate("DialogBoxs", "Box Canto", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogBoxs: public Ui_DialogBoxs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGBOXS_H
