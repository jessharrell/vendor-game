#ifndef VENDOR_H
#define VENDOR_H

#include <QGraphicsPixmapItem>

class vendor : public QGraphicsPixmapItem
{
public:
    explicit vendor(QGraphicsItem *parent = 0);
    virtual ~vendor();

protected:
    void keyPressEvent(QKeyEvent *event) Q_DECL_OVERRIDE;
    void changePixmap(QString filename);
};

#endif // VENDOR_H
