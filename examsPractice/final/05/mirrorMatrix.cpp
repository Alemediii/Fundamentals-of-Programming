#include <iostream>
#include <array>

const int N = 5;
using namespace std;

typedef array<int, N> Rows;
typedef array<Rows, N> Matrix;

void readMatrix(Matrix& m);
bool isMirrored(Matrix m, Matrix n);

int main(){
    Matrix m, n;
    readMatrix(m);
    readMatrix(n);

    cout << isMirrored(m, n);
}

void readMatrix(Matrix& m){
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> m[i][j];
}

bool isMirrored(Matrix m, Matrix n){
    bool success = true;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++) 
        {
            if(m[i][j] != n[i][N - j - 1]) success = false;
        }
    }
    return success;
}