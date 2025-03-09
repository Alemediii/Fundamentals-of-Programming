#include <iostream>
#include <array>
#include <string>

using namespace std;
const int MAX = 20;
const int MAXPAT = 5;

struct TWord{
    string word;
    int num = 0;
};

typedef array<TWord, MAX> Words; 

struct TData{
    Words word;
    int size;
};

bool patronCharRepeated(string word);
bool isIt(TData& t, string word);
bool isLetter(string word, char letter);
int commonLetters(string pat, string word);
void show(TData& t);

int main(){
    TData v;
    string pat, word;
    bool noRep;
    v.size = 0;

    while(cin >> pat and pat.size() < MAXPAT and patronCharRepeated(pat)){
        cout << "give the pat: ";
    }

    cout << "give the text: ";
    cin >> word;
    while(word != "END"){
        if(isIt(v, word)){
            v.word[v.size].num = commonLetters(pat, word);
            v.word[v.size].word = word;
            v.size++;
        }
        cin >> word;
    }
    show(v);
}

bool patronCharRepeated(string word){
    int count = 0;
    char let = 'A';
    bool isIt = true;
    while(let <= 'Z' and isIt){
        for (int i = 0; i < word.size(); i++)
            if(word[i] == let) count++;

    if(count > 1) isIt = false;
    count = 0;
    let++;    
    }
    return isIt;
}

bool isIt(TData& t, string word){
    int i = 0;
    while(i < t.size and t.word[i].word != word) i++;
    return i < t.size;
}

bool isLetter(string word, char letter){
    int i = 0;
    while(i < word.size() and word[i] != letter){
        i++;
    }
    return i < word.size();
}

int commonLetters(string pat, string word){
    int counter = 0;
    for (int i = 0; i < pat.size(); i++)
        if(isLetter(word, pat[i])) counter++;
    return counter;
}

void show(TData& t){
    for (int i = 0; i < t.size; i++)
    {
        cout << t.word[i].word << " "
        << t.word[i].num << endl;
    }
}