// digitInPos.cpp
// Alejandro Medina Diaz

#include <iostream>
using namespace std;

int numdigits(int n, int base);
int main(){
    int n = 2021, base = 2;
    cout << "the number of digits is: " << numdigits(n, base);
}


int numdigits(int n, int base){
    int digits = 0;
    while(n > 0){
        n /= base;
        digits++;
    }
    return digits;
}