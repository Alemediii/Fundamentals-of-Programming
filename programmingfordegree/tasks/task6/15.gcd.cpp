#include <iostream>
using namespace std;

int gcd(int a, int b);

int main() {
    int n1, n2;

    cout << "Enter two integers to find their GCD: ";
    cin >> n1 >> n2;

    cout << "GCD of " << n1 << " and " << n2 << " is " << gcd(n1, n2) << endl;
}


int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}