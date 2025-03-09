#include <iostream>
#include <array>

using namespace std;
const int N = 20;

// typedef array<char, N> Chars;

struct Seg{
    int origin;
    int length = 1;
};

typedef array<Seg, N> Data;

struct TData{
    Data d;
    int nEl = 0;
};

void run(string word, char c, TData& seg);
void show(TData d);

int main(){
    TData d;
    run("abcaaabbbaaaaaabaaaabababaaaa", 'c', d);
    show(d);
}

void run(string word, char c, TData& seg){
    seg.nEl = 0;
    int counter = 1;
    for (int i = 0; i < int(word.size()); i++)
    {
        if (word[i] == c) {
            if (i > 0 && word[i - 1] == c) {
                counter++;
            } else {
                seg.d[seg.nEl].origin = i;
                counter = 1;
                seg.nEl++;
            }
            seg.d[seg.nEl - 1].length = counter;
        }
    }
}


void show(TData seg){
    cout << "format: {origin, length}" << endl;
    for (int i = 0; i < seg.nEl; i++)
    { 
        cout << "{" << seg.d[i].origin << ", " << seg.d[i].length << "}";
        cout << endl;
    }
}

