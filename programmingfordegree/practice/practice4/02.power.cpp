// Alejandro Medina Diaz
//  2023 - 11 - 09

#include <iostream>
using namespace std;

int power(int x, int n); // x stands for exponent, and n for the number

int main()
{
    cout << " result " << power(3, 2) << endl;
}

int power(int x, int n)
{
    if (x == 0)
        return 1;
    else if (x >= 1)
        return n * power(x - 1, n);
}
