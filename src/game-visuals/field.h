#ifndef FIELD_H
#define FIELD_H

#include <QString>
#include <QPointF>
#include <QGraphicsScene>
#include <QGraphicsView>

class vendor;

class field: public QObject{
    Q_OBJECT
public:
    field();
    virtual ~field();

    void show();

    const QRectF getSize();
    const int getCharacterCount();
    const QPointF getVendorPosition();

private:
    QGraphicsScene scene;
    QGraphicsView view;
    vendor* theVendor;
};

#endif
