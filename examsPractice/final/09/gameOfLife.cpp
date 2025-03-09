#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>

using namespace std;

const int BOARD_SIZE = 3;

typedef array<array<char, BOARD_SIZE>, BOARD_SIZE> Board;

void initBoard(Board& board) {
    for (int i = 0; i < BOARD_SIZE; ++i) {
        for (int j = 0; j < BOARD_SIZE; ++j) {
            board[i][j] = ' ';
        }
    }
}

void displayBoard(const Board& board) {
    for (int i = 0; i < BOARD_SIZE; ++i) {
        for (int j = 0; j < BOARD_SIZE; ++j) {
            cout << board[i][j];
            if (j < BOARD_SIZE - 1) {
                cout << "|";
            }
        }
        cout << endl;
        if (i < BOARD_SIZE - 1) {
            cout << "-+-+-" << endl;
        }
    }
}

bool checkWin(const Board& board, char symbol) {
    for (int i = 0; i < BOARD_SIZE; ++i) {
        if ((board[i][0] == symbol && board[i][1] == symbol && board[i][2] == symbol) ||
            (board[0][i] == symbol && board[1][i] == symbol && board[2][i] == symbol)) {
            return true;
        }
    }

    if ((board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol) ||
        (board[0][2] == symbol && board[1][1] == symbol && board[2][0] == symbol)) {
        return true;
    }

    return false;
}

bool isBoardFull(const Board& board) {
    for (int i = 0; i < BOARD_SIZE; ++i) {
        for (int j = 0; j < BOARD_SIZE; ++j) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

bool isValidMove(const Board& board, int row, int col) {
    return row >= 0 && row < BOARD_SIZE && col >= 0 && col < BOARD_SIZE && board[row][col] == ' ';
}

bool hasWon(const Board& board, char symbol) {
    return checkWin(board, symbol);
}

bool canWin(const Board& board, int& row, int& col, char symbol) {
    for (row = 0; row < BOARD_SIZE; ++row) {
        for (col = 0; col < BOARD_SIZE; ++col) {
            if (board[row][col] == ' ') {
                board[row][col] == symbol;
                if (hasWon(board, symbol)) {
                    board[row][col] = ' ';
                    return true;
                }
                board[row][col] = ' ';
            }
        }
    }
    return false;
}

void makeBestMove(Board& board, char currentPlayer) {
    int row, col;

    if (canWin(board, row, col, currentPlayer)) {
        board[row][col] = currentPlayer;
    } else {
        srand(time(0));
        do {
            row = rand() % BOARD_SIZE;
            col = rand() % BOARD_SIZE;
        } while (!isValidMove(board, row, col));

        board[row][col] = currentPlayer;
    }
}

int main() {
    Board board;
    char currentPlayer = 'X';
    bool gameWon = false;

    initBoard(board);

    while (!gameWon && !isBoardFull(board)) {
        cout << "Current board:\n";
        displayBoard(board);

        if (currentPlayer == 'X') {
            int row, col;
            cout << "Player X, enter row and column (1-3) separated by space: ";
            cin >> row >> col;
            row--;
            col--;
            if (isValidMove(board, row, col)) {
                board[row][col] = currentPlayer;
            } else {
                cout << "Invalid move! Try again.\n";
                continue;
            }
        } else {
            makeBestMove(board, currentPlayer);
        }

        if (hasWon(board, currentPlayer)) {
            gameWon = true;
            cout << "Player " << currentPlayer << " wins!\n";
        } else {
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        }
    }

    if (!gameWon) {
        cout << "It's a draw!\n";
    }

    displayBoard(board);
    return 0;
}
