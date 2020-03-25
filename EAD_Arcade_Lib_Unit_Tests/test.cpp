#include "gtest/gtest.h"
#include "WhackAMole.h"
#include "MemoryGame.h"
TEST(WhackAMoleTests, callWhackAMole) {
    Game * gameTest = new WhackAMole();
}
TEST(WhackAMoleTests, checkWhackAMoleType) {
    Game * gameTest = new WhackAMole();
    ASSERT_STREQ("Whack-A-Mole", gameTest->getType());
}

TEST(MemoryGameTests, callMemoryGame) {
    Game * gameTest = new MemoryGame();
}

TEST(MemoryGameTests, checkMemoryGameType) {
    Game * gameTest = new MemoryGame();
    ASSERT_STREQ("Memory Game", gameTest->getType());
}