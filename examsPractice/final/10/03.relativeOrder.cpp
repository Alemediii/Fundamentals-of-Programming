#include <iostream>
#include <array>

using namespace std;
const int MAX_WORDS = 15;
const int MAX_WORD_SIZE = 8;

typedef array<string, MAX_WORDS> Words;

struct TWords{
    Words w;
    int nEl = 0;
};

bool isTheWord(TWords w, string word){
    int i = 0;
    while(i < w.nEl and w.w[i] != word){
        i++;
    }
    return i < w.nEl;
}

int isIt(char c, string word, int pos){
    int i = pos;
    while(i < int(word.size()) and c != word[i]){
        i++;
    }
    return i;
}

void show(TWords w){
    cout << "the words are: ";
    for (int i = 0; i < w.nEl; i++)
    {
        cout << w.w[i] << endl;
    }
}

bool meetsCondition(string word, string pat);

int main(){
    TWords w;
    string word, pat;
    cout << "define pat: "; 
    cin >> pat;
    cout << "define text: ";
    cin >> word;
    while(word != "END"){
        if(not isTheWord(w, word) and meetsCondition(word, pat)){
            w.w[w.nEl] = word;
            w.nEl++;
        }
        cin >> word;
    } 

    show(w);
}

bool meetsCondition(string word, string pat){
    int i = 0, pos = 0;
    bool keepIt = true;
    while(i < int(pat.size()) and keepIt){
        pos = isIt(pat[i], word, pos);
        if(pos < int(word.size())){
            pos++;
            i++;
        } else keepIt = false;
    }
    return i >= int(pat.size());
}