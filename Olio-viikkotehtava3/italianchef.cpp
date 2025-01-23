#include "italianchef.h"

ItalianChef::ItalianChef(string name) : Chef(name)
{

}

ItalianChef::~ItalianChef()
{

}

bool ItalianChef::askSecret(string passw, int w, int f)
{
    if(password.compare(passw) == 0){
        cout<<"Password correct"<<endl;
        makepizza(w,f);
        return true;
    }
    else {
        cout<<"Password incorrect"<<endl;
        return false;
    }
}

int ItalianChef::makepizza(int water, int flour)
{
    int pizzaPortion = water/5 & flour/5;
    cout<<chefName<<" makes "<<pizzaPortion<<" pizzas from "<<flour<<" flour and "<<water<<" water"<<endl;
    return pizzaPortion;
}
