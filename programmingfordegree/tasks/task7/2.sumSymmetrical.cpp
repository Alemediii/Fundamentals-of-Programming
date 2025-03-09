#include <iostream>
using namespace std;

void digitAtp(int n, int& ini, int& fin, int digits);
int manyDigit(int n);

int main() {
    int n = 1492, ini, fin;
    int digits = manyDigit(n);

    cout << "For number " << n << ", sums are: ";
    
    for (int i = 0; i < digits / 2; i++) {
        digitAtp(n, ini, fin, digits - i);
        cout << ini + fin << " ";
    }
}

int manyDigit(int n){
    int digits = 0;
    while (n > 0) {
        digits++;
        n /= 10;
    }
    return digits;
}

void digitAtp(int n, int& ini, int& fin, int digits){
    int powOf10 = 1;

    for (int i = 0; i < digits; i++) {
        powOf10 *= 10;
    }

    ini = n / (powOf10 / 10); 
    fin = n % 10;              
}
