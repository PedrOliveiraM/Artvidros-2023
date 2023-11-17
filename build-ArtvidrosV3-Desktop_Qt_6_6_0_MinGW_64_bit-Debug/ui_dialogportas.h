/********************************************************************************
** Form generated from reading UI file 'dialogportas.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGPORTAS_H
#define UI_DIALOGPORTAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogPortas
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonPortaDeAbrir;
    QPushButton *pushButtonPortaDeCorrer;
    QPushButton *pushButtonPortaDe2Folhas;
    QPushButton *pushButtonPortaDe4Folhas;

    void setupUi(QDialog *DialogPortas)
    {
        if (DialogPortas->objectName().isEmpty())
            DialogPortas->setObjectName("DialogPortas");
        DialogPortas->resize(500, 600);
        label = new QLabel(DialogPortas);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 30, 321, 191));
        label->setPixmap(QPixmap(QString::fromUtf8(":/imagens/AberturaArtvidros.png")));
        label->setScaledContents(true);
        layoutWidget = new QWidget(DialogPortas);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(90, 240, 301, 241));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonPortaDeAbrir = new QPushButton(layoutWidget);
        pushButtonPortaDeAbrir->setObjectName("pushButtonPortaDeAbrir");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonPortaDeAbrir->sizePolicy().hasHeightForWidth());
        pushButtonPortaDeAbrir->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        pushButtonPortaDeAbrir->setFont(font);

        verticalLayout->addWidget(pushButtonPortaDeAbrir);

        pushButtonPortaDeCorrer = new QPushButton(layoutWidget);
        pushButtonPortaDeCorrer->setObjectName("pushButtonPortaDeCorrer");
        sizePolicy.setHeightForWidth(pushButtonPortaDeCorrer->sizePolicy().hasHeightForWidth());
        pushButtonPortaDeCorrer->setSizePolicy(sizePolicy);
        pushButtonPortaDeCorrer->setFont(font);

        verticalLayout->addWidget(pushButtonPortaDeCorrer);

        pushButtonPortaDe2Folhas = new QPushButton(layoutWidget);
        pushButtonPortaDe2Folhas->setObjectName("pushButtonPortaDe2Folhas");
        sizePolicy.setHeightForWidth(pushButtonPortaDe2Folhas->sizePolicy().hasHeightForWidth());
        pushButtonPortaDe2Folhas->setSizePolicy(sizePolicy);
        pushButtonPortaDe2Folhas->setFont(font);

        verticalLayout->addWidget(pushButtonPortaDe2Folhas);

        pushButtonPortaDe4Folhas = new QPushButton(layoutWidget);
        pushButtonPortaDe4Folhas->setObjectName("pushButtonPortaDe4Folhas");
        sizePolicy.setHeightForWidth(pushButtonPortaDe4Folhas->sizePolicy().hasHeightForWidth());
        pushButtonPortaDe4Folhas->setSizePolicy(sizePolicy);
        pushButtonPortaDe4Folhas->setFont(font);

        verticalLayout->addWidget(pushButtonPortaDe4Folhas);


        retranslateUi(DialogPortas);

        QMetaObject::connectSlotsByName(DialogPortas);
    } // setupUi

    void retranslateUi(QDialog *DialogPortas)
    {
        DialogPortas->setWindowTitle(QCoreApplication::translate("DialogPortas", "Dialog", nullptr));
        label->setText(QString());
        pushButtonPortaDeAbrir->setText(QCoreApplication::translate("DialogPortas", "Porta de Abrir", nullptr));
        pushButtonPortaDeCorrer->setText(QCoreApplication::translate("DialogPortas", "Porta de Correr 1 Folha", nullptr));
        pushButtonPortaDe2Folhas->setText(QCoreApplication::translate("DialogPortas", "Porta de 2 Folhas", nullptr));
        pushButtonPortaDe4Folhas->setText(QCoreApplication::translate("DialogPortas", "Porta de 4 folhas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogPortas: public Ui_DialogPortas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGPORTAS_H
