#include <iostream>
#include <array>

using namespace std;
const int maximum = 10;

struct num{
    int numero;
    int freq = 0;
};

typedef array<num, maximum> myNum;

struct myNumbers{
    myNum n;
    int nEl = 0;
};

void readSerie(myNumbers& n);
void showSerie(myNumbers n);
bool isTheNumber(int num, myNumbers n);
bool isNumber(int num, myNumbers m);

int main(){
    myNumbers n;
    readSerie(n);
    showSerie(n);
}

void readSerie(myNumbers& n){
    cout << "define the serie: ";
    int i = 0;
    while(cin >> n.n[i].numero and n.n[i].numero != 0){
        if(not isTheNumber(n.n[i].numero, n)){
            n.n[i].freq++;
        }
        i++;
    }
}

void showSerie(myNumbers n){
    cout << "the serie: ";
    cout << "{";
    for (int i = 0; i < n.nEl; i++)
    {
        cout << n.n[i].numero << " "; 
    }
    cout << "}";
}

bool isTheNumber(int num, myNumbers n){
    int i = 0;
    while(i < n.nEl and n.n[i].numero != num){
        i++;
    }
    return i < n.nEl;
}

bool compareLists(myNumbers n, myNumbers m){
    int i = 0;
    int j = 0;
    bool success = false;
    if(n.nEl != m.nEl){
        while(not isNumber(n.n[i].numero, m))

    }
}