#include "field.h"
#include <QtWidgets/QGraphicsPixmapItem>
#include <QApplication>
#include <QDesktopWidget>
#include <QGraphicsPixmapItem>

field::field()
    : view(&scene)
{
    scene.setSceneRect(QApplication::desktop()->screenGeometry());
    QGraphicsPixmapItem* sprite = new QGraphicsPixmapItem();
    sprite->setPos(100,100);
    QPixmap spritePixmap("../images/ralph_sprite.gif");
    sprite->setPixmap(spritePixmap);
    scene.addItem(sprite);
}

field::~field()
{

}

void field::show()
{
    view.show();
}

const QRectF field::getSize()
{
    return scene.sceneRect();
}

const int field::getCharacterCount()
{
    return scene.items().count();
}
