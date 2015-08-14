#include "food.h"
#include <game/constantValues.h>

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

}

food::direction food::getDirection()
{
    return currentDirection;
}

void food::setDirection(food::direction movementDirection)
{
    currentDirection = movementDirection;
}

