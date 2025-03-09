#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n);
void nPrime(int pos, int &prime);

int main(){
    int pos = 7, prime;
    nPrime(pos, prime);
    cout << "the " << pos << "th prime number is " << prime;
}

bool isPrime(int n){
    bool isPrime = false;
    for (int i = 2; i < sqrt(n); i++)
    {
        if(n % i == 0) isPrime = true;
    }
    return isPrime;
}

void nPrime(int pos, int& prime){
    int counter = 0, number = 2;
    while(counter != pos){
        if(isPrime(number)) counter++;
        number++;
    }
    prime = number;
}