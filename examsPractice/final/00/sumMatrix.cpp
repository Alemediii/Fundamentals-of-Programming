#include <iostream>
#include <array>

const int SIZE = 3;
using namespace std;

typedef array<int, SIZE> Array;
typedef array<Array, SIZE> Matrix;

void read(Matrix& m){
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cin >> m[i][j];
        }
    }
}

void show(Matrix m){
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cout << m[i][j];
        }
        cout << endl;
    }
}


