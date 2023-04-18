#include <gtest/gtest.h>

extern "C" {
#include "calc.h"
}

class rockpaperscissorsTest : public ::testing::Test {
    protected:
    void Setup() override {
        //game_initialize();
    }