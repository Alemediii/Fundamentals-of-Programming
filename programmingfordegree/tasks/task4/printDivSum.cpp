// printDiv.cpp
// Alejandro Medina Diaz
// This programme prints the divisors of a number n

#include <iostream>
using namespace std;

int main(){
    int n, sum = 0;
    cout << "define n: ";
    cin >> n;
    for (int i = 1; i < n; i++){
        if(n % i == 0) 
        sum += i;
    }
    if(sum == n) cout << "the number is perfect";
}