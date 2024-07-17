/********************************************************************************
** Form generated from reading UI file 'dialogjanelas.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGJANELAS_H
#define UI_DIALOGJANELAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogJanelas
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonJanela2Folhas;
    QPushButton *pushButtonJanelaDe4Folhas;
    QPushButton *pushButtonPivotante;
    QPushButton *pushButtonBascola;
    QLabel *label;

    void setupUi(QDialog *DialogJanelas)
    {
        if (DialogJanelas->objectName().isEmpty())
            DialogJanelas->setObjectName("DialogJanelas");
        DialogJanelas->resize(500, 600);
        layoutWidget = new QWidget(DialogJanelas);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(90, 260, 301, 241));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonJanela2Folhas = new QPushButton(layoutWidget);
        pushButtonJanela2Folhas->setObjectName("pushButtonJanela2Folhas");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonJanela2Folhas->sizePolicy().hasHeightForWidth());
        pushButtonJanela2Folhas->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        pushButtonJanela2Folhas->setFont(font);

        verticalLayout->addWidget(pushButtonJanela2Folhas);

        pushButtonJanelaDe4Folhas = new QPushButton(layoutWidget);
        pushButtonJanelaDe4Folhas->setObjectName("pushButtonJanelaDe4Folhas");
        sizePolicy.setHeightForWidth(pushButtonJanelaDe4Folhas->sizePolicy().hasHeightForWidth());
        pushButtonJanelaDe4Folhas->setSizePolicy(sizePolicy);
        pushButtonJanelaDe4Folhas->setFont(font);

        verticalLayout->addWidget(pushButtonJanelaDe4Folhas);

        pushButtonPivotante = new QPushButton(layoutWidget);
        pushButtonPivotante->setObjectName("pushButtonPivotante");
        sizePolicy.setHeightForWidth(pushButtonPivotante->sizePolicy().hasHeightForWidth());
        pushButtonPivotante->setSizePolicy(sizePolicy);
        pushButtonPivotante->setFont(font);

        verticalLayout->addWidget(pushButtonPivotante);

        pushButtonBascola = new QPushButton(layoutWidget);
        pushButtonBascola->setObjectName("pushButtonBascola");
        sizePolicy.setHeightForWidth(pushButtonBascola->sizePolicy().hasHeightForWidth());
        pushButtonBascola->setSizePolicy(sizePolicy);
        pushButtonBascola->setFont(font);

        verticalLayout->addWidget(pushButtonBascola);

        label = new QLabel(DialogJanelas);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 50, 321, 191));
        label->setPixmap(QPixmap(QString::fromUtf8(":/imagens/AberturaArtvidros.png")));
        label->setScaledContents(true);

        retranslateUi(DialogJanelas);

        QMetaObject::connectSlotsByName(DialogJanelas);
    } // setupUi

    void retranslateUi(QDialog *DialogJanelas)
    {
        DialogJanelas->setWindowTitle(QCoreApplication::translate("DialogJanelas", "Dialog", nullptr));
        pushButtonJanela2Folhas->setText(QCoreApplication::translate("DialogJanelas", "Janela de 2 Folhas", nullptr));
        pushButtonJanelaDe4Folhas->setText(QCoreApplication::translate("DialogJanelas", "Janela de 4 folhas", nullptr));
        pushButtonPivotante->setText(QCoreApplication::translate("DialogJanelas", "Pivotante", nullptr));
        pushButtonBascola->setText(QCoreApplication::translate("DialogJanelas", "B\303\241scula", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogJanelas: public Ui_DialogJanelas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGJANELAS_H
