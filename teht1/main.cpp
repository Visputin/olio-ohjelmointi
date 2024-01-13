#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

// name of function and variable to store the max number given in main()
int game(int maxnum){

    //variable for number of tries
    int triesNum = 0;

    // variable for the generated number
    int secretNum;

    // initialize random seed
    srand (time(NULL));

    // generate secret number
    secretNum = rand() % maxnum + 1;

    // do-while loop to test if the number guessed is bigger, smaller or equal to the secret number
    do {
        cout << "Guess the secret number!" << endl;
        cin >> maxnum;

        if (secretNum < maxnum){
            cout << "The number is smaller, guess again!" << endl << endl << endl;
            ++triesNum;
        }
        else if (secretNum > maxnum){
            cout << "The number is bigger, guess again!" << endl << endl << endl;
            ++triesNum;
        }
    }
    while (secretNum != maxnum);

    ++triesNum;

    cout << "Correct, congratulations! That took you " << triesNum << " tries." << endl << endl;

    return 0;
}

int main() {

    game(60);
}
