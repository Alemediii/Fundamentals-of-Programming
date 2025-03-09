
#include <iostream>
#include <array>

using namespace std;
const int SIZE_BOARD = 9;

//the section development
typedef array<int, SIZE_BOARD> Rows;
typedef array<Rows, SIZE_BOARD> Board;

Rows init();
bool checkRow(Board b, int row);
bool checkCol(Board b, int col);
bool checkSection(Board b, int section);

void show(Board b){
    cout << "the board is: " << endl;
    for (int i = 0; i < SIZE_BOARD; i++)
    {
        if(i % 3 == 0 and i != 0) {
            cout << "----------------------";
            cout << endl;
        }

        for (int j = 0; j < SIZE_BOARD; j++)
        {
            if(j % 3 == 0 and j != 0){
                cout << "| ";
                cout << b[i][j] << " ";
            } else cout << b[i][j] << " ";
        }
        
        cout << endl;
    }
}

void fill(Board& b){
    b = {{
     {5, 3, 4, 6, 7, 8, 9, 1, 2},
     {6, 7, 2, 1, 9, 5, 3, 4, 8},
     {1, 9, 8, 3, 4, 2, 5, 6, 7},
     {8, 5, 9, 7, 6, 1, 4, 2, 3},
     {4, 2, 6, 8, 5, 3, 7, 9, 1},
     {7, 1, 3, 9, 2, 4, 8, 5, 6},
     {9, 6, 1, 5, 3, 7, 2, 8, 4},
     {2, 8, 7, 4, 1, 9, 6, 3, 5},
     {3, 4, 5, 2, 8, 6, 1, 7, 9}
 }};
}

bool isTheNumberRepeatedOnce(Rows r, int num){
    int i = 0, counter = 0;
    while(i < SIZE_BOARD){
        if(r[i] == num) counter++;
        i++;
    }
    return counter == 1;
}

bool finalCheck(Board b){
    bool keeps = true;
    for (int i = 0; i < SIZE_BOARD and keeps; i++)
    {
        if(not checkRow(b, i)) keeps = false;
        if(not checkCol(b, i)) keeps = false;
        if(not checkSection(b, i)) keeps = false;
    }
    return keeps;
}

int main(){
    Board b;
    fill(b);
    show(b);

    if(finalCheck(b)) cout << "the sudoku keeps valid";
    else cout << "the sudoku is not valid";
}

bool checkRow(Board b, int row){
    bool keeps = true;
    for (int i = 0; i < SIZE_BOARD and keeps; i++)
    {
        if(not isTheNumberRepeatedOnce(b[row], b[row][i])) keeps = false;
    }
    return keeps;
}

bool checkCol(Board b, int col) {
    bool keeps = true;
    Rows temp = {};

    // Transform the column into a row
    for (int i = 0; i < SIZE_BOARD; i++) {
        temp[i] = b[i][col];
    }

    // Check for repeated numbers
    for (int i = 0; i < SIZE_BOARD and keeps; i++) {
        if (not isTheNumberRepeatedOnce(temp, b[i][col])) {
            keeps = false;
        }
    }
    return keeps;
}

bool checkSection(Board b, int section) {
    bool keeps = true;
    Rows temp = {};

    // Determine the starting row and column indices for the given section
    int startRow = (section / 3) * 3;
    int startCol = (section % 3) * 3;

    // Extract the values from the section into the temp array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            temp[i * 3 + j] = b[startRow + i][startCol + j];
        }
    }

    // Check for repeated numbers in the section
    for (int i = 0; i < SIZE_BOARD and keeps; i++) {
        if (not isTheNumberRepeatedOnce(temp, temp[i])) {
            keeps = false;
        }
    }

    return keeps;
}


