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

TEST_F(shapeTest, checkareaandcircumferenceforrectangle)
{
    // ARRANGE
    Shaperesult r = {0, 0, 0};
    // ACT
    r.a=15;
    r.b=10;
    r = rectangle(r);
    // ASSERT
    ASSERT_EQ(r.area, 150);
    ASSERT_EQ(r.circumference, 50);
}

TEST_F(shapeTest, checkareaandcircumferenceforparallellogram)
{
    // ARRANGE
    Shaperesult r = {0, 0, 0};
    // ACT
    r.a = 15;
    r.b=10;
    r = parallellogram(r);
    // ASSERT
    ASSERT_EQ(r.area, 150);
    ASSERT_EQ(r.circumference, 50);
}

TEST_F(shapeTest, checkareaandcircumferencefortriangle)
{
    // ARRANGE
    Shaperesult r = {0, 0, 0};
    // ACT
    r.a=15;
    r.b=15;
    r.c=15;
    r = triangle(r);
    // ASSERT
    ASSERT_EQ(r.area, 112.5);
    ASSERT_EQ(r.circumference, 45);
}

TEST_F(shapeTest, checkareaandcircumferenceforcirkle)
{
    // ARRANGE
    Shaperesult r = {0, 0, 0};
    // ACT
    r.radius = 5;
    r = circle(r);
    // ASSERT
    ASSERT_EQ(r.area, 78.53981781005859375);
    ASSERT_EQ(r.circumference, 31.41592597961425781250);
}