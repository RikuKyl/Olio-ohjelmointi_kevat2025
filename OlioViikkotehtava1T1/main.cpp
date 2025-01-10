#include <iostream>
#include <cstdlib>
#include <ctime>

int game(int maxnum);

int main()
{
    int lkm = game(20);
    std::cout<<"Arvausten lukumaara: "<<lkm<<std::endl<<std::endl;

    return 0;
}

int game(int maxnum) {
    srand(time(NULL));
    int randomNumero = (rand() % maxnum)+1;
    int kayttajaNumero;
    int arvaustenMaara = 0;
    //std::cout<<randomNumero<<std::endl;

    while (randomNumero != kayttajaNumero) {
        std::cout<<"Arvaa luku valilta 1-20"<<std::endl;
        std::cin >> kayttajaNumero;
        arvaustenMaara++;

        if (randomNumero < kayttajaNumero) {
            std::cout<<"Arvottu luku on pienempi"<<std::endl << std::endl;
        }

        else if (randomNumero > kayttajaNumero) {
            std::cout<<"Arvottu luku on suurempi"<<std::endl<< std::endl;
        }
    }

    if (randomNumero == kayttajaNumero) {
        std::cout<<"Oikea vastaus"<<std::endl;

    }
return arvaustenMaara;
}
