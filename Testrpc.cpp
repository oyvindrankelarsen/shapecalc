#include <gtest/gtest.h>

extern "C"
{
#include "rockpaperscissors.h"
}

class rpcTest : public ::testing::Test
{
protected:
    void Setup() override
    {
        // game_initialize();
    }

    TEST_F(rpcTest, Check that the calculator can add two numbers)
    {
        // ARRANGE
        float result;
        // ACT
        result = plus(100, 80)
            // ASSERT
            ASSERT_EQ(result, 180)
    }

    TEST_F(calcTest, Check that the calculator can subtract two numbers)
    {
        // ARRANGE
        float result;
        // ACT
        result = minus(100, 80)
            // ASSERT
            ASSERT_EQ(result, 20)
    }

    TEST_F(calcTest, Check that the calculator can multiply two numbers)
    {
        // ARRANGE
        float result;
        // ACT
        result = multiplikation(100, 80)
            // ASSERT
            ASSERT_EQ(result, 8000)
    }

    TEST_F(calcTest, Check that the calculator can divide two numbers)
    {
        // ARRANGE
        float result;
        // ACT
        result = division(100, 80)
            // ASSERT
            ASSERT_EQ(result, 1.25)
    }

    TEST_F(calcTest, Check that the calculator can the remainder of two numbers)
    {
        // ARRANGE
        int result;
        // ACT
        result = modulus(80, 100)
            // ASSERT
            ASSERT_EQ(result, 20)
    }