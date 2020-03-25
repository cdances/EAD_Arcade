#include "gtest/gtest.h"
#include "WhackAMole.h"
#include "MemoryGame.h"
TEST(WhackAMoleTests, callWhackAMole) {
    Game * gameTest = new WhackAMole();
    delete gameTest;
}

TEST(WhackAMoleTests, checkWhackAMoleType) {
    Game * gameTest = new WhackAMole();
    ASSERT_STREQ("Whack-A-Mole", gameTest->getType());
}

TEST(WhackAMoleTests, checkWhackAMolePlay) {
    Game* gameTest = new WhackAMole();
    gameTest->play();
}

TEST(MemoryGameTests, callMemoryGame) {
    Game * gameTest = new MemoryGame();
    delete gameTest;
}

TEST(MemoryGameTests, checkMemoryGameType) {
    Game * gameTest = new MemoryGame();
    ASSERT_STREQ("Memory Game", gameTest->getType());
}


TEST(MemoryGameTests, checkMemoryGamePlay) {
    Game* gameTest = new MemoryGame();
    gameTest->play();
}