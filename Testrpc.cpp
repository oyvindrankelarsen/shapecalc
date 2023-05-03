#include <gtest/gtest.h>

extern "C"
{
#include "rockpaperscissors.h"
}

class rpcTest : public ::testing::Test
{
protected:
    void SetUp() override
    {
        // game_initialize();
    }
};

//Player wins
TEST_F(rpcTest, checkwinstieslossesplayer1computer2)
{
    // ARRANGE
    Rpcresult r = {0, 0, 0};
    // ACT
    r = res(1, 2, r);
    // ASSERT
    ASSERT_EQ(r.wins, 1);
    ASSERT_EQ(r.ties, 0);
    ASSERT_EQ(r.losses, 0);
}

TEST_F(rpcTest, checkwinstieslossesplayer3computer1)
{
    // ARRANGE
    Rpcresult r = {0, 0, 0};
    // ACT
    r = res(3, 1, r);
    // ASSERT
    ASSERT_EQ(r.wins, 1);
    ASSERT_EQ(r.ties, 0);
    ASSERT_EQ(r.losses, 0);
}

TEST_F(rpcTest, checkwinstieslossesplayer2computer3)
{
    // ARRANGE
    Rpcresult r = {0, 0, 0};
    // ACT
    r = res(2, 3, r);
    // ASSERT
    ASSERT_EQ(r.wins, 1);
    ASSERT_EQ(r.ties, 0);
    ASSERT_EQ(r.losses, 0);
}

//ties
TEST_F(rpcTest, checkwinstieslossesplayer1computer1)
{
    // ARRANGE
    Rpcresult r = {0, 0, 0};
    // ACT
    r = res(1, 1, r);
    // ASSERT
    ASSERT_EQ(r.wins, 0);
    ASSERT_EQ(r.ties, 1);
    ASSERT_EQ(r.losses, 0);
}

TEST_F(rpcTest, checkwinstieslossesplayer2computer2)
{
    // ARRANGE
    Rpcresult r = {0, 0, 0};
    // ACT
    r = res(2, 2, r);
    // ASSERT
    ASSERT_EQ(r.wins, 0);
    ASSERT_EQ(r.ties, 1);
    ASSERT_EQ(r.losses, 0);
}

TEST_F(rpcTest, checkwinstieslossesplayer3computer3)
{
    // ARRANGE
    Rpcresult r = {0, 0, 0};
    // ACT
    r = res(3, 3, r);
    // ASSERT
    ASSERT_EQ(r.wins, 0);
    ASSERT_EQ(r.ties, 1);
    ASSERT_EQ(r.losses, 0);
}

//Computer wins
TEST_F(rpcTest, checkwinstieslossesplayer2computer1)
{
    // ARRANGE
    Rpcresult r = {0, 0, 0};
    // ACT
    r = res(2, 1, r);
    // ASSERT
    ASSERT_EQ(r.wins, 0);
    ASSERT_EQ(r.ties, 0);
    ASSERT_EQ(r.losses, 1);
}

TEST_F(rpcTest, checkwinstieslossesplayer1computer3)
{
    // ARRANGE
    Rpcresult r = {0, 0, 0};
    // ACT
    r = res(1, 3, r);
    // ASSERT
    ASSERT_EQ(r.wins, 0);
    ASSERT_EQ(r.ties, 0);
    ASSERT_EQ(r.losses, 1);
}

TEST_F(rpcTest, checkwinstieslossesplayer3computer2)
{
    // ARRANGE
    Rpcresult r = {0, 0, 0};
    // ACT
    r = res(3, 2, r);
    // ASSERT
    ASSERT_EQ(r.wins, 0);
    ASSERT_EQ(r.ties, 0);
    ASSERT_EQ(r.losses, 1);
}