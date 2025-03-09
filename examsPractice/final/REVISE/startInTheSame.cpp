#include <iostream>
#include <array>
#include <string>

using namespace std;

const int MAX_WORDS = 20;
const int MAX_LENGTH = 12;

typedef array<string, MAX_WORDS> Words;
struct TWords{
    char firstLetter;
    Words w;
    int nEl = 0;
};

typedef array<TWords, MAX_WORDS> Data;
struct TData{
    Data d;
    int numEl = 0;
};

void show(TData d);
void read(TData& d);
int pos(TData d, char c);

int main(){
    TData d;
    read(d);
    show(d);
}

void show(TData d){
    cout << "data is: ";
    for (int i = 0; i < d.numEl; i++)
    {
        cout << d.d[i].firstLetter << ": ";
        for (int j = 0; j < d.d[i].nEl; j++)
        {
            cout << d.d[i].w[j] << " ";
        }
        cout << endl;
    }
}

void read(TData& d){
    string word;
    cout << "define the data: "; 
    cin >> word;
    while(word != "END"){
        int position = pos(d, word[0]);
        if (position == d.numEl) {
            d.d[d.numEl].firstLetter = word[0];
            d.numEl++;
        }
        d.d[position].w[d.d[position].nEl] = word;
        d.d[position].nEl++;
        cin >> word;
    }
}

int pos(TData d, char c){
    int i = 0;
    while(i < d.numEl and c != d.d[i].firstLetter){
        i++;
    }
    return i;
}