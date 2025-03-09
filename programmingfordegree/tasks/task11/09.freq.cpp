#include <iostream>
#include <array>

using namespace std;
typedef array<int, 256> TFreqs;

TFreqs getFreq(string s);
void printFreqs(TFreqs r);

int main(){
    printFreqs(getFreq("MedinaDiaz,Alejandro"));
}

TFreqs getFreq(string s){
    TFreqs r;
    for (int i = 0; i < 256; i++)
        r[i] = 0;

    for (int i = 0; i < s.length(); i++)
        ++r[s[i]];
    return r; 
}

void printFreqs(TFreqs r){
    for (int i = 0; i < 256; i++)
        if(r[i] > 0) cout << char(i) << ": " << r[i] << endl;
}