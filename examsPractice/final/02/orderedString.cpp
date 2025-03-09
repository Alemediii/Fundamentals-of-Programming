#include <iostream> 
#include <array> 
#include <string>

using namespace std;
const int MAX_WORDS = 15;
const int MAX_SIZE = 6;

typedef array<string, MAX_WORDS> Words;

struct TWords{
    Words words;
    int nEl;
};

bool isTheWord(TWords w, string word){
    int i = 0;
    while(i < w.nEl and word != w.words[i] ) i++;
    return i < w.nEl;
}

bool isOrdered(string word){
    bool success = true;
    for (int i = 1; i < int(word.size()); i++)
    {
        if(word[i - 1] > word[i]) success = false;  
    }
    return success;
}

void show(TWords w);

int main(){
    TWords w;
    w.nEl = 0;
    string word;

    cout << "define the text: ";
    cin >> word;

    while(word != "END"){
    if(isOrdered(word) and not isTheWord(w, word)){
        w.words[w.nEl] = word;
        w.nEl++;
        }
        cin >> word;
    } 

    show(w); 
}

void show(TWords w){
    cout << "the words are: ";
    for (int i = 0; i < w.nEl; i++)
    {
        cout << w.words[i] << " ";
    }
}