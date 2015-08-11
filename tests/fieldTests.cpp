#include <gtest/gtest.h>
#include <QApplication>
#include <QDesktopWidget>
#include <QKeyEvent>
#include <game-visuals/field.h>
#include <game/startingValues.h>
#include <game/constantValues.h>

TEST(field, isSizeOfScreen)
{
    field sut;
    EXPECT_EQ(QApplication::desktop()->screenGeometry(), sut.getSize().toRect());
}

TEST(field, hasVenderCharacter)
{
    field sut;
    EXPECT_EQ(1, sut.getCharacterCount());
}

TEST(field, startsWithVendorAtStartPosition)
{
    field sut;
    EXPECT_EQ(startingValues::VENDOR_START_POSITION, sut.getVendorPosition());
}

TEST(field, moveVendorRightMovesVendorRightByMovementAmount)
{
    field sut;
    QPointF originalPos = sut.getVendorPosition();

    sut.moveVendorRight();
    QPointF updatedPos = sut.getVendorPosition();

    EXPECT_EQ(originalPos.y(), updatedPos.y());
    EXPECT_EQ(originalPos.x() + constantValues::MOVEMENT_AMOUNT, updatedPos.x());
}

TEST(field, moveVendorLeftMovesVendorLeftByMovementAmount)
{
    field sut;
    QPointF originalPos = sut.getVendorPosition();

    sut.moveVendorLeft();
    QPointF updatedPos = sut.getVendorPosition();

    EXPECT_EQ(originalPos.y(), updatedPos.y());
    EXPECT_EQ(originalPos.x() - constantValues::MOVEMENT_AMOUNT, updatedPos.x());
}
