#include <iostream>
#include <array>

using namespace std;

const int SIZE = 3;
const int BOARDSIZE = SIZE * SIZE;

typedef array<int, SIZE> Rows;
typedef array<Rows, SIZE> Board;

bool doubleFreq(const Rows& r, int value);
void initi(Board& b) {
    for (int i = 0; i < BOARDSIZE; i++) {
        for (int j = 0; j < BOARDSIZE; j++) {
            b[i][j] = 0;
        }
    }
}

void displayBoard(const Board& b) {
    for (int i = 0; i < BOARDSIZE; i++) {
        if (i != 0 && i % SIZE == 0) {
            for (int k = 0; k < BOARDSIZE * 2 + SIZE - 1; k++) {
                cout << "-";
            }
            cout << endl;
        }

        for (int j = 0; j < BOARDSIZE; j++) {
            if (j != 0 && j % SIZE == 0) {
                cout << "| ";
            }
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}

bool repRow(const Board& b, int row) {
    bool success = true;
    for (int i = 0; i < BOARDSIZE && success; i++) {
        if (doubleFreq(b[row], b[row][i])) {
            success = false;
        }
    }
    return success;
}

bool repColumn(const Board& b, int col) {
    bool success = true;
    Rows temp;
    for (int i = 0; i < BOARDSIZE && success; i++) {
        for (int j = 0; j < BOARDSIZE; j++) {
            temp[j] = b[j][i];
        }
        if (doubleFreq(temp, b[col][i])) {
            success = false;
        }
    }
    return success;
}

bool doubleFreq(const Rows& r, int value) {
    int freq = 0, i = 0;
    while (i < BOARDSIZE) {
        if (value == r[i]) {
            freq++;
        }
        i++;
    }
    return freq == 1;
}

bool repSec(const Board& b, int startRow, int startCol) {
    bool success = true;
    Rows temp;
    int counter = 0; 

    for (int i = startRow; i < startRow + SIZE && success; i++) {
        for (int j = startCol; j < startCol + SIZE; j++) {
            temp[counter++] = b[i][j];
        }
    }

    for (int i = 0; i < BOARDSIZE && success; i++) {
        if (doubleFreq(temp, temp[i])) {
            success = false;
        }
    }
    return success;
}

string isValidSudoku(const Board& b) {
    bool isValid = true;

    for (int i = 0; i < BOARDSIZE && isValid; ++i) {
        if (not repRow(b, i)) {
            isValid = false;
        }
    }

    for (int i = 0; i < BOARDSIZE && isValid; ++i) {
        if (not repColumn(b, i)) {
            isValid = false;
        }
    }

    for (int i = 0; i < BOARDSIZE && isValid; i += SIZE) {
        for (int j = 0; j < BOARDSIZE && isValid; j += SIZE) {
            if (not repSec(b, i, j)) {
                isValid = false;
            }
        }
    }

    return isValid ? "VALID SUDOKU" : "NOT VALID SUDOKU";
}

int main() {
    Board b;
    initi(b);
    displayBoard(b);
}
