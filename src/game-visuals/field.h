#ifndef FIELD_H
#define FIELD_H

#include <QString>
#include <QGraphicsScene>
#include <QGraphicsView>

class field {
public:
    field();
    virtual ~field();

    void show();

    const QRectF getSize();
    const int getCharacterCount();

private:
    QGraphicsScene scene;
    QGraphicsView view;
};

#endif
