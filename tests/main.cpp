#include <gtest/gtest.h>
#include <QApplication>

class testApplication: public QApplication{
public:
    testApplication(int &argc, char **argv, int appFlags = ApplicationFlags)
        : QApplication( argc, argv, appFlags)
        , argCount(argc)
        , argVector(argv)
    {

    }

    int exec()
    {
        ::testing::InitGoogleTest(&argCount, argVector);
        return RUN_ALL_TESTS();
    }

    int& argCount;
    char** argVector;
};

int main( int argc, char* argv[] )
{
    testApplication testApp(argc, argv);
    return testApp.exec();
}
