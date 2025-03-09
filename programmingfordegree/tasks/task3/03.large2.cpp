// 03.large2.cpp
// Alejandro Medina Diaz 2023 - 10 - 06
// Asks the user for two numbers and print the largest

#include <iostream>
using namespace std;

int main(){
    int n1, n2;
    cout << "define n1 and n2: "; cin >> n1 >> n2;

    if(n1 > n2) cout << "the largest number is: " << n1;
    else cout << "the largest number is: " << n2; 
}