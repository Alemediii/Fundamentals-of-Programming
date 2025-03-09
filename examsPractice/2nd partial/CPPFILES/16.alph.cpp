#include <iostream>
#include <array>
#include <string>

using namespace std;
const int MAX = 10;

typedef array<string, MAX> words;
struct twords{
    words w;
    int size;
};

void read();
bool isIt(twords t, const string word);
bool isOrdered(string w);

int main(){
    read();
}

bool isIt(twords t, const string word){
    int i = 0;
    while(i < t.size and t.w[i] != word) i++;
    return i < t.size;
}

bool isOrdered(string w){
    char prev = w[0];
    bool suc = true;
    for(char c: w){
        if(c < prev) suc = false;
        prev = c;
    }
    return suc;
}

void read(){
    twords w;
    string word;
    w.size = 0;
    while(cin >> word and word != "END"){
        if(isOrdered(word) and not isIt(w, word)){
            w.w[w.size] = word;
            w.size++;
        }
    }

    for (int i = 0; i < w.size; i++)
    {
        cout << w.w[i] << " ";
    }
}