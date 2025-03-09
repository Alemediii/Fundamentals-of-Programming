#include <iostream>
#include <array>

using namespace std;
const int TAM = 10;
typedef array<int, TAM> TNumbers;

TNumbers read(int& size);
void highestPrime(TNumbers n, bool& isPrime, int& highest);
bool isItPrime(int value);

int main(){
    int size = 0, highest;
    bool isPrime;
    TNumbers n = read(size);
    highestPrime(n, isPrime, highest);
    
    if(isPrime) cout << "the highest prime is: " << highest;
    else cout << "there is no prime";
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

bool isItPrime(int value){
    int i = 2;
    while(value % i != 0 and i < value){
        i++;
    }
    return i < value;
}

void highestPrime(TNumbers n, bool& isPrime, int& highest){
    highest = n[0];
    for (int i = 0; i < TAM; i++)
    {
        if(not isItPrime(n[i]) and n[i] > highest){
            highest = n[i];
            isPrime = true;
        } 
    }   
}