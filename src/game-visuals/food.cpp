#include "food.h"
#include <game/constantValues.h>

food::food(QGraphicsItem* parent)
    : QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(constantValues::FOOD_FILENAME));
}

food::~food()
{

}

