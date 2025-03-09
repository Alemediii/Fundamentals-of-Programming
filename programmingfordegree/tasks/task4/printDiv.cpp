// printDiv.cpp
// Alejandro Medina Diaz
// This programme prints the divisors of a number n

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "define n: ";
    cin >> n;
    for (int i = 1; i < n; i++)
        if(n % i == 0) 
            cout << i << " ";
}