// Alejandro Medina Diaz
//  2023 - 11 - 09

#include <iostream>
using namespace std;

bool isPrime(int n);
bool isPrimRec(int n, int divisor);

int main()
{
    for (int i = 2; i < 24; ++i)
        cout << i << ": " << (isPrime(i) ? "IS prime" : "is NOT prime") << endl;
}

bool isPrime(int n)
{
    return isPrimRec(n, 2);
}
bool isPrimRec(int n, int divisor)
{
    if (divisor == n)
        return true;
    if (n % divisor == 0)
        return false;
    isPrimRec(n, divisor + 1);
}
