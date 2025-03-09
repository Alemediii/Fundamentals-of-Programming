#include <iostream>
#include <array>

using namespace std;
typedef array<int, 256> TFreqs;

string boolToString(bool value);
TFreqs getFreq(string s);
bool compareFreqs(TFreqs a, TFreqs b);

int main(){
    cout << "are the string a permutation of the other? " <<
    boolToString(compareFreqs(getFreq("MedinaDiaz,Alejandro"), getFreq("Alejandro,MedinaDiaz")));

    cout << endl;
 
    cout << "are the string a permutation of the other? " <<
    boolToString(compareFreqs(getFreq("MedaDiaz,Alejro"), getFreq("Alejand,Medinaz")));
}

TFreqs getFreq(string s){
    TFreqs r;
    for (int i = 0; i < 256; i++)
        r[i] = 0;

    for (int i = 0; i < s.length(); i++)
        ++r[s[i]];
    return r; 
}

bool compareFreqs(TFreqs a, TFreqs b){
    bool success = true;
    for (int i = 0; i < 256; i++)
    {
        if(a[i] != b[i]) success = false;
    }
    return success;
}

string boolToString(bool value){
    return value ? "true" : "false";
}