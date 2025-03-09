// 3.gcd.cpp
// Alejandro Medina Diaz
// The working way of my programme, is that it equalises the divisor of two numbers to the lowest between these,
// if there is a number which divides both of the numbers, that is the gcd

#include <iostream>
using namespace std;

int gcd(int a, int b);

int main()
{
    cout << "gcd 1 is: " << gcd(8, 12);

    cout << endl;

    cout << "gcd 2 is: " << gcd(20, 65);

    cout << endl;

    cout << "gcd 3 is: " << gcd(48, 18);
}

int gcd(int a, int b)
{
    int i = 1;
    if (a < b)
        i = a;
    else
        i = b;
    bool divisor = true;
    while (divisor)
    {
        if (a % i == 0 and b % i == 0)
            divisor = false;
        else
            --i;
    }
    return i;
}
