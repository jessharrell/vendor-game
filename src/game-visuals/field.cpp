#include "field.h"
#include <QtWidgets/QGraphicsPixmapItem>
#include <QApplication>
#include <QDesktopWidget>
#include <QGraphicsPixmapItem>
#include <game/startingValues.h>

field::field()
    : view(&scene)
{
    scene.setSceneRect(QApplication::desktop()->screenGeometry());
    vendor = new QGraphicsPixmapItem();
    vendor->setPos(startingValues::VENDOR_START_POSITION);
    QPixmap spritePixmap("../images/ralph_sprite.gif");
    vendor->setPixmap(spritePixmap);
    scene.addItem(vendor);
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

const QPointF field::getVendorPosition()
{
    return vendor->pos();
}
