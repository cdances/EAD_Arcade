#ifndef GAMEFACTORY_H_
#define GAMEFACTORY_H_

#include <iostream>
#include "WhackAMole.h"
#include "MemoryGame.h"

using namespace std;

class GameFactory
{
private:
    Game* _game;
public:
    Game* getGame();

};

#endif