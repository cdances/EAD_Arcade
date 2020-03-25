#include <iostream>
#include "GameFactory.h"

using namespace std;


Game* GameFactory::getGame()
{
    int choice;

    cout << "Select type of game to play: " << endl;
    cout << "1: Whack-A-Mole" << endl;
    cout << "2: Memory Game" << endl;
    cout << "Selection: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        return new WhackAMole();
        break;
    case 2:
        return new MemoryGame();
        break;
    default:
        cout << "Invalid Selection" << endl;
        return NULL;
    }
}