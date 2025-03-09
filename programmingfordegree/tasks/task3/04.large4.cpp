// 04.large4.cpp
// Alejandro Medina Diaz 2023 - 10 - 06
// Asks the user for four numbers and print the largest

#include <iostream>
using namespace std;

int main(){
    int n1, n2;
    cout << "define the numbers: "; cin >> n1;
    for (int i = 0; i < 3; i++)
    {
        cin >> n2;
        if(n2 > n1) n1 = n2;
    }
    cout << "the largest number is: " << n1;
}   