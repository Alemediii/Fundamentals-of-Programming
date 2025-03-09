#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows for the equilateral triangle: ";
    cin >> n;

    // Print the top border
    cout << "* " << endl;

    // Print the middle rows
    for (int i = 2; i < n; i++) {
        cout << "*";
        for (int j = 0; j < i - 2; j++) {
            cout << " .";
        }
        cout << " *" << endl;
    }

    // Print the bottom border
    for (int i = 0; i < n; i++) {
        cout << "* ";
    }
    cout << endl;

    return 0;
}