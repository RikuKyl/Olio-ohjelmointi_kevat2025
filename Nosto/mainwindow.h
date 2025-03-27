#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "muunosto.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool nosto(int);
    double saldo = 170;

private slots:
    void handleMoney20();
    void handleMoney50();
    void handleMoney100();
    void handleMuu();
    void backHandle();


private:
    Ui::MainWindow *ui;
    muuNosto * muunosto;

};
#endif // MAINWINDOW_H
