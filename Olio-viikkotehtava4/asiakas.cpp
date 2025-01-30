#include "asiakas.h"


Asiakas::Asiakas(string nimi, double lr) : nimi(nimi), kayttotili(nimi), luottotili(nimi,lr) {
    cout<<"Luotiin pankkitili "<<nimi<<"lle"<<endl;
    cout<<"Luotiin luottotili "<<nimi<<"lle, luottoraja "<<lr<<" euroa"<<endl;
    cout<<"Luotiin asiakkuus "<<nimi<<"lle"<<endl;
}

string Asiakas::getNimi()
{

    return nimi;
}

void Asiakas::showSaldo()
{
    cout<<"Pankkitilin saldo: "<<kayttotili.getBalance()<<endl;
    cout<<"Luottotilin saldo: "<<luottotili.getBalance()<<endl;

}

bool Asiakas::talletus(double summa)
{
    kayttotili.deposit(summa);

    return true;
}

bool Asiakas::nosto(double erotus)
{
    kayttotili.withdraw(erotus);
    return true;
}

bool Asiakas::luotonMaksu(double lSumma)
{
    luottotili.deposit(lSumma);
    return true;
}

bool Asiakas::luotonNosto(double lErotus)
{
    luottotili.withdraw(lErotus);
    return true;

}

bool Asiakas::tiliSiirto(double siirrettavaR, Asiakas &toinenA )
{

    if (siirrettavaR > 0 && siirrettavaR <= kayttotili.getBalance()){

        cout<<getNimi()<<" siirtaa "<<siirrettavaR<<" euroa "<<toinenA.getNimi()<<"n tilille"<<endl;
        kayttotili.withdraw(siirrettavaR);
        toinenA.kayttotili.deposit(siirrettavaR);

        return true;
    }
    else {
        cout<<"Tilisiirto epaonnistui"<<endl;
        return false;
}
}
