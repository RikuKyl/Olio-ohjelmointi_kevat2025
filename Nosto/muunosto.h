#ifndef MUUNOSTO_H
#define MUUNOSTO_H

#include <QDialog>

namespace Ui {
class muuNosto;
}

class muuNosto : public QDialog

{
    Q_OBJECT

public:
    explicit muuNosto(QWidget *parent = nullptr);
    ~muuNosto();
    bool nosto(int);
    void setSaldo(double *saldo);

signals:
    void sendNum(QString);

private slots:
    void numberClickedHandler();
    void enterClickHandler();
    void clearClickHandler();
    void takaisinHandler();

private:
    Ui::muuNosto *ui;
    double *saldo;
    QString number;
};

#endif // MUUNOSTO_H
