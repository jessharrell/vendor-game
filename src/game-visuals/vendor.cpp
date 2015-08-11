#include "vendor.h"
#include <game/constantValues.h>
#include <QKeyEvent>
#include <QDebug>

vendor::vendor(QGraphicsItem* parent)
    : QGraphicsPixmapItem(parent)
{
    setFlag(QGraphicsItem::ItemIsFocusable);
}

vendor::~vendor()
{

}

void vendor::keyPressEvent(QKeyEvent* event)
{
    if( Qt::Key_Left == event->key() )
    {
        moveBy(-1 * constantValues::MOVEMENT_AMOUNT, 0);
    }
}