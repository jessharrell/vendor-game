#include <gtest/gtest.h>
#include <QApplication>
#include <QDesktopWidget>
#include <game-visuals/field.h>

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
