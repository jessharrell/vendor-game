#include <gtest/gtest.h>
#include <QApplication>
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <game-visuals/vendor.h>
#include <game/constantValues.h>

TEST(vendor, movesLeftWhenLeftDirectionPressed)
{
    QGraphicsScene scene;
    vendor* sut = new vendor();
    scene.addItem(sut);
    sut->setFlag(QGraphicsItem::ItemIsFocusable);
    sut->setFocus();
    QPointF originalPos = sut->pos();

    QKeyEvent* keyPressEvent = new QKeyEvent(QEvent::KeyPress, Qt::Key_Left, Qt::NoModifier);
    QApplication::postEvent(&scene, keyPressEvent);
    QApplication::processEvents();

    QPointF updatedPos = sut->pos();

    EXPECT_EQ(originalPos.y(), updatedPos.y());
    EXPECT_EQ(originalPos.x() - constantValues::MOVEMENT_AMOUNT, updatedPos.x());
}
