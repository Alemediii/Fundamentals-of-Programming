// 3.gcd.cpp
// Alejandro Medina Diaz

#include <iostream>
using namespace std;

int gcd(int a, int b);
void simplify(int &a, int &b);

int main()
{
    int a = 30, b = 36;
    simplify(a, b);
    cout << "new numerator and denominator of the values are: " << a << " and " << b;

    cout << endl;

    int c = 15, d = 60;
    simplify(c, d);
    cout << "new numerator and denominator of the values are: " << c << " and " << d;
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
        if ((a % i == 0) and (b % i == 0))
            divisor = false;
        else
            --i;
    }
    return i;
}

void simplify(int &a, int &b)
{
    int div = gcd(a, b);
    a /= div;
    b /= div;
}