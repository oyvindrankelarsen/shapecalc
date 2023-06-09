#include <gtest/gtest.h>

extern "C"
{
#include "calc.h"
}

class calcTest : public ::testing::Test
{
protected:
    void SetUp() override
    {
        // game_initialize();
    }
};

TEST_F(calcTest, Checkthatthecalculatorcanaddtwonumbers)
{
    // ARRANGE
    float result;
    // ACT
    result = addition(100, 80);
    // ASSERT
    ASSERT_EQ(result, 180);
}

TEST_F(calcTest, Checkthatthecalculatorcansubtracttwonumbers)
{
    // ARRANGE
    float result;
    // ACT
    result = subtraction(100, 80);
    // ASSERT
    ASSERT_EQ(result, 20);
}

TEST_F(calcTest, Checkthatthecalculatorcanmultiplytwonumbers)
{
    // ARRANGE
    float result;
    // ACT
    result = multiplication(100, 80);
    // ASSERT
    ASSERT_EQ(result, 8000);
}

TEST_F(calcTest, Checkthatthecalculatorcandividetwonumbers)
{
    // ARRANGE
    float result;
    // ACT
    result = division(100, 80);
    // ASSERT
    ASSERT_EQ(result, 1.25);
}

TEST_F(calcTest, Checkthatthecalculatorcantheremainderoftwonumbers)
{
    // ARRANGE
    int result;
    // ACT
    result = remain(100, 80);
    // ASSERT
    ASSERT_EQ(result, 20);
}