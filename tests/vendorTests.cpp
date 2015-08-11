#include <gtest/gtest.h>
#include <QApplication>
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <game-visuals/vendor.h>
#include <game/constantValues.h>

TEST(vendor, isFocusableItem)
{
    vendor sut;
    EXPECT_EQ(QGraphicsItem::ItemIsFocusable, sut.flags());
}

TEST(vendor, movesLeftWhenLeftDirectionPressed)
{
    QGraphicsScene scene;
    vendor* sut = new vendor();
    scene.addItem(sut);
    QPointF originalPos = sut->pos();

    QKeyEvent* keyPressEvent = new QKeyEvent(QEvent::KeyPress, Qt::Key_Left, Qt::NoModifier);
    QApplication::postEvent(&scene, keyPressEvent);
    QApplication::processEvents();

    QPointF updatedPos = sut->pos();

    EXPECT_EQ(originalPos.y(), updatedPos.y());
    EXPECT_EQ(originalPos.x() - constantValues::MOVEMENT_AMOUNT, updatedPos.x());
}

TEST(vendor, movesRightWhenRightDirectionPressed)
{
    QGraphicsScene scene;
    vendor* sut = new vendor();
    scene.addItem(sut);
    QPointF originalPos = sut->pos();

    QKeyEvent* keyPressEvent = new QKeyEvent(QEvent::KeyPress, Qt::Key_Right, Qt::NoModifier);
    QApplication::postEvent(&scene, keyPressEvent);
    QApplication::processEvents();

    QPointF updatedPos = sut->pos();

    EXPECT_EQ(originalPos.y(), updatedPos.y());
    EXPECT_EQ(originalPos.x() + constantValues::MOVEMENT_AMOUNT, updatedPos.x());
}
