#include "game.h"
#include <iostream>
using namespace std;

Game::Game(int maxNum)
{
    srand(time(0));
    randomNumber = (rand()%maxNum) + 1;
    cout<<"GAME CONSTRUCTOR: object initialized with "<<maxNum<<" as a maximum value"<<endl;
    maxNumber = maxNum;
}

Game::~Game()
{
    cout<<"GAME DESTRUCTOR: object cleared from stack memory"<<endl;
}

void Game::play()
{
    do {
        cout<<"Give your guess between 1-"<<maxNumber<<endl;
        cin>>playerGuess;
        numOfGuesses++;
        if (playerGuess < randomNumber)
            {
            cout<<"Your guess is too small"<<endl;
            }
        else if (playerGuess > randomNumber)
            {
            cout<<"Your guess is too big"<<endl;
            }
        }
    while (playerGuess != randomNumber);
    printGameResult();
}

void Game::printGameResult()
{
        cout<<"Your guess is right = "<<randomNumber<<" with "<<numOfGuesses<<" guesses"<<endl;
}
