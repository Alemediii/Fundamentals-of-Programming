#include <iostream>
#include <array>

using namespace std;
const int SIZE = 10;

typedef array<int, SIZE> Numbers;

struct TNumbers{
    Numbers n;
    int nEl;
};

bool isPrime(int value);
bool isValid(int value);
TNumbers deletePrime(TNumbers n, int& pos, int& prime);

void read(TNumbers& n){
    for (int i = 0; i < n.nEl; i++)
    {
        cin >> n.n[i];
    }
}

void readSize(int& value){
    cout << "define size: "; 
    cin >> value;
    while(not isValid(value)){
        cout << "define size: "; 
        cin >> value;
    }
}

void show(TNumbers n){
    for (int i = 0; i < n.nEl; i++)
    {
        cout << n.n[i] << " ";
    }
}


int main(){
    int prime, pos;
    TNumbers n;
    readSize(n.nEl);
    
    cout << "define the elements: ";
    read(n);
    
    TNumbers p = deletePrime(n, pos, prime);
    if(n.nEl == p.nEl) cout << "no primes";
    else{
        cout << "prime is " << prime << " and pos is " << pos << endl;
        show(p);
    }
}

bool isPrime(int value){
    int i = 2;
    while(value % i != 0 and i < value){
        i++;
    }
    return not(i < value);
}

TNumbers deletePrime(TNumbers n, int& pos, int& prime){
    bool success = false;
    pos = 0;
    for (int i = 0; i < n.nEl and not success; i++)
    {
        if(isPrime(n.n[i])){
            success = true;
            pos = i;
            prime = n.n[i];
        } 
    }

    if(success){
    for (int j = pos; j < n.nEl; j++)
    {
        n.n[j] = n.n[j + 1];
    }
    n.nEl -= 1;
    }

    return n;
}

bool isValid(int value){
    return value >= 1 and value <= 10;
}