#include <iostream>
#include "WhackAMole.h"

using namespace std;

WhackAMole::WhackAMole() : Game()
{
    sprintf_s(_type, "Whack-A-Mole");
    cout << "Welcome to Whack-A-Mole" << endl;
    cout << "Ready to play?" << endl;
}

void WhackAMole::play() {
    cout << "Playing the Memory Game" << std::endl;
}

