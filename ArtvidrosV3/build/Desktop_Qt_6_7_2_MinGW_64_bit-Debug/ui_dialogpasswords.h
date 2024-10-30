/********************************************************************************
** Form generated from reading UI file 'dialogpasswords.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGPASSWORDS_H
#define UI_DIALOGPASSWORDS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogPasswords
{
public:
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_3;
    QLineEdit *lineEdit_password;
    QLabel *label_4;
    QLineEdit *lineEdit_new_password;
    QPushButton *pushButtonEntrar;
    QLabel *label;

    void setupUi(QDialog *DialogPasswords)
    {
        if (DialogPasswords->objectName().isEmpty())
            DialogPasswords->setObjectName("DialogPasswords");
        DialogPasswords->resize(505, 668);
        verticalLayoutWidget_3 = new QWidget(DialogPasswords);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(90, 280, 321, 213));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget_3);
        label_2->setObjectName("label_2");

        verticalLayout_3->addWidget(label_2);

        comboBox = new QComboBox(verticalLayoutWidget_3);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(comboBox);

        label_3 = new QLabel(verticalLayoutWidget_3);
        label_3->setObjectName("label_3");

        verticalLayout_3->addWidget(label_3);

        lineEdit_password = new QLineEdit(verticalLayoutWidget_3);
        lineEdit_password->setObjectName("lineEdit_password");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_password->sizePolicy().hasHeightForWidth());
        lineEdit_password->setSizePolicy(sizePolicy1);
        lineEdit_password->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        lineEdit_password->setContextMenuPolicy(Qt::ActionsContextMenu);
        lineEdit_password->setFrame(false);
        lineEdit_password->setEchoMode(QLineEdit::Password);

        verticalLayout_3->addWidget(lineEdit_password);

        label_4 = new QLabel(verticalLayoutWidget_3);
        label_4->setObjectName("label_4");

        verticalLayout_3->addWidget(label_4);

        lineEdit_new_password = new QLineEdit(verticalLayoutWidget_3);
        lineEdit_new_password->setObjectName("lineEdit_new_password");
        sizePolicy1.setHeightForWidth(lineEdit_new_password->sizePolicy().hasHeightForWidth());
        lineEdit_new_password->setSizePolicy(sizePolicy1);
        lineEdit_new_password->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        lineEdit_new_password->setContextMenuPolicy(Qt::ActionsContextMenu);
        lineEdit_new_password->setFrame(false);
        lineEdit_new_password->setEchoMode(QLineEdit::Password);

        verticalLayout_3->addWidget(lineEdit_new_password);

        pushButtonEntrar = new QPushButton(verticalLayoutWidget_3);
        pushButtonEntrar->setObjectName("pushButtonEntrar");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButtonEntrar->sizePolicy().hasHeightForWidth());
        pushButtonEntrar->setSizePolicy(sizePolicy2);

        verticalLayout_3->addWidget(pushButtonEntrar);

        label = new QLabel(DialogPasswords);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 461, 231));
        QFont font;
        font.setBold(true);
        label->setFont(font);
        label->setPixmap(QPixmap(QString::fromUtf8(":/imagens/AberturaArtvidros.png")));
        label->setScaledContents(true);

        retranslateUi(DialogPasswords);

        QMetaObject::connectSlotsByName(DialogPasswords);
    } // setupUi

    void retranslateUi(QDialog *DialogPasswords)
    {
        DialogPasswords->setWindowTitle(QCoreApplication::translate("DialogPasswords", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("DialogPasswords", "Tipo da Senha", nullptr));
        comboBox->setItemText(0, QString());
        comboBox->setItemText(1, QCoreApplication::translate("DialogPasswords", "INICIAL", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("DialogPasswords", "PRODUTO", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("DialogPasswords", "VENDA", nullptr));

        label_3->setText(QCoreApplication::translate("DialogPasswords", "Informe a Senha Atual", nullptr));
        label_4->setText(QCoreApplication::translate("DialogPasswords", "Informe a Nova Senha", nullptr));
        pushButtonEntrar->setText(QCoreApplication::translate("DialogPasswords", "Entrar", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogPasswords: public Ui_DialogPasswords {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGPASSWORDS_H
