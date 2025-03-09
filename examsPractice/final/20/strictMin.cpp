#include <iostream>
#include <array>

using namespace std;
const int TAM = 10;
typedef array<int, TAM> TNumbers;

TNumbers read(int& size);
void isStrictlyMinor(TNumbers n, bool& strictMinor, int& minor);

int main(){
    int size = 0, minor;
    bool strictMinor;
    TNumbers n = read(size);
    isStrictlyMinor(n, strictMinor, minor);
    
    if(strictMinor) cout << "the strict minor is: " << minor;
    else cout << "there is no strict minor";
}

TNumbers read(int& size){
    int num;
    TNumbers n;
    while(size < TAM and cin >> num and num != 0){
        n[size] = num;
        size++;
    }
    return n;
}

void isStrictlyMinor(TNumbers n, bool& strictMinor, int& minor){
    minor = n[0];
    strictMinor = true;
    for (int i = 1; i < TAM; i++)
    {
        if(n[i] == minor){
            strictMinor = false;
        } else if(n[i] < minor){
            minor = n[i];
            strictMinor = true;
        } 
    }
}