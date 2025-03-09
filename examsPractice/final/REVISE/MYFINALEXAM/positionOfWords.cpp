#include <iostream>
#include <array>

using namespace std;
const int MAX_WORDS = 20;
const int MAX_SIZE = 9;

typedef array<int, MAX_WORDS> Positions;

struct Words{
    string word;
    Positions pos;
    int nEl = 0;
};

typedef array<Words, MAX_WORDS> Data;

struct TData{
    Data d;
    int elements = 0;
};

void readWords(TData& d);
void showWords(TData d);
int position(TData d, string word);

int main(){
    TData d;
    readWords(d);
    showWords(d);
}

void readWords(TData& d){
    string word; 
    int counter = 0;
    cout << "define: ";
    cin >> word;
    while(word != "END"){
        int pos = position(d, word);
        if(pos == d.elements){
            d.d[pos].word = word; 
            d.elements++;
        }
            d.d[pos].pos[d.d[pos].nEl] = counter++;
            d.d[pos].nEl++; 
            cin >> word;
    }
}

void showWords(TData d){
    cout << "data is: \n " ;
    for (int i = 0; i < d.elements; i++)
    {
        cout << d.d[i].word << ": ";
        for (int j = 0; j < d.d[i].nEl; j++)
        {
            cout << d.d[i].pos[j] << " ";
        }
        cout << endl;
    }
}

int position(TData d, string word){
    int i = 0;
    while(i < d.elements and word != d.d[i].word){
        i++;
    }
    return i;
}