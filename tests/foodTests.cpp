#include <gtest/gtest.h>
#include <game-visuals/food.h>
#include <game/constantValues.h>
#include <QPointF>

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

TEST(food, doesNotMoveWhenAdvanceIsCalledWithPhaseZero)
{
    food sut;
    QPointF originalPosition = sut.pos();
    sut.setDirection(food::right);

    sut.advance(0);

    EXPECT_EQ(sut.pos().x(), originalPosition.x());
}

TEST(food, doesNotMoveWhenDirectionIsNoneAndAdvanceIsCalledWithPhaseOne)
{
    food sut;
    QPointF originalPosition = sut.pos();

    sut.advance(1);

    EXPECT_EQ(sut.pos().x(), originalPosition.x());
}

TEST(food, movesRightWhenDirectionIsRightAndAdvanceIsCalledWithPhaseOne)
{
    food sut;
    QPointF originalPosition = sut.pos();
    sut.setDirection(food::right);

    sut.advance(1);

    EXPECT_GT(sut.pos().x(), originalPosition.x());
}

TEST(food, movesLeftWhenDirectionIsLeftAndAdvanceIsCalledWithPhaseOne)
{
    food sut;
    QPointF originalPosition = sut.pos();
    sut.setDirection(food::left);

    sut.advance(1);

    EXPECT_LT(sut.pos().x(), originalPosition.x());
}
