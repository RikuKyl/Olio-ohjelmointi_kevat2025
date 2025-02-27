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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *P1;
    QPushButton *P2;
    QPushButton *Aika1;
    QPushButton *Aika2;
    QPushButton *Start;
    QPushButton *Stop;
    QLabel *label;
    QProgressBar *progressBar;
    QProgressBar *progressBar_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        P1 = new QPushButton(centralwidget);
        P1->setObjectName("P1");
        P1->setGeometry(QRect(110, 60, 80, 18));
        P2 = new QPushButton(centralwidget);
        P2->setObjectName("P2");
        P2->setGeometry(QRect(220, 60, 80, 18));
        Aika1 = new QPushButton(centralwidget);
        Aika1->setObjectName("Aika1");
        Aika1->setGeometry(QRect(110, 100, 80, 18));
        Aika2 = new QPushButton(centralwidget);
        Aika2->setObjectName("Aika2");
        Aika2->setGeometry(QRect(220, 100, 80, 18));
        Start = new QPushButton(centralwidget);
        Start->setObjectName("Start");
        Start->setGeometry(QRect(110, 130, 80, 18));
        Stop = new QPushButton(centralwidget);
        Stop->setObjectName("Stop");
        Stop->setGeometry(QRect(220, 130, 80, 18));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 80, 231, 20));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(70, 30, 118, 23));
        progressBar->setValue(24);
        progressBar_2 = new QProgressBar(centralwidget);
        progressBar_2->setObjectName("progressBar_2");
        progressBar_2->setGeometry(QRect(220, 30, 118, 23));
        progressBar_2->setValue(24);
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
        P1->setText(QCoreApplication::translate("MainWindow", "Swich Player", nullptr));
        P2->setText(QCoreApplication::translate("MainWindow", "Swich Player", nullptr));
        Aika1->setText(QCoreApplication::translate("MainWindow", "120 sec", nullptr));
        Aika2->setText(QCoreApplication::translate("MainWindow", "5 min", nullptr));
        Start->setText(QCoreApplication::translate("MainWindow", "Start Game", nullptr));
        Stop->setText(QCoreApplication::translate("MainWindow", "Stop Game", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Select playtime and press start game!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
