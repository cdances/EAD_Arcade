#ifndef GAME_H_
#define GAME_H_

#include <iostream>

using namespace std;

class Game
{
protected:
    char _type[20];
public:
    Game();
    char* getType();
    virtual void play() = 0;
    ~Game() {};
};

#endif


