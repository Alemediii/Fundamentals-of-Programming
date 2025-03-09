#include <iostream>
#include <iomanip>
using namespace std;

const int FROMLIMIT = 1;
const int UPLIMIT = 10;

int main()
{
    for (int row = FROMLIMIT; row <= UPLIMIT; row++) {
        for (int col = FROMLIMIT; col <= UPLIMIT; col++)
            cout << setw(4) << row * col;
        cout << endl;
    }
    
    return 0;
}