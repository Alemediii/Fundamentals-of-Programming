// manyDigits.cpp
// Alejandro Medina Diaz
// Given a number, the programme returns the number of digits of the number

#include <iostream>
using namespace std;

int main(){
    int n = 436, digits = 0;
    
    switch(n){
        case 0:
        digits = 1;
        break;

        default:
        while(n > 0){
            digits++;
            n /= 10;
        }
        break;
    }
    cout << "digits are " << digits;
}