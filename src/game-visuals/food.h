#ifndef FOOD_H
#define FOOD_H

#include <QGraphicsPixmapItem>

class food : public QGraphicsPixmapItem
{
public:
    explicit food(QGraphicsItem *parent = 0);
    virtual ~food();
};

#endif // FOOD_H
