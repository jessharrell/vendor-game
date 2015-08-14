#include "food.h"
#include <game/constantValues.h>
#include <QDebug>

food::food(QGraphicsItem* parent)
    : QGraphicsPixmapItem(parent)
    , currentDirection(food::none)
{
    setPixmap(QPixmap(constantValues::FOOD_FILENAME));
}

food::~food()
{

}

void food::advance(int phase)
{
    qDebug() << "advance called";

    if( 1 == phase)
    {
        moveBy(5 * currentDirection,0);
    }
}

food::direction food::getDirection()
{
    return currentDirection;
}

void food::setDirection(food::direction movementDirection)
{
    currentDirection = movementDirection;
}

