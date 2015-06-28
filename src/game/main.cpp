#include <QtWidgets/QApplication>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>

int main( int argc, char* argv[] )
{
   QApplication app(argc, argv);

   QGraphicsScene scene;
   QRect r(50, 50, 500, 500);
   scene.setSceneRect(r);
   QGraphicsPixmapItem* sprite = new QGraphicsPixmapItem();
   sprite->setPos(100,100);
   QPixmap spritePixmap("ralph_sprite.gif");
   sprite->setPixmap(spritePixmap);
   scene.addItem(sprite);
   QGraphicsView view(&scene);
   view.show();
   app.exec();
   return 0;
}
