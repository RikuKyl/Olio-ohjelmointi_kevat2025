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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *E100;
    QPushButton *EMUU;
    QPushButton *E20;
    QPushButton *E50;
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *Takaisin;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(589, 340);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(24, 10, 531, 231));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        E100 = new QPushButton(gridLayoutWidget);
        E100->setObjectName("E100");

        gridLayout->addWidget(E100, 3, 0, 1, 1);

        EMUU = new QPushButton(gridLayoutWidget);
        EMUU->setObjectName("EMUU");

        gridLayout->addWidget(EMUU, 3, 1, 1, 1);

        E20 = new QPushButton(gridLayoutWidget);
        E20->setObjectName("E20");

        gridLayout->addWidget(E20, 2, 0, 1, 1);

        E50 = new QPushButton(gridLayoutWidget);
        E50->setObjectName("E50");

        gridLayout->addWidget(E50, 2, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(28);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 2);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(30, 250, 521, 31));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Takaisin = new QPushButton(verticalLayoutWidget);
        Takaisin->setObjectName("Takaisin");

        verticalLayout->addWidget(Takaisin);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 589, 21));
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
        E100->setText(QCoreApplication::translate("MainWindow", "100\342\202\254", nullptr));
        EMUU->setText(QCoreApplication::translate("MainWindow", "Muu m\303\244\303\244r\303\244", nullptr));
        E20->setText(QCoreApplication::translate("MainWindow", "20\342\202\254", nullptr));
        E50->setText(QCoreApplication::translate("MainWindow", "50\342\202\254", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Valitse nostettava summa", nullptr));
        Takaisin->setText(QCoreApplication::translate("MainWindow", "Takaisin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
