#include <iostream>
#include <string>
#include <array>

using namespace std;
const int MAX_WORDS = 25;

struct Words{
    string word;
    int nApp = 0;
};

typedef array<Words, MAX_WORDS> TWords;

struct TData{
    TWords w;
    int nEl = 0;
};

int searchPos(TData d, string word);
bool isASeparator(string word, char c);

void show(TData d){
    cout << "words are: " << endl;
    for (int i = 0; i < d.nEl; i++)
    {
        cout << "{" << d.w[i].word << ", " <<
        d.w[i].nApp << "}";
    }
}

void getToken(string sep, string word, TData d);
void getAToken(string sep, string word, string chain, int counter);

int main(){
    TData d;
    string sep = " ;,:";
    string word = "Marta Maria;Juan;Perez Lopez,Juanan;Juan";


    getToken(sep, word, d);
    show(d);
}

int searchPos(TData d, string word){
    int i = 0;
    while(i < d.nEl and d.w[i].word != word){
        i++;
    }
    return i;
}

bool isASeparator(string word, char c){
    int i = 0;
    while(i < int(word.size()) and word[i] != c){
        i++;
    }
    return i < int(word.size());
}

void getToken(string sep, string word, TData d){
    unsigned counter, pos;
    string token;
    counter = pos = 0;
    while(counter < int(word.size())){
        getAToken(sep, word, token, counter);
        pos = searchPos(d, token);
        if(pos < d.nEl) d.w[pos].nApp++;
        else{
            d.w[d.nEl].word = token;
            d.w[d.nEl].nApp = 1;
            d.nEl++;
        }
    }
}

void getAToken(string sep, string word, string& chain, int& counter){
    chain = "";
    while(counter < int(chain.length()) and not isASeparator(sep, word[counter])){
        chain += word[counter];
        counter++;
    }
    counter++;
}