#ifndef FOOD_H
#define FOOD_H

#include <QGraphicsPixmapItem>

class food : public QGraphicsPixmapItem
{
public:
    explicit food(QGraphicsItem *parent = 0);
    virtual ~food();

    enum direction {
        left = -1,
        none = 0,
        right = 1
    };

    virtual void advance(int phase) Q_DECL_OVERRIDE;
    direction getDirection();
    void setDirection(direction movementDirection);

protected:
    direction currentDirection;
};

#endif // FOOD_H
