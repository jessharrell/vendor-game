#include <QtWidgets/QApplication>
#include <game-visuals/field.h>

int main( int argc, char* argv[] )
{
    QApplication app(argc, argv);
    field scene;
    scene.show();
    return app.exec();
}
