#include <iostream>
#include <array>

using namespace std;
const int MAX_WORDS = 25;

typedef array<int, MAX_WORDS> Positions;

struct TPositions{
    Positions pos;
    int numPos = 0;
};

struct TWords{
    string word;
    TPositions pos;
};

typedef array<TWords, MAX_WORDS> Data;

struct TData{
    Data d;
    int nEl = 0;
};

bool isRepeated(TData d, string word){
    int i = 0;
    while(i < d.nEl and d.d[i].word != word){
        i++;
    }
    return i < d.nEl;
}

void show(TData d){
    cout << "data is: " << endl;
    for (int i = 0; i < d.nEl; i++)
    {
        cout << "{ " << d.d[i].word << " ";
        for (int j = 0; j < d.d[i].pos.numPos; j++)
        {
            cout << d.d[i].pos.pos[j] << " ";
        }
        cout << " }" << endl;
    }
}

void read(TData& d);        
int position(TData d, string word);

int main(){
    TData d;
    read(d);
    show(d);
}

void read(TData& d){        
    string word;
    int count = 1;

    cout << "define: ";
    cin >> word;
    while(word != "END"){
        if(not isRepeated(d, word)){
            d.d[d.nEl].word = word;
            d.d[d.nEl].pos.pos[d.d[d.nEl].pos.numPos] = count;
            d.d[d.nEl].pos.numPos++;
            d.nEl++;
        } else {
            int pos = position(d, word);
            d.d[pos].pos.pos[d.d[pos].pos.numPos] = count;
            d.d[pos].pos.numPos++;
        }
        count++;
        cin >> word;
    }

}

int position(TData d, string word){
    int i = 0;
    while(i < d.nEl and d.d[i].word != word){
        i++;
    }
    return i;
}