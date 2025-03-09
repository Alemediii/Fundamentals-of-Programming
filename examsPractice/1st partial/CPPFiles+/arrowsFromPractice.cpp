#include <iostream>
using namespace std;

void arrow(int n);

int main(){

    arrow(8);
}

void arrow(int n)
{
    // Upper part
    for (int linea = 0; linea < n; linea++) {
        for (int j = 0; j < linea; j++)
            cout << " ";
        for (int k = n; k > linea; k--)
            cout << "*";
        cout << endl;
    }
    // Lower part
    for (int line = n - 2; line >= 0; line--) {
        for (int j = 0; j < line; j++)
            cout << ".";
        for (int k = n; k > line; k--)
            cout << "*";
        cout << endl;
    }
}

