// Alejandro Medina Diaz
//  2023 - 11 - 09

#include <iostream>
using namespace std;

void reverse(int n);

int main()
{
    reverse(6750);
}

void reverse(int n)
{
    cout << n % 10;
    if (n > 10)
        reverse(n / 10);
}