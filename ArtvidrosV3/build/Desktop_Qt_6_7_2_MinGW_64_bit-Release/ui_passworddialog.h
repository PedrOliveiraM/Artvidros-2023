/********************************************************************************
** Form generated from reading UI file 'passworddialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORDDIALOG_H
#define UI_PASSWORDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PasswordDialog
{
public:
    QLabel *label;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_password;
    QPushButton *pushButtonEntrar;

    void setupUi(QDialog *PasswordDialog)
    {
        if (PasswordDialog->objectName().isEmpty())
            PasswordDialog->setObjectName("PasswordDialog");
        PasswordDialog->resize(438, 433);
        label = new QLabel(PasswordDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 10, 461, 231));
        QFont font;
        font.setBold(true);
        label->setFont(font);
        label->setPixmap(QPixmap(QString::fromUtf8(":/imagens/AberturaArtvidros.png")));
        label->setScaledContents(true);
        verticalLayoutWidget_3 = new QWidget(PasswordDialog);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(90, 250, 271, 91));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget_3);
        label_3->setObjectName("label_3");
        label_3->setFont(font);
        label_3->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_3->addWidget(label_3);

        lineEdit_password = new QLineEdit(verticalLayoutWidget_3);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        lineEdit_password->setContextMenuPolicy(Qt::ActionsContextMenu);
        lineEdit_password->setFrame(false);
        lineEdit_password->setEchoMode(QLineEdit::Password);

        verticalLayout_3->addWidget(lineEdit_password);

        pushButtonEntrar = new QPushButton(verticalLayoutWidget_3);
        pushButtonEntrar->setObjectName("pushButtonEntrar");

        verticalLayout_3->addWidget(pushButtonEntrar);


        retranslateUi(PasswordDialog);

        QMetaObject::connectSlotsByName(PasswordDialog);
    } // setupUi

    void retranslateUi(QDialog *PasswordDialog)
    {
        PasswordDialog->setWindowTitle(QCoreApplication::translate("PasswordDialog", "Dialog", nullptr));
        label->setText(QString());
        label_3->setText(QCoreApplication::translate("PasswordDialog", "Informe a senha para entrar", nullptr));
        pushButtonEntrar->setText(QCoreApplication::translate("PasswordDialog", "Entrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PasswordDialog: public Ui_PasswordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORDDIALOG_H
