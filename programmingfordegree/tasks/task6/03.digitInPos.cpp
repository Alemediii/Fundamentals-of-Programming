// digitInPos.cpp
// Alejandro Medina Diaz

#include <iostream>
using namespace std;

int digit(int n, int pos, int base);
int main(){
    int n = 2021, base = 2, pos = 1;
    cout << "the number of digits is: " << digit(n, pos, base);
}


int digit(int n, int pos, int base){
    for (int i = 0; i < pos; i++)
    {
        n /= base;
    }
    int digit = n % base;
    return digit;
}