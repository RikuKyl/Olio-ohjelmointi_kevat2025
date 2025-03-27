#include "muunosto.h"
#include "ui_muunosto.h"
#include "mainwindow.h"
#include <QDebug>
#include <QMessageBox>

muuNosto::muuNosto(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::muuNosto)
{
    ui->setupUi(this);
    connect(ui->N0,&QPushButton::clicked,this,&muuNosto::numberClickedHandler);
    connect(ui->N1,&QPushButton::clicked,this,&muuNosto::numberClickedHandler);
    connect(ui->N2,&QPushButton::clicked,this,&muuNosto::numberClickedHandler);
    connect(ui->N3,&QPushButton::clicked,this,&muuNosto::numberClickedHandler);
    connect(ui->N4,&QPushButton::clicked,this,&muuNosto::numberClickedHandler);
    connect(ui->N5,&QPushButton::clicked,this,&muuNosto::numberClickedHandler);
    connect(ui->N6,&QPushButton::clicked,this,&muuNosto::numberClickedHandler);
    connect(ui->N7,&QPushButton::clicked,this,&muuNosto::numberClickedHandler);
    connect(ui->N8,&QPushButton::clicked,this,&muuNosto::numberClickedHandler);
    connect(ui->N9,&QPushButton::clicked,this,&muuNosto::numberClickedHandler);
    connect(ui->NOK,&QPushButton::clicked,this,&muuNosto::enterClickHandler);
    connect(ui->NPyyhi,&QPushButton::clicked,this,&muuNosto::clearClickHandler);
    connect(ui->takaisin,&QPushButton::clicked,this,&muuNosto::takaisinHandler);
}

muuNosto::~muuNosto()
{
    delete ui;
}

void muuNosto::numberClickedHandler()
{
    QPushButton * button = qobject_cast<QPushButton *> (sender());
    QString numberName = button->objectName();
    qDebug()<<numberName.at(1);

    ui->lineEdit->setText(ui->lineEdit->text()+numberName.at(1));
}

void muuNosto::enterClickHandler()
{
    QString number = ui->lineEdit->text();
    emit sendNum(number);
    nosto(ui->lineEdit->text().toDouble());

}

void muuNosto::clearClickHandler()
{
    ui->lineEdit->setText("");
}

void muuNosto::takaisinHandler()
{
    this->close();
}

bool muuNosto::nosto(int nostoMaara)
{

    double valisaldo = *saldo - nostoMaara;
    if (valisaldo >= 0 && nostoMaara % 5 == 0)
    {
        *saldo = valisaldo;
        ui->label->setText("Tilitä nostettu " + QString::number(nostoMaara) + " euroa");
        qDebug()<<"Nostetaan tililta "<<nostoMaara<<" euroa";
        QMessageBox::information(this, "Nosto","Nosto tehty onnistuneesti");
        return true;
    }

    else
    {
        ui->label->setText("Nosto epäonnistui");
        qDebug("Nosto epaonnistui: tilin saldo ei riita tai nostoa ei saa seteleinä");
        return false;
    }
}

void muuNosto::setSaldo(double *saldo)
{
    this->saldo = saldo;
}
