#include <gtest/gtest.h>
#include <QApplication>
#include <QDesktopWidget>
#include <QKeyEvent>
#include <game-visuals/field.h>
#include <game/startingValues.h>
#include <game/constantValues.h>

TEST(field, isSizeCorrectSize)
{
    field sut;
    EXPECT_EQ(constantValues::STADIUM_WIDTH, sut.getSize().width());
    EXPECT_EQ(constantValues::STADIUM_HEIGHT, sut.getSize().height());
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
