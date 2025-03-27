#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->E20,&QPushButton::clicked,this,&MainWindow::handleMoney20);
    connect(ui->E50,&QPushButton::clicked,this,&MainWindow::handleMoney50);
    connect(ui->E100,&QPushButton::clicked,this,&MainWindow::handleMoney100);
    connect(ui->EMUU,&QPushButton::clicked,this,&MainWindow::handleMuu);
    connect(ui->Takaisin,&QPushButton::clicked,this,&MainWindow::backHandle);

    muunosto = new muuNosto(this);
    muunosto->setSaldo(&saldo);
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::nosto(int nostoMaara)
{
    double valisaldo = saldo - nostoMaara;
    if (valisaldo >= 0)
    {
        saldo = valisaldo;
        QMessageBox::information(this, "Nosto","Nosto tehty onnistuneesti");
        ui->label->setText("Tilitä nostettu " + QString::number(nostoMaara) + " euroa");
        qDebug()<<"Nostetaan tililta "<<nostoMaara<<" euroa";
        return true;
    }

    else
    {
        ui->label->setText("Nosto epäonnistui");
        qDebug("Nosto epaonnistui: tilin saldo ei riita");
        return false;
    }
}

void MainWindow::handleMoney20()
{
    nosto(20);
}

void MainWindow::handleMoney50()
{
    nosto(50);
}

void MainWindow::handleMoney100()
{
    nosto(100);
}

void MainWindow::handleMuu()
{
    muunosto->open();
}

void MainWindow::backHandle()
{
    this->close();
}
