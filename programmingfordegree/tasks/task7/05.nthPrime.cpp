#include <iostream>
using namespace std;

bool isPrime(long long n);
unsigned long long nPrime(int n);

int main ()
{
    for (int i = 1; i < 100; i += 10)
    cout << i << ": " << nPrime (i) << endl;
}

unsigned long long nPrime(int n){
    int contPrim = 0, i = 0, prime;
    while(contPrim < n){
        if(isPrime(i)) {
            contPrim++;
            prime = i;
        }
        i++;
    }
    return prime;
}



bool isPrime (long long n)
{
    long long d = 3;
    if (n % 2 != 0)
        while (n % d != 0 and d * d < n)
            d += 2;
    return (n % 2 != 0 and d * d > n) ;
}