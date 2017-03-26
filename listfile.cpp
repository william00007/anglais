#include "listfile.h"
#include <iostream>

// Constructor(s)
vector<string> ListFile::getListFrenchWords() const
{
    return listFrenchWords;
}

void ListFile::setListFrenchWords(const vector<string> &value)
{
    listFrenchWords = value;
}

vector<string> ListFile::getListEnglishWords() const
{
    return listEnglishWords;
}

void ListFile::setListEnglishWords(const vector<string> &value)
{
    listEnglishWords = value;
}

ListFile::ListFile(){

}

// Method(s)
string ListFile::getWord(int indice) {

}

int ListFile::searchWord(string word) {

}

// [TODO]
// changer ces 2 fonctions plus tard pour ajouter
// un mot en respectant l'ordre alphabétique
void ListFile::addEnglishWord(string word) {
    listEnglishWords.push_back(word);
}

void ListFile::addFrenchWord(string word) {
    listFrenchWords.push_back(word);
}

void ListFile::showEnglishWords() {
    for(int i=0; i<listEnglishWords.size(); i++) {
        std::cout << listEnglishWords.at(i) << std::endl;
    }
}

void ListFile::showFrenchWords() {
    for(int i=0; i<listFrenchWords.size(); i++) {
        std::cout << listFrenchWords.at(i) << std::endl;
    }
}

int ListFile::size(){
    return listEnglishWords.size();
}
string ListFile::getRandomWord() {
    srand(time(NULL));
    return listEnglishWords.at(rand() % listEnglishWords.size());
}
