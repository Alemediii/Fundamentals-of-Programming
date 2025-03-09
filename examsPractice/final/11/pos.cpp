#include <iostream>
#include <array>

using namespace std;
const int MAX_WORDS = 15;
const int MAX_REPS = 5;


typedef array<int, MAX_REPS> Numbers; 

struct TWords{
    string word;
    int nPos;
    Numbers positions;
};

typedef array<TWords, MAX_WORDS> Words;
struct TData{
    Words w;
    int nElements;
};

int isTheWord(TData d, string word){
    int i = 0;
    while(i < d.nElements and word != d.w[i].word){
        i++;
    }
    return i;
}

void show(TData d){
    cout << "resulting words: " << endl; 
    for (int i = 0; i < d.nElements; i++)
    {
        cout << d.w[i].word << ": ";
        for (int j = 0; j < d.w[i].nPos; j++)
        {
            cout << d.w[i].positions[j] << " ";
        }
        cout << endl;
    }
}

void store(TData& d, string word, int pos);

int main(){
    TData d;
    d.nElements = 0;
    int count = 0;
    string word;
    cout << "define: "; cin >> word;
    while(word != "END"){
        store(d, word, count);
        cin >> word;
        count++;
    }

    show(d);
}

void store(TData& d, string word, int pos){
    int i = isTheWord(d, word);
    if(i >= d.nElements){
        d.w[d.nElements].word = word;
        d.w[d.nElements].positions[0] = pos;
        d.w[d.nElements].nPos = 1;
        d.nElements++;
    } else {
        d.w[i].positions[d.w[i].nPos] = pos;
        d.w[i].nPos++;
    }
}