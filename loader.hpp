#ifndef LOADER_H
#define LOADER_H
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "listfile.h"

using namespace std;

class Loader
{
private:
    const char *m_filePath;
    ListFile m_listFile;
public:
    Loader(const char* filePath);
    inline bool fileExist () {
        ifstream f(m_filePath);
        return f.good();
    }
    void showFile();
    void loadFile();


};

#endif // LOADER_H
