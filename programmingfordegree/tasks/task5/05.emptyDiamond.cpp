// emptyDiamond.cpp
// Alejandro Medina Diaz
// Print a diamond in c++ which is empty on its inside

#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int space = n - 1;

    for (int i = 0; i < n; ++i) {
        for (int k = 0; k < space; ++k)
            cout << " ";
        space--;

        for (int j = 0; j < i * 2 + 1; ++j) {
            if (j == 0 or j == i * 2)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    space = 1;

    for (int i = n - 2; i >= 0; --i) {
        for (int k = space; k > 0; --k)
            cout << " ";
        space++;

        for (int j = i * 2; j >= 0; --j) {
            if (j == 0 or j == i * 2)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}


// // 0123456
// //    *     i = 0 
// //   * *    i = 1
// //  *   *   i = 2
// // *     *  i = 3
// //  *   *   i = 4
// //   * *    i = 5
// //    *     i = 6 