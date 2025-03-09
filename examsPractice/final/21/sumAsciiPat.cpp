#include <iostream>
#include <array>
#include <string>

using namespace std;
const int MAX_WORDS = 15;

typedef array<string, MAX_WORDS> Words;

struct TWords{
    Words words;
    int nEl;
};

bool isRepeated(const TWords& w, string word){
    int i = 0;
    if(i < w.nEl and w.words[i] != word){
        i++;
    }
    return i < w.nEl;
}

int sumAscii(string word){
    int sum = 0;
    for (int i = 0; i < int(word.size()); i++)
    {
        sum += int(word[i]);     
    }
    return sum;
}

void show(TWords w){
    cout << endl << "the words are: "; 
    for (int i = 0; i < w.nEl; i++)
    {
        cout << w.words[i] << " ";
    }
}

int main(){
    TWords w;
    string word, pat;
    w.nEl = 0;

    cout << "define pat: "; cin >> pat;
    int asciiPat = sumAscii(pat);
    cout << "define word: "; cin >> word;
    while(word != "END"){
        int sum = sumAscii(word);
       if(sum == asciiPat and not isRepeated(w, word)){
        w.words[w.nEl] = word;
        w.nEl++;
       } 
        cin >> word;
    }

    show(w);
}