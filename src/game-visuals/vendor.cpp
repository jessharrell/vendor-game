#include "vendor.h"
#include <game/constantValues.h>
#include <QKeyEvent>
#include <QDebug>

vendor::vendor(QGraphicsItem* parent)
    : QGraphicsPixmapItem(parent)
{
    changePixmap(constantValues::VENDOR_MOVING_DOWN_FILENAME);
    setFlag(QGraphicsItem::ItemIsFocusable);
    setFocus();
}

vendor::~vendor()
{

}

void vendor::keyPressEvent(QKeyEvent* event)
{
    if( Qt::Key_Left == event->key() )
    {
        if(inHorizontalAisle())
        {
            changePixmap(constantValues::VENDOR_MOVING_LEFT_FILENAME);
            moveBy(-1 * constantValues::MOVEMENT_AMOUNT, 0);
        }
    }
    else if( Qt::Key_Right == event->key() )
    {
        if(inHorizontalAisle())
        {
            changePixmap(constantValues::VENDOR_MOVING_RIGHT_FILENAME);
            moveBy(constantValues::MOVEMENT_AMOUNT, 0);
        }
    }
    else if( Qt::Key_Up == event->key() )
    {
        if(inVerticalAisle())
        {
            changePixmap(constantValues::VENDOR_MOVING_UP_FILENAME);
            moveBy(0, -1 * constantValues::MOVEMENT_AMOUNT);
        }

    }
    else if( Qt::Key_Down == event->key() )
    {
        if(inVerticalAisle())
        {
            changePixmap(constantValues::VENDOR_MOVING_DOWN_FILENAME);
            moveBy(0, constantValues::MOVEMENT_AMOUNT);
        }
    }
}

void vendor::changePixmap(QString filename)
{
    QPixmap spritePixmap(filename);
    setPixmap(spritePixmap);
}

bool vendor::inVerticalAisle()
{
    return pos().x() == constantValues::LEFT_VERTICAL_AISLE_LOCATION || pos().x() == constantValues::RIGHT_VERTICAL_AISLE_LOCATION;
}

bool vendor::inHorizontalAisle()
{
    return pos().y() == constantValues::TOP_HORIZONTAL_AISLE_LOCATION || pos().y() == constantValues::BOTTOM_HORIZONTAL_AISLE_LOCATION;
}
