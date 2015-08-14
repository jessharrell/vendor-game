#include <gtest/gtest.h>
#include <gmock/gmock.h>
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

TEST_F(TestVendorInScene, movesLeftWhenLeftDirectionPressedAndInTopAisle)
{
    sut->setY(constantValues::TOP_HORIZONTAL_AISLE_LOCATION);
    QPointF originalPos = sut->pos();

    pressKey(Qt::Key_Left);
    QPointF updatedPos = sut->pos();

    EXPECT_EQ(originalPos.x() - constantValues::MOVEMENT_AMOUNT, updatedPos.x());
    EXPECT_EQ(originalPos.y(), updatedPos.y());
}

TEST_F(TestVendorInScene, movesLeftWhenLeftDirectionPressedAndInBottomAisle)
{
    sut->setY(constantValues::BOTTOM_HORIZONTAL_AISLE_LOCATION);
    QPointF originalPos = sut->pos();

    pressKey(Qt::Key_Left);
    QPointF updatedPos = sut->pos();

    EXPECT_EQ(originalPos.x() - constantValues::MOVEMENT_AMOUNT, updatedPos.x());
    EXPECT_EQ(originalPos.y(), updatedPos.y());
}

TEST_F(TestVendorInScene, movesRightWhenRightDirectionPressedAndInTopAisle)
{
    sut->setY(constantValues::TOP_HORIZONTAL_AISLE_LOCATION);
    QPointF originalPos = sut->pos();

    pressKey(Qt::Key_Right);
    QPointF updatedPos = sut->pos();

    EXPECT_EQ(originalPos.y(), updatedPos.y());
    EXPECT_EQ(originalPos.x() + constantValues::MOVEMENT_AMOUNT, updatedPos.x());
}

TEST_F(TestVendorInScene, movesRightWhenRightDirectionPressedAndInBottomAisle)
{
    sut->setY(constantValues::BOTTOM_HORIZONTAL_AISLE_LOCATION);
    QPointF originalPos = sut->pos();

    pressKey(Qt::Key_Right);
    QPointF updatedPos = sut->pos();

    EXPECT_EQ(originalPos.y(), updatedPos.y());
    EXPECT_EQ(originalPos.x() + constantValues::MOVEMENT_AMOUNT, updatedPos.x());
}

TEST_F(TestVendorInScene, movesUpWhenUpDirectionPressedAndInLeftAisle)
{
    sut->setX(constantValues::LEFT_VERTICAL_AISLE_LOCATION);
    QPointF originalPos = sut->pos();

    pressKey(Qt::Key_Up);
    QPointF updatedPos = sut->pos();

    EXPECT_EQ(originalPos.y() - constantValues::MOVEMENT_AMOUNT, updatedPos.y());
    EXPECT_EQ(originalPos.x(), updatedPos.x());
}

TEST_F(TestVendorInScene, movesUpWhenUpDirectionPressedAndInRightAisle)
{
    sut->setX(constantValues::RIGHT_VERTICAL_AISLE_LOCATION);
    QPointF originalPos = sut->pos();

    pressKey(Qt::Key_Up);
    QPointF updatedPos = sut->pos();

    EXPECT_EQ(originalPos.y() - constantValues::MOVEMENT_AMOUNT, updatedPos.y());
    EXPECT_EQ(originalPos.x(), updatedPos.x());
}

TEST_F(TestVendorInScene, movesDownWhenDownDirectionPressedAndInLeftAisle)
{
    sut->setX(constantValues::LEFT_VERTICAL_AISLE_LOCATION);
    QPointF originalPos = sut->pos();

    pressKey(Qt::Key_Down);
    QPointF updatedPos = sut->pos();

    EXPECT_EQ(originalPos.x(), updatedPos.x());
    EXPECT_EQ(originalPos.y() + constantValues::MOVEMENT_AMOUNT, updatedPos.y());
}


TEST_F(TestVendorInScene, movesDownWhenDownDirectionPressedAndInRightAisle)
{
    sut->setX(constantValues::RIGHT_VERTICAL_AISLE_LOCATION);
    QPointF originalPos = sut->pos();

    pressKey(Qt::Key_Down);
    QPointF updatedPos = sut->pos();

    EXPECT_EQ(originalPos.x(), updatedPos.x());
    EXPECT_EQ(originalPos.y() + constantValues::MOVEMENT_AMOUNT, updatedPos.y());
}

