#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    
    cout << "Enter a positive integer: ";
    cin >> n;

    while(n <= 0) {
        cout << "Please enter a positive integer." << endl;
        cin >> n;
    }

    double approx = n / 2.0; // Initial approximation
    bool higher = true;
    while (higher) {
        double prevApprox = approx;
        approx = 0.5 * (prevApprox + n / prevApprox); // Babylonian formula
        
        if (abs(approx - prevApprox) < 0.001) {
            higher = false; // Stop when the difference is less than 0.001
        }
    }

    cout << "The square root of " << n << " (calculated using the Babylonian method) is: " << approx << endl;

    return 0;
}
