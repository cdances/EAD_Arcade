#include <iostream>
#include "MemoryGame.h"

using namespace std;

MemoryGame::MemoryGame() : Game()
{
    sprintf_s(_type, "Memory Game");
    cout << "Welcome to the Memory Game" << endl;
    cout << "Ready to play?" << endl;
}
