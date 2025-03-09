#include <iostream>
#include <array>
#include <string> 

using namespace std;
const int MAX_WORDS = 25;
const int SIZE_PAT = 5;

struct Words{
    string word;
    int wordsInCommon = 0;
};

typedef array<Words, MAX_WORDS> TWords;

struct TData{
    TWords w;
    int nEl = 0;
};

bool isRepeated(TData d, string word){
    int i = 0; 
    while(i < d.nEl and d.w[i].word != word){
        i++;
    }
    return i < d.nEl;
}

bool isTheLetter(string pat, char c){
    int i = 0;
    while(i < SIZE_PAT and pat[i] != c){
        i++;
    }
    return i < SIZE_PAT;
}

int repetitions(string word, string pat){
    int counter = 0;
    for (int i = 0; i < int(word.size()); i++)
    {
        if(isTheLetter(pat, word[i])) counter++;
    }
    return counter;
}

bool freq(string pat, char c){
    int count = 0, i = 0;
    while(i < int(pat.size())){
        if(pat[i] == c) count++;
        i++;
    }
    return count == 1;
}

bool noLettersRepeated(string pat){
    int i = 0;
    bool keeps = true;
    while(i < int(pat.size()) and keeps){
        if(not freq(pat, pat[i])) keeps = false;
        i++;
    }
    return keeps;
}

void show(TData d);
void readPat(string& pat);
string unique(string word);

int main(){
    TData d;
    string word, pat;
    readPat(pat);
    cout << "define the words: ";
    cin >> word;
    while(word != "END"){
        if(not isRepeated(d, word)){
            d.w[d.nEl].word = word;
            d.w[d.nEl].wordsInCommon = repetitions(unique(word), pat);
            d.nEl++;
        }
        cin >> word;
    }

    show(d);
}

void show(TData d){
    cout << "data is: " << endl;
    for (int i = 0; i < d.nEl; i++)
    {
        cout << d.w[i].word << ": " << d.w[i].wordsInCommon;
        cout << endl;
    }
    
}

void readPat(string& pat){
    cout << "define pat: "; 
    cin >> pat;
    while(int(pat.size()) != SIZE_PAT or not noLettersRepeated(pat)){
        cout << "size = 5 and no letters repeated" << endl;
        cout << "define pat again: ";
        cin >> pat;
    }
}

string unique(string word){
    string uniLet = "";
    for (int i = 0; i < int(word.size()); i++)
    {
        if(not isTheLetter(uniLet, word[i])) uniLet += word[i];
    }
    return uniLet;
}