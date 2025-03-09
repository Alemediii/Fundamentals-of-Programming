#include <iostream> 
#include <array> 

const int MAX_POS = 10;
const int MAX_WORDS = 25;
using namespace std;

typedef array<int, MAX_POS> Positions;

struct Words{
    string word;
    Positions pos;
    int elements = 0;
};

typedef array<Words, MAX_WORDS> Data;

struct TData{
    Data d;
    int nEl = 0;
};

void show(TData d);
void read(TData& d);
int pos(TData d, string word);


int main(){
    TData d;
    read(d);
    show(d);
}

void show(TData d){
    cout << "data is: ";
    for (int i = 0; i < d.nEl; i++)
    {
        cout << d.d[i].word << ": ";
        for (int j = 0; j < d.d[i].elements ; i++)
        {
            cout << d.d[i].pos[j] << ": ";    
        }
        cout << endl;
    }
}

void read(TData& d){
    string word;
    cout << "define text: ";
    cin >> word;
    while(word != "END"){
        int position = pos(d, word);
        if(position > d.nEl){
            d.d[d.nEl].word = word;
            d.d[d.nEl].pos[d.d[d.nEl].elements] = d.nEl;
            d.d[d.nEl].elements++;
            d.nEl++;
        }
        if(position < d.nEl){
            d.d[d.nEl].pos[d.d[d.nEl].elements] = d.nEl;
            d.d[d.nEl].elements++;
        }
        cin >> word;
    }
}

int pos(TData d, string word){
    int i = 0;
    while(i < d.nEl and d.d[i].word != word){
        i++;
    }
    return i;
}