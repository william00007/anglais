#include "mainwindow.h"
#include "loader.hpp"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    Loader myLoader((char*)"myDataBase.txt");
    return a.exec();
}
