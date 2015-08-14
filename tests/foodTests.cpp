#include <gtest/gtest.h>
#include <game-visuals/food.h>
#include <game/constantValues.h>

TEST(food, isNotMovingByDefault)
{
    food sut;
    EXPECT_EQ(food::none, sut.getDirection());
}

TEST(food, directionCanBeSet)
{
    food sut;
    sut.setDirection(food::right);
    EXPECT_EQ(food::right, sut.getDirection());
}
