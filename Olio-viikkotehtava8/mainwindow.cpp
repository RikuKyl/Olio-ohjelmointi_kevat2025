#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pQTimer = new QTimer(this);
    connect(pQTimer,&QTimer::timeout,this,&MainWindow::timerHandler);
    connect(ui->P1,&QPushButton::clicked,this,&MainWindow::updateProgressBar);
    connect(ui->P2,&QPushButton::clicked,this,&MainWindow::updateProgressBar);
    connect(ui->Aika1,&QPushButton::clicked,this,&MainWindow::gameTimeHandler);
    connect(ui->Aika2,&QPushButton::clicked,this,&MainWindow::gameTimeHandler2);
    connect(ui->Start,&QPushButton::clicked,this,&MainWindow::startHandler);
    connect(ui->Stop,&QPushButton::clicked,this,&MainWindow::stopHandler);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timeout()
{

}

void MainWindow::updateProgressBar()
{
    if (currentPlayer == 1)
    {
        currentPlayer = 2;
    }
    else
    {
        currentPlayer = 1;
    }

    ui->progressBar->setValue(player1Time);
    ui->progressBar_2->setValue(player2Time);
}

void MainWindow::setGameInfoText(QString s, short n = -1)
{
    if (n == -1)
    {
        ui->label->setText(s);
    }
    else {
        ui->label->setText("Player " + QString::number(n) + " won!");
    }
}

void MainWindow::startHandler()
{
    qDebug("Startissa ollaan");
    pQTimer->start(1000);
    currentPlayer = 1;
    setGameInfoText("Game ongoing");
}

void MainWindow::stopHandler()
{
    pQTimer->stop();
    setGameInfoText("New game via start button");
}

void MainWindow::timerHandler()
{
    if (currentPlayer == 1) {
        player1Time--;

        if ( player1Time<=0)
        {
            pQTimer->stop();
            setGameInfoText("",2);
        }
    }
    else
    {
        player2Time--;

        if ( player2Time<=0)
        {
            pQTimer->stop();
            setGameInfoText("",1);
        }
    }
    ui->progressBar->setValue(player1Time);
    ui->progressBar_2->setValue(player2Time);

}

void MainWindow::gameTimeHandler()
{
    gameTime = 120;
    player1Time = gameTime;
    player2Time = gameTime;
    ui->progressBar->setRange(0,120);
    ui->progressBar_2->setRange(0,120);
    ui->progressBar->setValue(player1Time);
    ui->progressBar_2->setValue(player2Time);
    setGameInfoText("Ready to play");
}

void MainWindow::gameTimeHandler2()
{
    gameTime = 300;
    player1Time = gameTime;
    player2Time = gameTime;
    ui->progressBar->setRange(0,300);
    ui->progressBar_2->setRange(0,300);
    ui->progressBar->setValue(player1Time);
    ui->progressBar_2->setValue(player2Time);
    setGameInfoText("Ready to play");
}

