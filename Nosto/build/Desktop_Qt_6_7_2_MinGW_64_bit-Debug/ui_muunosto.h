/********************************************************************************
** Form generated from reading UI file 'muunosto.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUUNOSTO_H
#define UI_MUUNOSTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_muuNosto
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *N5;
    QLabel *label;
    QPushButton *N8;
    QPushButton *NPyyhi;
    QLineEdit *lineEdit;
    QPushButton *N4;
    QPushButton *N7;
    QPushButton *N9;
    QPushButton *N6;
    QPushButton *N0;
    QPushButton *N2;
    QPushButton *N1;
    QPushButton *N3;
    QPushButton *NOK;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *takaisin;

    void setupUi(QDialog *muuNosto)
    {
        if (muuNosto->objectName().isEmpty())
            muuNosto->setObjectName("muuNosto");
        muuNosto->resize(575, 375);
        gridLayoutWidget = new QWidget(muuNosto);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(89, 60, 394, 231));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        N5 = new QPushButton(gridLayoutWidget);
        N5->setObjectName("N5");

        gridLayout->addWidget(N5, 4, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(24);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 3);

        N8 = new QPushButton(gridLayoutWidget);
        N8->setObjectName("N8");

        gridLayout->addWidget(N8, 5, 1, 1, 1);

        NPyyhi = new QPushButton(gridLayoutWidget);
        NPyyhi->setObjectName("NPyyhi");

        gridLayout->addWidget(NPyyhi, 6, 0, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 1, 0, 1, 3);

        N4 = new QPushButton(gridLayoutWidget);
        N4->setObjectName("N4");

        gridLayout->addWidget(N4, 4, 0, 1, 1);

        N7 = new QPushButton(gridLayoutWidget);
        N7->setObjectName("N7");

        gridLayout->addWidget(N7, 5, 0, 1, 1);

        N9 = new QPushButton(gridLayoutWidget);
        N9->setObjectName("N9");

        gridLayout->addWidget(N9, 5, 2, 1, 1);

        N6 = new QPushButton(gridLayoutWidget);
        N6->setObjectName("N6");

        gridLayout->addWidget(N6, 4, 2, 1, 1);

        N0 = new QPushButton(gridLayoutWidget);
        N0->setObjectName("N0");

        gridLayout->addWidget(N0, 6, 1, 1, 1);

        N2 = new QPushButton(gridLayoutWidget);
        N2->setObjectName("N2");

        gridLayout->addWidget(N2, 2, 1, 1, 1);

        N1 = new QPushButton(gridLayoutWidget);
        N1->setObjectName("N1");

        gridLayout->addWidget(N1, 2, 0, 1, 1);

        N3 = new QPushButton(gridLayoutWidget);
        N3->setObjectName("N3");

        gridLayout->addWidget(N3, 2, 2, 1, 1);

        NOK = new QPushButton(gridLayoutWidget);
        NOK->setObjectName("NOK");

        gridLayout->addWidget(NOK, 6, 2, 1, 1);

        verticalLayoutWidget = new QWidget(muuNosto);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(90, 300, 391, 31));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        takaisin = new QPushButton(verticalLayoutWidget);
        takaisin->setObjectName("takaisin");

        verticalLayout->addWidget(takaisin);


        retranslateUi(muuNosto);

        QMetaObject::connectSlotsByName(muuNosto);
    } // setupUi

    void retranslateUi(QDialog *muuNosto)
    {
        muuNosto->setWindowTitle(QCoreApplication::translate("muuNosto", "Dialog", nullptr));
        N5->setText(QCoreApplication::translate("muuNosto", "5", nullptr));
        label->setText(QCoreApplication::translate("muuNosto", "Kirjoita nostettava summa", nullptr));
        N8->setText(QCoreApplication::translate("muuNosto", "8", nullptr));
        NPyyhi->setText(QCoreApplication::translate("muuNosto", "Pyyhi", nullptr));
        N4->setText(QCoreApplication::translate("muuNosto", "4", nullptr));
        N7->setText(QCoreApplication::translate("muuNosto", "7", nullptr));
        N9->setText(QCoreApplication::translate("muuNosto", "9", nullptr));
        N6->setText(QCoreApplication::translate("muuNosto", "6", nullptr));
        N0->setText(QCoreApplication::translate("muuNosto", "0", nullptr));
        N2->setText(QCoreApplication::translate("muuNosto", "2", nullptr));
        N1->setText(QCoreApplication::translate("muuNosto", "1", nullptr));
        N3->setText(QCoreApplication::translate("muuNosto", "3", nullptr));
        NOK->setText(QCoreApplication::translate("muuNosto", "OK", nullptr));
        takaisin->setText(QCoreApplication::translate("muuNosto", "Takaisin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class muuNosto: public Ui_muuNosto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUUNOSTO_H
