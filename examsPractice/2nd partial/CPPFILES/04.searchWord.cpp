#include <iostream>
#include <array>
#include <string>

using namespace std;

const int N = 8;

enum Direction {
    NORTH = 3,
    SOUTH = 4,
    WEST = 1,
    EAST = 2,
    NOT_FOUND = -1
};

typedef array<char, N> Rows;
typedef array<Rows, N> Matrix;

bool isValid(int x, int y);
bool findWord(const Matrix& matrix, const string& word, int& startX, int& startY, Direction& direction);
void readMatrix(Matrix& puzzle);

int main() {
    Matrix puzzle;
    string word;

    // Reading the puzzle
    cout << "Enter the 8 strings of 8 chars each to fill the matrix:" << endl;
    readMatrix(puzzle);

    cout << "Enter the word to search: ";
    cin >> word;

    int startX, startY;
    Direction direction;

    // Searching for the word
    bool found = findWord(puzzle, word, startX, startY, direction);

    // Displaying results
    if (found) {
        cout << "Word found at position (" << startX << ", " << startY << ") ";
        switch (direction) {
            case NORTH:
                cout << "in NORTH direction";
                break;
            case SOUTH:
                cout << "in SOUTH direction";
                break;
            case WEST:
                cout << "in WEST direction";
                break;
            case EAST:
                cout << "in EAST direction";
                break;
            default:
                break;
        }
        cout << endl;
    } else {
        cout << "It is not there." << endl;
    }

    return 0;
}

bool isValid(int x, int y) {
    return (x >= 0 && x < N && y >= 0 && y < N);
}

bool findWord(const Matrix& matrix, const string& word, int& startX, int& startY, Direction& direction) {
    int dx[] = {0, 0, -1, 1}; // For directions: NORTH, SOUTH, WEST, EAST
    int dy[] = {-1, 1, 0, 0}; // Corresponding changes in x, y coordinates

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            for (int dir = NORTH; dir <= EAST; ++dir) {
                int x = i, y = j;
                bool found = true;

                for (char c : word) {
                    if (!isValid(x, y) or matrix[x][y] != c) {
                        found = false;
                        break;
                    }
                    x += dx[dir - 1]; // Adjust x for direction
                    y += dy[dir - 1]; // Adjust y for direction
                }

                if (found && isValid(x - dx[dir - 1], y - dy[dir - 1])) {
                    startX = i;
                    startY = j;
                    direction = static_cast<Direction>(dir);
                    return true;
                }
            }
        }
    }

    return false;
}

void readMatrix(Matrix& puzzle){
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> puzzle[i][j];
        }
    }
}