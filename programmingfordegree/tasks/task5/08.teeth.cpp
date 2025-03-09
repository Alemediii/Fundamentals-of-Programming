#include <iostream>
using namespace std;

int main() {
    int n = 5, times = 3;  
    for (int k = 0; k < times; k++)
    {

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        cout << "*";

        for (int j = 1; j <= (i - 2) * 2 + 1; j++) {
            cout << " ";
        }
    
        if (i != 1) {
            cout << "*";
        }
        cout << endl;
    }
        
    }
}
