/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *sub1;
    QPushButton *N0;
    QPushButton *add0;
    QPushButton *mul2;
    QPushButton *N2;
    QPushButton *N8;
    QPushButton *N4;
    QPushButton *N6;
    QPushButton *N1;
    QPushButton *N3;
    QPushButton *N5;
    QPushButton *enter;
    QPushButton *div3;
    QPushButton *clear;
    QPushButton *N7;
    QPushButton *N9;
    QLineEdit *num1;
    QLineEdit *num2;
    QLineEdit *result;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(60, 50, 334, 151));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        sub1 = new QPushButton(gridLayoutWidget);
        sub1->setObjectName("sub1");

        gridLayout->addWidget(sub1, 1, 3, 1, 1);

        N0 = new QPushButton(gridLayoutWidget);
        N0->setObjectName("N0");

        gridLayout->addWidget(N0, 3, 0, 1, 1);

        add0 = new QPushButton(gridLayoutWidget);
        add0->setObjectName("add0");

        gridLayout->addWidget(add0, 0, 3, 1, 1);

        mul2 = new QPushButton(gridLayoutWidget);
        mul2->setObjectName("mul2");

        gridLayout->addWidget(mul2, 2, 3, 1, 1);

        N2 = new QPushButton(gridLayoutWidget);
        N2->setObjectName("N2");

        gridLayout->addWidget(N2, 0, 1, 1, 1);

        N8 = new QPushButton(gridLayoutWidget);
        N8->setObjectName("N8");

        gridLayout->addWidget(N8, 2, 1, 1, 1);

        N4 = new QPushButton(gridLayoutWidget);
        N4->setObjectName("N4");

        gridLayout->addWidget(N4, 1, 0, 1, 1);

        N6 = new QPushButton(gridLayoutWidget);
        N6->setObjectName("N6");

        gridLayout->addWidget(N6, 1, 2, 1, 1);

        N1 = new QPushButton(gridLayoutWidget);
        N1->setObjectName("N1");

        gridLayout->addWidget(N1, 0, 0, 1, 1);

        N3 = new QPushButton(gridLayoutWidget);
        N3->setObjectName("N3");

        gridLayout->addWidget(N3, 0, 2, 1, 1);

        N5 = new QPushButton(gridLayoutWidget);
        N5->setObjectName("N5");

        gridLayout->addWidget(N5, 1, 1, 1, 1);

        enter = new QPushButton(gridLayoutWidget);
        enter->setObjectName("enter");

        gridLayout->addWidget(enter, 3, 2, 1, 1);

        div3 = new QPushButton(gridLayoutWidget);
        div3->setObjectName("div3");

        gridLayout->addWidget(div3, 3, 3, 1, 1);

        clear = new QPushButton(gridLayoutWidget);
        clear->setObjectName("clear");

        gridLayout->addWidget(clear, 3, 1, 1, 1);

        N7 = new QPushButton(gridLayoutWidget);
        N7->setObjectName("N7");

        gridLayout->addWidget(N7, 2, 0, 1, 1);

        N9 = new QPushButton(gridLayoutWidget);
        N9->setObjectName("N9");

        gridLayout->addWidget(N9, 2, 2, 1, 1);

        num1 = new QLineEdit(centralwidget);
        num1->setObjectName("num1");
        num1->setGeometry(QRect(60, 30, 101, 20));
        num2 = new QLineEdit(centralwidget);
        num2->setObjectName("num2");
        num2->setGeometry(QRect(170, 30, 101, 20));
        result = new QLineEdit(centralwidget);
        result->setObjectName("result");
        result->setGeometry(QRect(280, 30, 101, 20));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 10, 61, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(200, 10, 61, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(310, 10, 51, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        sub1->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        N0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        add0->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        mul2->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        N2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        N8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        N4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        N6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        N1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        N3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        N5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        enter->setText(QCoreApplication::translate("MainWindow", "enter", nullptr));
        div3->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        N7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        N9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Number 1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Number 2", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
