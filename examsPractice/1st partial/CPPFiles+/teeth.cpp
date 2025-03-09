// Height: 5
// Number of teeth: 3
//              *       *       *
//             * *     * *     * *
//            *   *   *   *   *   *
//           *     * *     * *     *
//          *       *       *


// the number of teeth is easy to modify, as each tooth is
// printed in 'boxes' filled with spaces

#include <iostream>
using namespace std;

int main() {
    int height = 3, nteeth = 5;
cout << endl;
    for (int row = 1; row <= height; row++) {
      for (int tooth = 1; tooth <= nteeth; tooth++) {
        for (int i = 0; i < (height - row); i++)
            cout << ' ';
        cout << '*';
        for (int i = 0; i < (2 * (row - 1) - 1); i++)
            cout << ' ';
        if (row > 1 and row < height)
            cout << '*';
        for (int i = 0; i < (height - row - 1); i++)
            cout << ' ';
      }
      cout << endl;
    }

    return 0;
}