#include <iostream>
using namespace std;

bool isPrime(int n1);
int coprime(int n1);
int gcd(int a, int b);

int main(){
    int n1;
    cout << "define n1: "; cin >> n1;
    if(isPrime(n1)) cout << "It is prime, so the eulerfunction = " << n1 - 1;
    else cout << "The eulerfunction of " << n1 << " is " << coprime(n1);
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int coprime(int n1){
    int counter;
    for (int i = 1; i < n1; i++){
        if(gcd(n1, i) == 1) counter++;
    }
    return counter;
}

bool isPrime(int n1){
    bool success = true;
    for (int i = 2; i < n1; i++)
    {
        if(n1 % i == 0) 
        success = false;
    }
    return success;
}
