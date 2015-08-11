#include <gtest/gtest.h>
#include <QApplication>
#include <QDesktopWidget>
#include <game-visuals/field.h>
#include <game/startingValues.h>

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

TEST(field, moveVendorRightMovesVendorTenRight)
{
    field sut;
    sut.getVendorPosition();
}
