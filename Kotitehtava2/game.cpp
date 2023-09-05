#include "game.h"
#include <iostream>
#include <cstdlib>
using namespace std;

Game::Game(int maxNumber) : maxNumber(maxNumber)
{
    cout<<"GAME CONSTRUCTOR: object initialized with "<<maxNumber<<" as a maximum value"<<endl;
}

Game::~Game()
{
    cout<<"GAME DESTRUCTOR: object cleared from stack memory"<<endl;
}

void Game::play()
{
    srand(static_cast<unsigned>(time(nullptr)));
    randomNumber = rand() % 10 + 1;
    bool guessRight = false;
    while(!guessRight) {
        cout<<"Give your guess between 1-"<<maxNumber<<endl;
        cin>>playerGuess;
        numOfGuesses++;
        if(randomNumber == playerGuess) {
            guessRight = true;
            cout<<"Your guess is right = "<<playerGuess<<endl;
        } else if(randomNumber < playerGuess) {
            cout<<"Your guess is too big"<<endl;
        } else {
            cout<<"Your guess is too small"<<endl;
        }
    };
    printGameResult();
}

void Game::printGameResult()
{
    cout<<"You guessed the right answer = "<<playerGuess<<" with "<<numOfGuesses<<" guesses"<<endl;
}
