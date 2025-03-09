#include <iostream>
#include <array>
using namespace std;

const int N = 4;
typedef array<int, N> TRows;
typedef array<TRows, N> TMatrix;

void printMatrix(TMatrix m);
void fillMatrix(TMatrix& m);
void rotateAndPrint(TMatrix m);

int main() {
    TMatrix m;
    fillMatrix(m);

    cout << "Original Pascal Triangle:" << endl;
    printMatrix(m);

    cout << endl << "Rotated Pascal Triangle:" << endl;
    rotateAndPrint(m);

    return 0;
}

void fillMatrix(TMatrix& m) {
    for (int i = 0; i < N; i++) {
        m[i][0] = 1;
        m[0][i] = 1;
    }

    for (int i = 1; i < N; i++) {
        for (int j = 1; j < N; j++) {
            if (j <= i) {
                m[i][j] = m[i - 1][j] + m[i][j - 1];
            }
        }
    }
}

void printMatrix(TMatrix m) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - i && m[i][j] != 0; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

void rotateAndPrint(TMatrix m) {
    for (int i = 0; i < N; i++) {
        for (int k = 0; k < N - i; k++) {
            cout << " ";
        }

        for (int j = 0; j < N - i && m[i][j] != 0; j++) {
            cout << m[i][j] << " ";
        }

        cout << endl;
    }
}
