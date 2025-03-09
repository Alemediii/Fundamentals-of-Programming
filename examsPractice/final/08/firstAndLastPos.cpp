#include <iostream>
#include <array>
#include <string>

using namespace std;
const int MAX_WORDS = 20;

struct Words{
    string word;
    int firstPos = 0;
    int lastPos = 0;
};

typedef array<Words, MAX_WORDS> Data;

struct TData{
    Data d;
    int nEl = 1;
};

bool isRepeated(TData d, string word){
    int i = 0;
    while(i < d.nEl and d.d[i].word != word){
        i++;
    }
    return i < d.nEl;
}

int pos(TData d, string word){
    int i = 0;
    while(i < d.nEl and d.d[i].word != word){
        i++;
    }
    return i;
}

void show(TData d){
    cout << "data is: " << endl;  
    for (int i = 1; i < d.nEl; i++)
    {
        cout << d.d[i].word << ": " << d.d[i].firstPos
        << " " << d.d[i].lastPos;
        cout << endl;
    }
}

int main(){
    TData d;
    string word;
    int count = 1;

    cout << "define text: "; 
    cin >> word;
    while(word != "END"){
        if(not isRepeated(d, word))
        {
            d.d[d.nEl].word = word;
            d.d[d.nEl].firstPos = count;
            d.d[d.nEl].lastPos = count;
            d.nEl++;
        } else{
            int x = pos(d, word);
            d.d[x].lastPos = count;
        }
        count++;
        cin >> word;
    }

    show(d);
}