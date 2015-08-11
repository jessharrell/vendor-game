#ifndef FIELD_H
#define FIELD_H

#include <QString>
#include <QPointF>
#include <QGraphicsScene>
#include <QGraphicsView>

class QGraphicsPixmapItem;

class field: public QObject{
    Q_OBJECT
public:
    field();
    virtual ~field();

    void show();

    const QRectF getSize();
    const int getCharacterCount();
    const QPointF getVendorPosition();

    void moveVendorRight();
    void moveVendorLeft();

private:
    QGraphicsScene scene;
    QGraphicsView view;
    QGraphicsPixmapItem* vendor;
};

#endif
