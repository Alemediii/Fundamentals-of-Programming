// programme.cpp
// Alejandro Medina Diaz
// This programme makes computes a formula and returns its result until
// the final term to add is less than 0.00001

#include <iostream>
using namespace std;  

const int MAXPOW = 10;

int main() {
    double x, s = 1, powerX = 1, i = 1;
    int fact = 1;
    
    cout << "Enter the value of x: ";
    cin >> x;

    double toSum = powerX / fact;
    while(toSum > 0.00001) {
        powerX *= x;
        fact *= i;

        toSum = powerX / fact;
        i++;
        s += toSum;
    }

    cout << "The value of s for x = " << x << " is: " << s << endl;
}
