#include "game.h"
#include <iostream>
using namespace std;

Game::Game(int maxNum)
{
    srand(time(NULL));
    maxNumber = maxNum;
    randomNumber = rand() % maxNumber + 1;
    //cout <<"randomNumber = " << randomNumber  << endl;

}

Game::~Game()
{
    cout << "" << endl;
}

void Game::play()
{
     numOfGuesses = 0;
    while (randomNumber != playerGuess) {
        cout<<"Arvaa luku valilta 1-"<< maxNumber << endl;
        cin >> playerGuess;
        numOfGuesses++;

        if (randomNumber < playerGuess) {
            cout<<"Arvottu luku on pienempi"<<endl << endl;
        }

        else if (randomNumber > playerGuess) {
            cout<<"Arvottu luku on suurempi"<< endl<< endl;
        }
    }

    if (randomNumber == playerGuess) {
        printGameResult();
    }
}

void Game::printGameResult()
{
    cout<<"Oikea vastaus oli: " << randomNumber << endl;
    cout<<"Arvausten maara: " << numOfGuesses << endl;
}
