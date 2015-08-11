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

class TestVendorInScene: public ::testing::Test
{
public:
    TestVendorInScene()
        : sut(new vendor())
    {
    }

    void SetUp()
    {
        scene.addItem(sut);
    }

    void pressKey(int key)
    {
        QKeyEvent* keyPressEvent = new QKeyEvent(QEvent::KeyPress, key, Qt::NoModifier);
        QApplication::postEvent(&scene, keyPressEvent);
        QApplication::processEvents();
    }

    vendor* sut;
    QGraphicsScene scene;
};

TEST_F(TestVendorInScene, movesLeftWhenLeftDirectionPressed)
{
    QPointF originalPos = sut->pos();

    pressKey(Qt::Key_Left);
    QPointF updatedPos = sut->pos();

    EXPECT_EQ(originalPos.y(), updatedPos.y());
    EXPECT_EQ(originalPos.x() - constantValues::MOVEMENT_AMOUNT, updatedPos.x());
}

TEST_F(TestVendorInScene, movesRightWhenRightDirectionPressed)
{
    QPointF originalPos = sut->pos();

    pressKey(Qt::Key_Right);
    QPointF updatedPos = sut->pos();

    EXPECT_EQ(originalPos.y(), updatedPos.y());
    EXPECT_EQ(originalPos.x() + constantValues::MOVEMENT_AMOUNT, updatedPos.x());
}

TEST_F(TestVendorInScene, movesUpWhenUpDirectionPressed)
{
    QPointF originalPos = sut->pos();

    pressKey(Qt::Key_Up);
    QPointF updatedPos = sut->pos();

    EXPECT_EQ(originalPos.y() - constantValues::MOVEMENT_AMOUNT, updatedPos.y());
    EXPECT_EQ(originalPos.x(), updatedPos.x());
}

TEST_F(TestVendorInScene, movesDownWhenDownDirectionPressed)
{
    QPointF originalPos = sut->pos();

    pressKey(Qt::Key_Down);
    QPointF updatedPos = sut->pos();

    EXPECT_EQ(originalPos.y() + constantValues::MOVEMENT_AMOUNT, updatedPos.y());
    EXPECT_EQ(originalPos.x(), updatedPos.x());
}
