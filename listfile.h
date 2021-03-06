#ifndef LISTFILE
#define LISTFILE
#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <time.h>

using namespace std;

class ListFile {

private:
    // Attribut(s)
    vector<string> listEnglishWords;
    vector<string> listFrenchWords;

public:
    // Constructor(s)
    ListFile();

    // Method(s)

    /// Return the word searching in the current list
    string getWord(int indice);


    /// Search the word in the list
    /// If this word is in the list, return his indice
    /// Else return -1
    int searchWord(string word);


    /// Return the list's size
    int getSizeList();

    /// This function add a new english word in the list
    void addEnglishWord(string word);
    void addFrenchWord(string word);
    void addEnFrWord(string englishWord, string frenchWord);

    /// Show the entire list
    void showEnglishWords();
    void showFrenchWords();
    int size();

    vector<string> getListFrenchWords() const;
    void setListFrenchWords(const vector<string> &value);
    vector<string> getListEnglishWords() const;
    void setListEnglishWords(const vector<string> &value);

    /// Return a random word
    string getRandomWord(int indice);
    int getRandomindice(int indice);
};

#endif // LISTFILE

