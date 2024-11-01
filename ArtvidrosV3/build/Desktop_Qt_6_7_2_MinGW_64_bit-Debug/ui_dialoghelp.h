/********************************************************************************
** Form generated from reading UI file 'dialoghelp.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGHELP_H
#define UI_DIALOGHELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_DialogHelp
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *DialogHelp)
    {
        if (DialogHelp->objectName().isEmpty())
            DialogHelp->setObjectName("DialogHelp");
        DialogHelp->resize(1280, 720);
        label = new QLabel(DialogHelp);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 190, 571, 431));
        label->setTextFormat(Qt::PlainText);
        label->setPixmap(QPixmap(QString::fromUtf8(":/imagens/1.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(DialogHelp);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(640, 190, 571, 431));
        label_2->setTextFormat(Qt::PlainText);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/imagens/2.png")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(DialogHelp);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(490, 0, 321, 191));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/imagens/AberturaArtvidros.png")));
        label_3->setScaledContents(true);

        retranslateUi(DialogHelp);

        QMetaObject::connectSlotsByName(DialogHelp);
    } // setupUi

    void retranslateUi(QDialog *DialogHelp)
    {
        DialogHelp->setWindowTitle(QCoreApplication::translate("DialogHelp", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogHelp: public Ui_DialogHelp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGHELP_H
