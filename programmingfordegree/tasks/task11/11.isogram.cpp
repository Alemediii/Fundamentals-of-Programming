#include <iostream>
#include <array>

using namespace std;
typedef array<int, 256> TFreqs;

string boolToString(bool value);
TFreqs getFreq(string s);
bool uniqueFreqs(TFreqs r);
char toLow(char c);

int main(){
    cout << " is it an isogram? " << boolToString(
    uniqueFreqs(getFreq("MedinaDiaz,Alejandro")));

    cout << endl;

    cout << " is it an isogram? " << boolToString(
    uniqueFreqs(getFreq("Dermatoglyphics")));
}

TFreqs getFreq(string s){
    TFreqs r;
    for (int i = 0; i < 256; i++)
        r[i] = 0;

        for (int i = 0; i < s.length(); i++)
        ++r[toLow(s[i])];

    return r; 
}

bool uniqueFreqs(TFreqs r){
    int i = 0;
    while(i < 256 and r[i] < 2)
    i++;
    return i == 256; 
}

char toLow(char c){
    char r = c;
    if ('A' <= c and c <= 'Z')
        r = c + 'a'-'A';
    return r;
}

string boolToString(bool value){
    return value ? "true" : "false";
}