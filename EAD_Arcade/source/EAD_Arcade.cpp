#include <iostream>
#include "Game.h"
#include "GameFactory.h"

using namespace std;

int main()
{
    GameFactory arcade;
    Game* game;
    game = arcade.getGame();

    cout << endl << "You had asked for a(n)" << game->getType() << endl;

    game->play();
}