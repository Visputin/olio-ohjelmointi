#include "game.h"
#include <iostream>

Game::Game()
{
    cout<<"GAME CONSTRUCTOR: object initialized with " <<maxNumber<< " as a maximum value"<<endl;
}


Game::~Game()
{
    cout<<"GAME DESTRUCTOR: object cleared from stack memory"<<endl;
}

void Game::play()
{

}

