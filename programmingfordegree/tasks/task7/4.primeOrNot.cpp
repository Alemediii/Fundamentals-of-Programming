#include <iostream>
using namespace std;

bool isPrime(long long n);

int main(){
    long long n = 83245675863;
    if(isPrime(n)) cout << "the number " << n << " is prime";
    else cout << "the number " << n << " is not prime";
}

bool isPrime (long long n)
{
    long long d = 3;
    if (n % 2 != 0)
        while (n % d != 0 and d * d < n)
            d += 2;
    return (n % 2 != 0 and d * d > n) ;
}