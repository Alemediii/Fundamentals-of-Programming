// combinationalNumber.cpp
// Alejandro Medina Diaz
// A programme, which using the factorial code, computes the combinational 
// number and return the result

#include <iostream>
using namespace std;

int main(){
    int n, n2, n3, fact = 1, fact2 = 1, fact3 = 1;
    cout << "define the number: "; cin >> n >> n2;

    if(n > n2) n3 = n - n2;
    else n3 = n2 - n;

    while(n > 0 and n2 > 0 and n3 > 0){
        if(n > 0){
            fact *= n; 
            n--;
        }
        if(n2 > 0){
            fact2 *= n2;
            n2--;
        }
        if(n3 > 0){
            fact3 *= n3;
            n3--;
        }
    }

    double comb = fact/(fact2 * fact3);
    cout << "combinational number is " << comb;
}