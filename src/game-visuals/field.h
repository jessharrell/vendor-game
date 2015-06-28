#ifndef FIELD_H
#define FIELD_H

#include <QString>
#include <QtWidgets/QGraphicsScene>

class field {
public:
    field();
    virtual ~field();

    void show();

//private:
public:
    QGraphicsScene scene;
};

#endif
