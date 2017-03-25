#include "mainwindow.h"
#include "loader.hpp"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    Loader l((char*)"myDataBase.txt");
//    std::vector<string> lol;
    return a.exec();
}
