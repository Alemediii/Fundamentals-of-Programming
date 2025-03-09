

// factorial.cpp
// Alejandro Medina Diaz
// The program asks for a number and return its factorial

#include <iostream>
using namespace std;

int main(){
    int n = 19, fact = 1;
    // cout << "define the number: "; cin >> n;

    while(n > 1){
        fact *= n; 
        n -= 1;
    }

    cout << "factorial is " << fact;
}