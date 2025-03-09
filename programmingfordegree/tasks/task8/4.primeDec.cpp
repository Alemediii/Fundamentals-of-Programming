#include <iostream>
using namespace std;

void primeDecomposition(int n);

int main() {
    primeDecomposition(48);
    primeDecomposition(180);
}

void primeDecomposition(int n) {
    cout << n << " = ";
    bool firstFactor = true;

    for (int div = 2; n > 1; div++) {
        int count = 0;
        while (n % div == 0) {
            n /= div;
            count++;
        }

        if (count > 0) {
            if (!firstFactor) {
                cout << " * ";
            }

            cout << div;

            if (count > 1) {
                cout << "^" << count;
            }

            firstFactor = false;
        }
    }

    cout << endl;
}
