#include <iostream>
#include <array>

using namespace std;

const int NRows = 3;
const int NCols = 3;
const int RandMax = 9;

typedef array<int, NRows> TRows;
typedef array<TRows, NCols> TMatrix;

void printMatrix(TMatrix m);
void fillMatrix(TMatrix& m);
bool sumRowsColsDiag(TMatrix m, int& result1, int& result2, int& result3);

int main() {
    TMatrix m;
    int result1 = 0, result2 = 0, result3 = 0;

    fillMatrix(m);
    printMatrix(m);

    if (sumRowsColsDiag(m, result1, result2, result3)) {
        if (result1 == result2 && result1 == result3) {
            cout << "true" << endl << result1 << ", " << result2 << ", " << result3;
        } else {
            cout << "false" << endl << result1 << ", " << result2 << ", " << result3;
        }
    } else {
        cout << "false" << endl << result1 << ", " << result2 << ", " << result3;
    }
}

void fillMatrix(TMatrix& m) {
    for (int i = 0; i < NRows; i++)
        for (int j = 0; j < NCols; j++)
            // m[i][j] = rand() % (RandMax - 0 + 1);
            cin >> m[i][j];
}

void printMatrix(TMatrix m) {
    for (int i = 0; i < NRows; i++) {
        for (int j = 0; j < NCols; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

bool sumRowsColsDiag(TMatrix m, int& result1, int& result2, int& result3) {
    int firstSumRow = 0, firstSumCol = 0, sumDiag1 = 0, sumDiag2 = 0;
    bool isIt = true;

    for (int i = 0; i < NRows; ++i) {
        int sumRow = 0, sumCol = 0;
        for (int j = 0; j < NCols; ++j) {
            sumRow += m[i][j];
            sumCol += m[j][i];
            if (i == j) sumDiag1 += m[i][j];
            if (i + j == NRows - 1) sumDiag2 += m[i][j];
        }

        if (i == 0) {
            firstSumRow = sumRow;
            firstSumCol = sumCol;
        } else {
            if (sumRow != firstSumRow || sumCol != firstSumCol) isIt = false;
        }
    }

    if (sumDiag1 == sumDiag2) result3 = sumDiag1;
    result1 = firstSumRow;
    result2 = firstSumCol;

    return isIt;
}
