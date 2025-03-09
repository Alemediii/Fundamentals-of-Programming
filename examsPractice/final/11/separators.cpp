#include <iostream>
#include <array>
#include <string>

using namespace std;
const int MAX_WORDS = 20;

struct Words{
    string chain;
    int nApp;
};

typedef array<Words, MAX_WORDS> TWords;

struct TData{
    TWords words;
    int nTok;
};

int searchPos(TData d, string word);
void getToken(string chain, string sep, TData& d);
void getAToken(string chain, string sep, unsigned& counter, string& token);

bool isIt(char c, string sep){
    int i = 0;
    while(i < sep.length() and c != sep[i]){
        i++;
    }
    return i < sep.length();
}

void show(TData d){
    cout << "tokens are: ";
    for (int i = 0; i < d.nTok; i++)
    {
        cout << endl;
        cout << "{" << d.words[i].chain << ", " <<
        d.words[i].nApp << "}";
    }   
}

int main(){
    string chain = "Marta Maria;Juan;Perez Lopez,Juanan;Juan";
    string sep = " ";

    TData d;
    getToken(chain, sep, d);
    show(d);
}

void getToken(string chain, string sep, TData& d){
    unsigned counter, pos;
    string token;
    counter = d.nTok = 0;

    while(counter < chain.length()){
        getAToken(chain, sep, counter, token);
        pos = searchPos(d, token);
        if(pos < d.nTok){
            d.words[pos].nApp++;
        } else {
            d.words[d.nTok].chain = token;
            d.words[d.nTok].nApp = 1;
            d.nTok++;
        }
    }
}

int searchPos(TData d, string word){
    int i = 0;
    while(i < d.nTok and d.words[i].chain != word){
        i++;
    }
    return i;
}

void getAToken(string chain, string sep, unsigned& counter, string& token){
    token = "";
    while(counter < chain.length() and not isIt(chain[counter], sep)){
        token += chain[counter];
        counter++;
    }
    counter++;
}