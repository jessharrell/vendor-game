#include "field.h"
#include <QtWidgets/QGraphicsPixmapItem>


field::field(){
    QRect r(50, 50, 500, 500);
    scene.setSceneRect(r);
    QGraphicsPixmapItem* sprite = new QGraphicsPixmapItem();
    sprite->setPos(100,100);
    QPixmap spritePixmap("ralph_sprite.gif");
    sprite->setPixmap(spritePixmap);
    scene.addItem(sprite);
}

field::~field(){

}

field::show(){
}
