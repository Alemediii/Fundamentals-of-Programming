#include <iostream>
#include <array>
using namespace std;

const int N = 8;
using TSqMat = array<array<bool, N>, N>;

bool isSafe(const TSqMat& m, int row, int col) {
    int i, j;

    // Check row on the left side
    for (i = 0; i < col; ++i)
        if (m[row][i])
            return false;

    // Check upper diagonal on the left side
    for (i = row, j = col; i >= 0 && j >= 0; --i, --j)
        if (m[i][j])
            return false;

    // Check lower diagonal on the left side
    for (i = row, j = col; j >= 0 && i < N; ++i, --j)
        if (m[i][j])
            return false;

    return true;
}

bool solveQueensUtil(TSqMat& m, int col) {
    if (col >= N)
        return true;

    for (int i = 0; i < N; ++i) {
        if (isSafe(m, i, col)) {
            m[i][col] = true;

            if (solveQueensUtil(m, col + 1))
                return true;

            m[i][col] = false; // Backtrack
        }
    }

    return false;
}

bool solveQueens() {
    TSqMat board = {};

    if (!solveQueensUtil(board, 0)) {
        cout << "Solution does not exist!";
        return false;
    }

    return true;
}

int main() {
    if (solveQueens()) {
        cout << "Queens placed successfully!";
    }

    return 0;
}
