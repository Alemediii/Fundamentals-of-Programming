// firstNPrimes.cpp
// Alejandro Medina Diaz
// The programme prints the first N prime numbers

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, count = 0, num = 2;
    bool isPrime;

    cout << "Enter the value of n: ";
    cin >> n;

    while (count < n) {
        isPrime = true;
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << num << " ";
            count++;
        }
        num++;
    }
}
