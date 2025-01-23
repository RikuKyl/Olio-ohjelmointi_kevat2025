#include "chef.h"

Chef::Chef(string name) {
    chefName = name;
    cout<<"Chef name = "<<chefName<<endl;

}

Chef::~Chef()
{
    cout<<chefName<<" destruktori"<<endl;
}

string Chef::getName()
{
    return "";
}

int Chef::makeSalad(int ingredients)
{
    int saladPortions = ingredients / 5;
    cout<<chefName<< " made "<<saladPortions<<" salads from "<<ingredients<<" ingredients"<<endl;
    return saladPortions;
}

int Chef::makeSoup(int ingredients2)
{
    int soupPortions = ingredients2 / 3;
    cout<<chefName<<" made "<<soupPortions<<" soups from "<<ingredients2<<" ingredients"<<endl;
    return soupPortions;
}
