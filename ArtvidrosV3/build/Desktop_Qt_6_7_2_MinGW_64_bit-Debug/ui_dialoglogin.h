/********************************************************************************
** Form generated from reading UI file 'dialoglogin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGLOGIN_H
#define UI_DIALOGLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogLogin
{
public:
    QPushButton *pushButtonEntrar;
    QLabel *label_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEditNome;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEditSenha;

    void setupUi(QDialog *DialogLogin)
    {
        if (DialogLogin->objectName().isEmpty())
            DialogLogin->setObjectName("DialogLogin");
        DialogLogin->resize(420, 450);
        pushButtonEntrar = new QPushButton(DialogLogin);
        pushButtonEntrar->setObjectName("pushButtonEntrar");
        pushButtonEntrar->setGeometry(QRect(120, 360, 171, 51));
        label_3 = new QLabel(DialogLogin);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(-10, -20, 461, 231));
        QFont font;
        font.setBold(true);
        label_3->setFont(font);
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/imagens/AberturaArtvidros.png")));
        label_3->setScaledContents(true);
        widget = new QWidget(DialogLogin);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(60, 200, 301, 121));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        lineEditNome = new QLineEdit(widget);
        lineEditNome->setObjectName("lineEditNome");

        horizontalLayout_2->addWidget(lineEditNome);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        lineEditSenha = new QLineEdit(widget);
        lineEditSenha->setObjectName("lineEditSenha");

        horizontalLayout->addWidget(lineEditSenha);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogLogin);

        QMetaObject::connectSlotsByName(DialogLogin);
    } // setupUi

    void retranslateUi(QDialog *DialogLogin)
    {
        DialogLogin->setWindowTitle(QCoreApplication::translate("DialogLogin", "Dialog", nullptr));
        pushButtonEntrar->setText(QCoreApplication::translate("DialogLogin", "Entrar", nullptr));
        label_3->setText(QString());
        label->setText(QCoreApplication::translate("DialogLogin", "Nome", nullptr));
        label_2->setText(QCoreApplication::translate("DialogLogin", "Senha", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogLogin: public Ui_DialogLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGLOGIN_H
