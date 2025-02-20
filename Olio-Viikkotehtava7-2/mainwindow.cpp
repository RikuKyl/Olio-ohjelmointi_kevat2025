#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->N0,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);
    connect(ui->N1,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);
    connect(ui->N2,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);
    connect(ui->N3,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);
    connect(ui->N4,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);
    connect(ui->N5,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);
    connect(ui->N6,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);
    connect(ui->N7,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);
    connect(ui->N8,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);
    connect(ui->N9,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);

    connect(ui->enter,&QPushButton::clicked,this,&MainWindow::enterClickHandler);
    connect(ui->clear,&QPushButton::clicked,this,&MainWindow::clearClickHandler);

    connect(ui->add0,&QPushButton::clicked,this,&MainWindow::addSubMulDivClickHandler);
    connect(ui->sub1,&QPushButton::clicked,this,&MainWindow::addSubMulDivClickHandler);
    connect(ui->mul2,&QPushButton::clicked,this,&MainWindow::addSubMulDivClickHandler);
    connect(ui->div3,&QPushButton::clicked,this,&MainWindow::addSubMulDivClickHandler);
    state = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickedHandler()
{
    QPushButton * button = qobject_cast<QPushButton *> (sender());
    QString numberName = button->objectName();
    qDebug()<<numberName.at(1);

    if(state == 0)
    {
        ui->num1->setText(ui->num1->text()+numberName.at(1));
    }
    else
    {
        ui->num2->setText(ui->num2->text()+numberName.at(1));
    }
}

void MainWindow::enterClickHandler()
{
    number1 = ui->num1->text();
    number2 = ui->num2->text();

    float num1 = number1.toFloat();
    float num2 = number2.toFloat();

    if(operand == 0)
    {
        result = num1 + num2;
    }

    else if(operand == 1)
    {
        result = num1 - num2;
    }

    else if(operand == 2)
    {
        result = num1 * num2;
    }

    else
    {
        result = num1 / num2;
    }


    ui->result->setText(QString::number(result));

}

void MainWindow::clearClickHandler()
{
    ui->num1->setText("");
    ui->num2->setText("");
    ui->result->setText("");
    number1 = 0; number2 = 0;
    state = 0;
}

void MainWindow::addSubMulDivClickHandler()
{
    state = 1;
    QPushButton * button = qobject_cast<QPushButton *> (sender());
    QString numberName = button->objectName();
    qDebug()<<numberName.at(3);

    QString N = numberName.at(3);
    bool ok;
    operand = N.toInt(&ok);
    qDebug()<<"ok = "<<ok;

}

void MainWindow::resetLineEdits()
{

}
