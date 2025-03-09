#include <iostream>
#include <string>
#include <array>

using namespace std;
const int MAX_WORDS = 23;

typedef array<string, MAX_WORDS> Words;

struct TWords{
    string word;
    int firstPos;
    int lastPos;    
};

typedef array<TWords, MAX_WORDS> Data;

struct TData{
    Data d;
    int nEl;
};

bool isRepeated(TData d, string word){
    int i = 0;
    while(i < d.nEl and d.d[i].word != word){
        i++;
    }
    return i < d.nEl;
}

void show(TData d){
    for (int i = 0; i < d.nEl; i++)
    {
        cout << d.d[i].word << " " << d.d[i].firstPos
        << " " << d.d[i].lastPos; 
        cout << endl;
    }
}

int main(){
    TData d;
    string word;
    int firstPos, lastPos;

    d.nEl = 0;
    cout << "define: "; cin >> word;
    int counter = 0;
    while(word != "END" and d.nEl < MAX_WORDS){
        counter++;
        if(not isRepeated(d, word)){
            d.d[d.nEl].word = word;
            d.d[d.nEl].firstPos = counter;
            d.d[d.nEl].lastPos = counter;
            d.nEl++;
        }
        else {
            for (int i = 0; i < d.nEl; ++i)
                if (d.d[i].word == word)
                    d.d[i].lastPos = counter;
                }
        cin >> word;
    }

    show(d);
}