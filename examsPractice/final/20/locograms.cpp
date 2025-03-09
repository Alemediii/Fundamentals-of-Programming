#include <iostream>
#include <array>

const int N = 20;
using namespace std;

typedef array<string, N> Serie;

struct Data{
    Serie s;
    int nWords;
};

const int NLetters = 'Z' - 'A' + 1;
typedef array<bool, NLetters> Letters;

bool isRepeated(Data d, string word);
void app(string word, Letters& let);
bool areLocoGrams(string word1, string word2);
void proccess(Data& d, string& first, string& word);
void readProcces(Data& d);
void show(Data d);

int main(){
    Data d;
    readProcces(d);
    cout << endl;
    show(d);
}

bool isRepeated(Data d, string word){
    int i = 0;
    while(i < d.nWords and d.s[i] != word) i++;
    return i < d.nWords;
}

void app(string word, Letters& let){
    let = {false};
    for (int i = 0; i < int(word.size()); i++)
        if('A' <= word[i] and 'Z' >= word[i]) 
            let[word[i] - 'A'] = true;
}

bool areLocoGrams(string word1, string word2){
    bool ok = word1.size() == word2.size();
    if(ok){
        Letters lt1, lt2;
        app(word1, lt1);
        app(word2, lt2);
        ok = (lt1 == lt2);
    }
    return ok;
}

void proccess(Data& d, string& first, string& word){
    if(not isRepeated(d, word) and areLocoGrams(first, word)){
        d.s[d.nWords] = word;
        d.nWords++;
    }
}

void readProcces(Data& d){
    string first, word;
    d.nWords = 0;
    cout << "define the text: ";
    cin >> first;
    if(first != "END"){
        cin >> word;
        while(word != "END"){
            proccess(d, first, word);
            cin >> word;
        }
    }
}

void show(Data d){
    cout << "the locograms words are: " << endl;
    for (int i = 0; i < d.nWords; i++)
    {
        cout << d.s[i] << ", ";
    }
}