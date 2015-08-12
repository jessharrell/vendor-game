#include "field.h"
#include <QApplication>
#include <QDesktopWidget>
#include <QGraphicsPixmapItem>
#include <game/startingValues.h>
#include <game/constantValues.h>
#include "vendor.h"

field::field()
    : view(&scene)
{
    QPixmap stadiumBackground(constantValues::STADIUM_BACKGROUND);
    scene.setBackgroundBrush(QBrush(stadiumBackground));

    scene.setSceneRect(0, 0, constantValues::STADIUM_WIDTH, constantValues::STADIUM_HEIGHT);
    theVendor = new vendor();
    theVendor->setPos(startingValues::VENDOR_START_POSITION);
    scene.addItem(theVendor);
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
    return theVendor->pos();
}
