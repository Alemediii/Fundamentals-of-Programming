// divBy35.cpp
// Alejandro Medina Diaz
// A programme which finds the divisors of 35


#include <iostream>
using namespace std;

int main(){
    for(int i = 1; i <= 1350; i++){
        if(1350 % i == 0)
        cout << i << ", ";
    }
}