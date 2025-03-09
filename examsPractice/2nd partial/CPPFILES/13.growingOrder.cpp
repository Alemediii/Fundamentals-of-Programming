#include <iostream>
#include <vector>
#include <string>

using namespace std;
const int MAXDIF = 10;
const int MAXDIFCH = 9;
typedef vector<string> Words;

Words read();
bool isNot(Words w, string word);
void show(Words w);
void order(Words& w);

int main(){
    Words w = read();
    order(w);
    show(w);
}

Words read(){
    Words w;
    string word;
    int count = 0;
    while(cin >> word and word != "END" and count < MAXDIF and word.length() < MAXDIFCH){
        if(isNot(w, word)) count++;
        w.push_back(word);
    }
    return w;
}

bool isNot(Words w, string word){
    int i = 0;
    while(i < w.size() and word != w[i]) i++;
    return i < w.size();
}

void show(Words w){
    for (int i = 0; i < w.size(); i++)
    {
        cout << w[i] << " ";
    }
}

void order(Words& w){
    for (int i = 0; i < w.size() - 1; i++)
        for (int j = 0; j < w.size() - 1; j++)
            if(w[j].length() > w[j + 1].length()) swap(w[j], w[j + 1]);
}