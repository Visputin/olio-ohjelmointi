#ifndef GAME_H
#define GAME_H

<<<<<<< HEAD
class Game
{
public:
    Game();
=======

class Game
{
public:
    Game(int maxNum);
>>>>>>> a53a101a6f402bf2d0b605003d9197a50dc407d3
    ~Game();
    void play();
private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
<<<<<<< HEAD
    int numOfGuess;
=======
    int numOfGuesses;
>>>>>>> a53a101a6f402bf2d0b605003d9197a50dc407d3
    void printGameResult();
};

#endif // GAME_H
