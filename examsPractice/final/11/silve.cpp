#include <iostream>
#include <string>
#include <array>

using namespace std;
const int MAX_WORDS = 25;

struct Words{
    string word;
    int nApp = 0;
};

typedef array<Words, MAX_WORDS> TWords;

struct TData{
    TWords w;
    int nEl = 0;
};

void show(TData d){
    for (int i = 0; i < d.nEl; i++)
    {
        cout << ""
    }
    
}