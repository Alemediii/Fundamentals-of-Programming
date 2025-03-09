// programme.cpp
// Alejandro Medina Diaz
// This programme makes computes a formula and returns its result

#include <iostream>
using namespace std;  

const int MAXPOW = 10;

int main() {
    double x, s = 1, powerX = 1;
    int fact = 1;
    cout << "Enter the value of x: ";
    cin >> x;

    for (int i = 1; i <= MAXPOW; ++i) {
        powerX *= x;
        fact *= i;

        s += powerX / fact;
    }

    cout << "The value of s for x = " << x << " is: " << s << endl;
}
