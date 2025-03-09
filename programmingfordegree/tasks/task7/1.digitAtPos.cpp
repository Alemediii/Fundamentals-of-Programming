// getDigit.cpp
// Alejandro Medina Diaz 
// The programme asks for a number and a position, and gives the digit  
// which is in  that position

#include <iostream>
using namespace std;

int digitAtp(int n, int pos);

int main() {

    cout << "The digit at position is: " << (digitAtp(1492, 1)) << endl;
    cout << "The digit at position is: " << (digitAtp(1492, 3)) << endl;
    cout << "The digit at position is: " << (digitAtp(1492, 6)) << endl;

}

int digitAtp(int n, int pos){
    int copyNum = n;  // Reset copyNum to the original number

    for (int i = 0; i < pos - 1; i++) {
        copyNum /= 10;
    }

    return copyNum % 10;
}