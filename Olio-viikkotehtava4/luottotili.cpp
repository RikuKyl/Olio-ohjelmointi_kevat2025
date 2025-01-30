#include "luottotili.h"

Luottotili::Luottotili(string name, double lr) : Pankkitili(name)  {
    luottoRaja = lr;

}

bool Luottotili::deposit(double velanmaksu)
{
    double valisaldo = saldo + velanmaksu;

    if (valisaldo < 0){
        cout<<"Luottotili: Maksetaan luottotilin velkoja  "<<velanmaksu<<" euroa"<<endl;
        saldo = valisaldo;
        return true;
    }
    else {
        cout<<"Luoton maksu epaonnistui"<<endl;
        return false;
}
}

bool Luottotili::withdraw(double nosto2)
{
    double valisaldo = saldo - nosto2;
    double valiluotto = luottoRaja - nosto2;

    if (valisaldo <= luottoRaja) {
        cout<<"Luottotili: Nostetaan luottotilitlta "<<nosto2<<" euroa"<<endl;
        saldo = valisaldo;
        luottoRaja = valiluotto;
        return true;
    }

    else {
        cout<<"Luoton nosto epaonnistui"<<endl;
        return false;
    }
}
