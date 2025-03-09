#include <iostream>
#include <array>

using namespace std;

const int MAX_PAT = 5;
const int MAX_PAL = 20;

typedef array<string, MAX_PAL> TArray;

struct TWords{
    char letter;
    TArray words;
    int npal;
};

typedef array<TWords, MAX_PAT> TColection;

struct TData{
    TColection letter;
    int nlet;
};

void readPat(string& pat){
    cout << "define pat: ";
    cin >> pat;
    
    // Input validation using a while loop
    while (int(pat.size()) > MAX_PAT || int(pat.size()) <= 0) {
        cout << "the pat should be bigger than 0 or lower than " << MAX_PAT << endl;
        cout << "define pat: ";
        cin >> pat;
    }
}

bool isLetter(TData d, char letter){
    int i = 0;
    while(i < int(d.nlet) and d.letter[i].letter != letter) i++;
    return i < int(d.nlet);
}

void init(TData& d, string pat){
    d.nlet = 0;
    for (int i = 0; i < int(pat.size()); i++)
    {
        if(not isLetter(d, pat[i])){
            d.letter[d.nlet].letter = pat[i];
            d.letter[d.nlet].npal = 0;
            d.nlet++;
        }
    }
}

bool isLetterInWord(string word, char let){
    int i = 0;
    while (i < int(word.size()) and word[i] != let) i++;
    return i < int(word.size());   
}

bool isWord(TWords& words, string word){
    int i = 0;
    while(i < int(words.npal) and words.words[i] != word) i++;
    return i < int(words.npal);
}

void insert(TWords& words, string word){
    words.words[words.npal] = word;
    words.npal++;
}

void show(TData d){
    for (int i = 0; i < d.nlet; i++)
    {
        cout << d.letter[i].letter << " ";
        for (int j = 0; j < d.letter[i].npal; j++)
        {
            cout << d.letter[i].words[j] << " ";
        }
        cout << endl;
    }
}

int main(){
    string word, pat;
    TData d;
    int pos;

    readPat(pat);
    init(d, pat);

    cout << "define text: ";
    cin >> word;
    while(word != "END"){
        for (int i = 0; i < int(d.nlet); i++)
        {
            if(isLetterInWord(word, d.letter[i].letter) and
            not isWord(d.letter[i], word)){
                insert(d.letter[i], word);
            }
        }
        cin >> word;
    }
    show(d);
}