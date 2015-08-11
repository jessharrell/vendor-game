#include "field.h"
#include <QApplication>
#include <QDesktopWidget>
#include <QGraphicsPixmapItem>
#include <game/startingValues.h>
#include <game/constantValues.h>

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

void field::moveVendorRight()
{
    vendor->moveBy(constantValues::MOVEMENT_AMOUNT, 0);
}

void field::moveVendorLeft()
{
    vendor->moveBy(-1 * constantValues::MOVEMENT_AMOUNT, 0);
}
