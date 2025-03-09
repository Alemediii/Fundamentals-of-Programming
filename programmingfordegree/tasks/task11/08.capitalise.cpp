#include <iostream>
using namespace std;

string numberOfWords(string s);

int main(){
    cout << numberOfWords("sorry, numbers on the board");
}

bool isAWord(char c);
char toUp(char c);
char toLo(char c);


string numberOfWords(string s){
    string r = s;
    bool isIt = true;
    for (int i = 0; i < r.length(); i++)
        if(isAWord(r[i])){
            if(isIt) r[i] = toUp(r[i]);
            else r[i] = toLo(r[i]);
        isIt = false;
        } else isIt = true;
    return r;
}

bool isAWord(char c){
    return (c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z');
}

char toUp(char c){
    if(c >= 'a' and c <= 'z') return c + 'A' - 'a';
    else return c;
}

char toLo(char c){
    if(c >= 'A' and c <= 'Z') return c + 'a' - 'A';
    else return c;
}