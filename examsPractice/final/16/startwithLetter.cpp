#include <iostream>
#include <array>

using namespace std;
const int MAX_WORDS = 25;

typedef array<string, MAX_WORDS> Word;

struct Words{
    Word w;
    int numWords = 0;
};

struct TWords{
    Words wor;
    char firstLetter;
};

typedef array<TWords, MAX_WORDS> Data;

struct TData{
    Data d;
    int nEl = 0;
};

void show(TData d){
    cout << "data is: ";
    for (int i = 0; i < d.nEl; i++)
    {
        cout << d.d[i].firstLetter << ": ";
        for (int j = 0; j < d.d[i].wor.numWords; j++)
        {
            cout << d.d[i].wor.w[j] << ", ";
        }
        cout << endl;
    }
}

//NOT USED
bool isRepeated(TData d, string word, int pos){
    int i = 0;
    while(i < d.d[pos].wor.numWords and d.d[pos].wor.w[i] != word){
        i++;
    }
    return i < d.nEl;
}

int isFirstLetterRepeated(TData d, char let){
    int i = 0;
    while(i < d.nEl and d.d[i].firstLetter != let){
        i++;
    }
    return i;
}

bool isTheCharRepeated(TData d, char let){
    int i = 0;
    while(i < d.nEl and d.d[i].firstLetter != let){
        i++;
    }
    return i < d.nEl;
}

int main(){
    TData d;
    string word;
    cout << "define the text: ";
    cin >> word;
    while(word != "END"){
        if(not isTheCharRepeated(d, word[0])){
            d.d[d.nEl].firstLetter = word[0];
            d.nEl++;
        } 
            int pos = isFirstLetterRepeated(d, word[0]);
            d.d[pos].wor.w[d.d[pos].wor.numWords] = word; 
            d.d[pos].wor.numWords++; 
        cin >> word;
    }

    show(d);
}