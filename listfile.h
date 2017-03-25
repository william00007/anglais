#ifndef LISTFILE
#define LISTFILE
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class ListFile {

private:
    // Attribut(s)
    int nbr;
    vector<string> ListWords;

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
};

#endif // LISTFILE

