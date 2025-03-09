// fibonacci.cpp
// Alejandro Medina Diaz
// This function computes a game

#include <iostream>
using namespace std;

int main() {
    int n, player = 1, depth;
    cout << "Enter the number of objects: ";
    cin >> n;

    if (n % 2 == 0) {
        depth = n / 2 - 1;
    } else {
        depth = (n - 1) / 2;
    }

    while (n > 0 && depth >= 0) {
        if (player == 1) {
            int move;
            cout << "Your turn. Enter 1, 2, or 3: ";
            cin >> move;
            while (move < 1 || move > 3 || move > n) {
                cout << "Invalid move. Enter 1, 2, or 3: ";
                cin >> move;
            }
            n -= move;
            cout << "You removed " << move << " objects. " << n << " objects remaining." << endl;
            player = 2;
        } else {
            int move;
            if (n % 4 == 0) {
                move = 3;
            } else {
                move = n % 4;
            }
            n -= move;
            cout << "Machine removed " << move << " objects. " << n << " objects remaining." << endl;
            player = 1;
        }
        depth--;
    }

    if (player == 1) {
        cout << "Machine wins!" << endl;
    } else {
        cout << "You win!" << endl;
    }

    return 0;
}