// getDigit.cpp
// Alejandro Medina Diaz 
// The programme asks for a number and a position, and gives the digit  
// which is in  that position

  //as somebody asked in class about doing an error control, I tried to 
 //develop one, in which if the position given is bigger than the
//number, the number or the position should be defined again:


#include <iostream>
using namespace std;

int main() {
    int n = 375, pos = 3;

    int digits = 0;
    int copyNum = n;
    int chose;

    while (copyNum > 0) {
        digits++;
        copyNum /= 10;
    }

    if (pos > digits) {
        cout << "INVALID DATA. Define it again: " << endl;
        cout << "Do you want to define again the number [1]?" << endl;
        cout << "Or the position [2]? " << endl;
        cin >> chose;

        switch (chose) {
            case 1:
                cout << "Enter a number: ";
                cin >> n;
                break;
            case 2:
                cout << "Enter a position: ";
                cin >> pos;
                break;
            default:
                break;
        }
    }

    copyNum = n;  // Reset copyNum to the original number

    for (int i = 0; i < pos - 1; i++) {
        copyNum /= 10;
    }

    cout << "The digit at position " << pos << " is: " << (copyNum % 10) << endl;

    return 0;
}
