#include "loader.hpp"

Loader::Loader(const char* filePath) : m_filePath(filePath){
    ofstream myfile;
    if(fileExist()){
        cerr << "Fichier déjà existant" << endl;
        loadFile();
//        m_listFile.showEnglishWords();
//        m_listFile.showFrenchWords();
        std::cout << m_listFile.getRandomWord() << std::endl;
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
        while ( getline (myfile,line) )
        {
            //  traitement de la ligne récupéré qui suit ce schéma :
            // [english]:[french]

            int positionToken = line.find(':', 0);
            string englishWord = line.substr(0, positionToken);
            string frenchWord = line.substr(positionToken+1, line.find('\r', 0));

            m_listFile.addEnglishWord(englishWord);
            m_listFile.addFrenchWord(frenchWord);
        }

      }
    myfile.close();

}

