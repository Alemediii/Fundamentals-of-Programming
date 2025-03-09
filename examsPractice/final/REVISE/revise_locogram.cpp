#include <iostream>
#include <array>
#include <string>

using namespace std;
const int MAX_WORDS = 25;
const int MAX_LENGTH = 8;

typedef array<char, MAX_LENGTH> Letters;
typedef array<string, MAX_WORDS> Words;
struct TWords{
    Words words;
    int nEl;
};

struct TLetters{
    Letters let;
    int length;
};

struct TData{
    TWords words;
    TLetters letters;
};

bool isWord(TData d, string word){
    int i = 0;
    while(i < d.words.nEl and d.words.words[i] != word){
        i++;
    }
    return i < d.words.nEl;
}

bool isChar(char c, string word){
    int i = 0;
    while(i < int(word.size()) and word[i] != c){
        i++;
    } 
    return i < int(word.size());
}

void show(TData d);
bool charSeq(string word, string reference);

int main(){
    TData d;
    string word;

    d.words.nEl = 0;

    cout << "define: "; cin >> word;
    string reference = word;
    while(word != "END"){ 
        if(d.words.nEl < MAX_WORDS and not isWord(d, word) and not charSeq(word, reference)){
            d.words.words[d.words.nEl] = word;
            d.words.nEl++;
        }
        cin >> word;
    }

    show(d);
}

void show(TData d){
    cout << "the words are: " << endl;
    for (int i = 0; i < d.words.nEl; i++)
    {
        cout << d.words.words[i] << endl;
    }
}

bool charSeq(string word, string reference){
    int i = 0;
    while(isChar(word[i], reference)){
        i++;
    }
    return i < int(reference.size());
}