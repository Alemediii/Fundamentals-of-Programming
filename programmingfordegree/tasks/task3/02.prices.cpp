// 01.questions.cpp
// Alejandro Medina Diaz 2023 - 10 - 06
// The program asks for the number of products that a person
// has purchased, and get the final price

#include <iostream>
using namespace std;

int main(){
    int n, price;

    cout << "quantity: "; cin >> n;

    switch (n){
    case 1:
        price = n * 100;
        break;

    case 2: 
        price = n * 95;
        break;

    case 3: 
        price = n * 90;
        break;

    default:
        break;
    }
    if(n >= 4) price = n * 85;

    cout << "final price is: " << price;
}
