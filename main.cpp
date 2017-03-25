#include "mainwindow.h"
#include "loader.hpp"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    Loader myLoader((char*)"myDataBase.txt");

    std::vector<string> m_listEnglish;
    m_listEnglish.push_back("ok");
    m_listEnglish.push_back("pas bon");
    m_listEnglish.push_back("voici");

    int v1 = rand() % m_listEnglish.size();

    return a.exec();
}
