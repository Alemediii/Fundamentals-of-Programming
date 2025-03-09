// Enter the half of the width (0 ends): 5
//
//  ***********
//   *********
//    *******
//     *****
//      ***
//       *
//       *
//       *
//       *
//       *
//    *******
// *************
// New half of width (0 ends): 0

#include <iostream>
using namespace std;

int main()
{
    cout << endl << "Enter the half of the width (0 ends): ";
    int w;
    while (cin >> w and w != 0) {
        cout << endl;
        // bowl
        for (int line = 0; line < w; ++line) {
            for (int i = 0; i <= line;            ++i) cout << ' ';
            for (int i = 0; i < 2 * (w-line) + 1; ++i) cout << '*';
            cout << endl;
        }

        // stem
        for (int line = 0; line < w; ++line) {
            for (int i = 0; i <= w; ++i) cout << ' ';
            cout << '*' << endl;
        }
        
        // foot
        for (int line = 1; 3 * line <= w + 1 ; ++line) {
            for (int i = 0; i <= w - 3 * line; ++i) cout << ' ';
            for (int i = 0; i < 6 * line + 1;  ++i) cout << '*';
            cout << endl;
        }
        cout << endl << "New half of width (0 ends): ";
    }
    return 0;
}