#include "loader.hpp"

Loader::Loader(const char* filePath) : m_filePath(filePath){
    ofstream myfile;
    if(fileExist()){
        cerr << "Fichier déjà existant" << endl;
        loadFile();
    }
    else{
        cerr << "Création du fichier" << endl;
        myfile.open(m_filePath);
        myfile.close();
    }
};

void Loader::showFile(){
    string line;
    ifstream myfile (m_filePath);
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            cerr << line << '\n';
        }
        myfile.close();
    }

    else cerr << "Unable to open file";

}

void Loader::loadFile(){
    string line;
    ifstream myfile (m_filePath);
    if (myfile.is_open())
    {
        int i = 0;
        while ( getline (myfile,line) )
        {
            m_listEnglish.push_back(line);
        }

      }
    myfile.close();

}

