#include "gtest/gtest.h"
#include "WhackAMole.h"
#include "MemoryGame.h"
TEST(WhackAMoleTests, callWhackAMole) {
    Game gameTest = WhackAMole();
}
TEST(WhackAMoleTests, checkWhackAMoleType) {
    Game gameTest = WhackAMole();
    ASSERT_STREQ("Whack-A-Mole", gameTest.getType());
}

TEST(MemoryGameTests, callMemoryGame) {
    Game gameTest = MemoryGame();
}

TEST(MemoryGameTests, checkMemoryGameType) {
    Game gameTest = MemoryGame();
    ASSERT_STREQ("Memory Game", gameTest.getType());
}