TEST_F(TestVendorInScene, doesNotMoveDownWhenNotInOneOfTheVerticalAisles)
{
    QPointF originalPos = sut->pos();
    ASSERT_NE(constantValues::LEFT_VERTICAL_AISLE_LOCATION, originalPos.x());
    ASSERT_NE(constantValues::RIGHT_VERTICAL_AISLE_LOCATION, originalPos.x());

    pressKey(Qt::Key_Down);
    QPointF updatedPos = sut->pos();

    EXPECT_EQ(originalPos.x(), updatedPos.x());
    EXPECT_EQ(originalPos.y(), updatedPos.y());
}

TEST_F(TestVendorInScene, doesNotMoveUpWhenNotInOneOfTheVerticalAisles)
{
    QPointF originalPos = sut->pos();
    ASSERT_NE(constantValues::LEFT_VERTICAL_AISLE_LOCATION, originalPos.x());
    ASSERT_NE(constantValues::RIGHT_VERTICAL_AISLE_LOCATION, originalPos.x());

    pressKey(Qt::Key_Up);
    QPointF updatedPos = sut->pos();

    EXPECT_EQ(originalPos.x(), updatedPos.x());
    EXPECT_EQ(originalPos.y(), updatedPos.y());
}

TEST_F(TestVendorInScene, doesNotMoveLeftWhenNotInOneOfTheHorizontalAisles)
{
    sut->setY(constantValues::TOP_HORIZONTAL_AISLE_LOCATION + constantValues::MOVEMENT_AMOUNT);
    QPointF originalPos = sut->pos();
    ASSERT_NE(constantValues::TOP_HORIZONTAL_AISLE_LOCATION, originalPos.y());
    ASSERT_NE(constantValues::BOTTOM_HORIZONTAL_AISLE_LOCATION, originalPos.y());

    pressKey(Qt::Key_Left);
    QPointF updatedPos = sut->pos();

    EXPECT_EQ(originalPos.x(), updatedPos.x());
    EXPECT_EQ(originalPos.y(), updatedPos.y());
}

TEST_F(TestVendorInScene, doesNotMoveRightWhenNotInOneOfTheHorizontalAisles)
{
    sut->setY(constantValues::TOP_HORIZONTAL_AISLE_LOCATION + constantValues::MOVEMENT_AMOUNT);
    QPointF originalPos = sut->pos();
    ASSERT_NE(constantValues::TOP_HORIZONTAL_AISLE_LOCATION, originalPos.y());
    ASSERT_NE(constantValues::BOTTOM_HORIZONTAL_AISLE_LOCATION, originalPos.y());

    pressKey(Qt::Key_Right);
    QPointF updatedPos = sut->pos();

    EXPECT_EQ(originalPos.x(), updatedPos.x());
    EXPECT_EQ(originalPos.y(), updatedPos.y());
}

TEST_F(TestVendorInScene, dropsFoodToLeftWhenLeftIsPressedAndInVerticalAisle)
{
    ASSERT_EQ(1, scene.items().count());
    sut->setY(constantValues::LEFT_VERTICAL_AISLE_LOCATION);
    QPointF vendorPosition = sut->pos();
    int foodWidth = 20; // can we get this programatically in the test???
    QRect selectionRect(vendorPosition.x() - foodWidth,
                        vendorPosition.y(),
                        10,10);

    EXPECT_EQ(0, scene.items(selectionRect, Qt::IntersectsItemShape).count());

    pressKey(Qt::Key_Left);

    EXPECT_EQ(1, scene.items(selectionRect, Qt::IntersectsItemShape).count());
    EXPECT_EQ(2, scene.items().count());
}

TEST_F(TestVendorInScene, dropsFoodToRightWhenRightIsPressedAndInVerticalAisle)
{
    ASSERT_EQ(1, scene.items().count());
    sut->setY(constantValues::LEFT_VERTICAL_AISLE_LOCATION);
    QPointF vendorPosition = sut->pos();
    QRect selectionRect(vendorPosition.x() + sut->boundingRect().width(),
                        vendorPosition.y(),
                        10,10);
    ASSERT_EQ(0, scene.items(selectionRect, Qt::IntersectsItemShape).count());

    pressKey(Qt::Key_Right);

    EXPECT_EQ(1, scene.items(selectionRect, Qt::IntersectsItemShape).count());
    EXPECT_EQ(2, scene.items().count());
}
