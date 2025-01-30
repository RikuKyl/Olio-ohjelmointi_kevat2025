#include "pankkitili.h"

Pankkitili::Pankkitili(string name) {
    omistaja = name;
    //cout<<"Luotiin pankkitili "<<omistaja<<"lle"<<endl;

}

double Pankkitili::getBalance()
{

    return saldo;
}

bool Pankkitili::deposit(double talletus)
{
    double valisaldo = saldo + talletus;

    if (talletus >= 0){
    cout<<"Pankkitili: Talletetaan tilille "<<talletus<<" euroa"<<endl;
    saldo = valisaldo;
    return true;
    }
    else {
        cout<<"Talletus epaonnistui"<<endl;
    return false;
    }
}

bool Pankkitili::withdraw(double nosto)
{
    double valisaldo = saldo - nosto;

    if (valisaldo >= 0) {
    cout<<"Pankkitili: Nostetaan tilitlta "<<nosto<<" euroa"<<endl;
        saldo = valisaldo;
    return true;
    }

    else {
        cout<<"Nosto epaonnistui"<<endl;
    return false;
    }
}

