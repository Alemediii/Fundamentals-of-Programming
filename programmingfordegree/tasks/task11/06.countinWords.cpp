#include <iostream>
using namespace std;

int numberOfWords(string s);
bool isAWord(string s);

int main(){
    cout << numberOfWords("sorry, numbers on the board");
}

bool isAWord(char c){
    return (c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z');
}

int numberOfWords(string s){
    int res = 0;
    bool isIt = true;
    for (int i = 0; i < s.length(); i++)
        if(isAWord(s[i])){
            if(isIt) res++;
        isIt = false;
        } else isIt = true;
    return res;
}