#include "Game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

Game::Game(int max)
{
    maxNum = max;
    yritykset = 0;

    srand(time(0));

    salaNum = rand() % maxNum + 1;
    // debugtulostus
    cout << "GAME CONSTRUCTOR: object initialized with " << maxNum << " as a maxinum value" << endl;
}
Game::~Game()
{
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}


void Game::play()
{
    cout << "Arvaa luku 1 - " << maxNum << endl;

    do {
        cout << "Arvauksesi: ";
        cin >> arvaus;
        yritykset++;

        if (arvaus < salaNum)
            cout << "Liian pieni." << endl;
        else if (arvaus > salaNum)
            cout << "Liian suuri." << endl;
        else
            cout << "Oikein!! Voitit pelin!" << endl;

    } while (arvaus != salaNum);

    printResult();
}

void Game::printResult()
{
    cout << "Oikea luku oli: " << salaNum << endl;
    cout << "Yritykset: " << yritykset << endl;
}
