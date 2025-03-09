
#include <iostream>
using namespace std;

void lineaRombo(int n);

int main()
{
    lineaRombo(5);
}

void lineaRombo(int n){
    for (int row = 1; row < n; ++row) {
        for (int i = 1; i < n-row; ++i)
            cout << ' ';
        for (int i = 0; i < row; ++i)
            cout << "* ";
        cout << endl;
    }
}