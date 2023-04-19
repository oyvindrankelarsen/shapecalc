#include <gtest/gtest.h>

extern "C" {
#include "calc.h"
}

class shapeTest : public ::testing::Test {
    protected:
    void Setup() override {
        //game_initialize();
    }