#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n);

int main(){
    int n = 15;
    if(isPrime(n)) cout << "the number " << n << " is not prime";
    else cout << "the number " << n << " is prime";
}

bool isPrime(int n){
    bool isPrime = false;
    for (int i = 2; i < sqrt(n); i++)
    {
        if(n % i == 0) isPrime = true;
    }
    return isPrime;
}