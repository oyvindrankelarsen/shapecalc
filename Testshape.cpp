#include <gtest/gtest.h>

extern "C"
{
#include "shape.h"
}

class shapeTest : public ::testing::Test
{
protected:
    void SetUp() override
    {
        // game_initialize();
    }
};

TEST_F(shapeTest, checkareaandomkretsforrectangle)
{
    // ARRANGE
    Result r = {0, 0, 0};
    // ACT
    r.a=15;
    r.b=10;
    r = rektangel(r);
    // ASSERT
    ASSERT_EQ(r.area, 150);
    ASSERT_EQ(r.omkrets, 50);
}

TEST_F(shapeTest, checkareaandomkretsforparallellogram)
{
    // ARRANGE
    Result r = {0, 0, 0};
    // ACT
    r.a = 15;
    r.b=10;
    r = parallellogram(r);
    // ASSERT
    ASSERT_EQ(r.area, 150);
    ASSERT_EQ(r.omkrets, 50);
}

TEST_F(shapeTest, checkareaandomkretsfortriangle)
{
    // ARRANGE
    Result r = {0, 0, 0};
    // ACT
    r.a=15;
    r.b=15;
    r.c=15;
    r = triangel(r);
    // ASSERT
    ASSERT_EQ(r.area, 112.5);
    ASSERT_EQ(r.omkrets, 45);
}

TEST_F(shapeTest, checkareaandomkretsforcirkel)
{
    // ARRANGE
    Result r = {0, 0, 0};
    // ACT
    r.radie = 5;
    r = cirkel(r);
    // ASSERT
    ASSERT_EQ(r.area, 78.53981781005859375);
    ASSERT_EQ(r.omkrets, 31.41592597961425781250);
}