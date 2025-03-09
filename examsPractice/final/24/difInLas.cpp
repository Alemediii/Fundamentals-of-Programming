#include <iostream>
#include <array>

using namespace std;
const int MAX = 15;

struct Words{
    string word;
    int lastP;
    int dist = -1;
};

typedef array<Words, MAX> TWords;

struct TData{
    TWords w;
    int nEl = 0;
};

void read(TData& d);
void show(TData d);
int position(TData d, string word);

int main(){
    TData d;
    read(d);
    show(d);
}

void read(TData& d){
    string word;
    cout << "define word: ";
    cin >> word;
    while(word != "END"){
        int pos = position(d, word);
        if(pos == d.nEl){
            d.w[d.nEl].word = word;
            d.w[d.nEl].lastP = pos;
            d.nEl++;
        }
        int dist = pos - d.w[pos].lastP - 1;
        if(dist > d.w[pos].dist)
        d.w[pos].dist = dist;
        d.w[pos].lastP = pos;
        cin >> word;
    }
}

void show(TData d) {
    int i = 0;
    cout << "data is: \n";
    while (i < d.nEl) {
        if (d.w[i].dist != -1) {
            cout << d.w[i].word << ": " << d.w[i].dist << endl;
        }
        i++;
    }
}

int position(TData d, string word){
    int i = 0;
    while(i < d.nEl and d.w[i].word != word){
        i++;
    }
    return i;
}