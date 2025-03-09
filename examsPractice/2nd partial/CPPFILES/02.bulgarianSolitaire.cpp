#include <iostream>
#include <vector>

using namespace std;

void printPiles(const vector<int>& piles) {
    for (int pile : piles) {
        cout << pile << " ";
    }
    cout << endl;
}

void playBulgarianSolitaire(vector<int>& piles) {
    while (true) {
        vector<int> newPiles;
        for (int pile : piles) {
            newPiles.push_back(pile - 1);
        }
        int numNonZeroPiles = 0;
        for (int pile : newPiles) {
            if (pile > 0) {
                numNonZeroPiles++;
            }
        }
        newPiles.push_back(numNonZeroPiles);

        printPiles(newPiles);

        piles = newPiles;

        if (numNonZeroPiles == 1) {
            break;
        }
    }
}

int main() {
    int numPiles;
    cout << "Enter the number of piles: ";
    cin >> numPiles;

    vector<int> initialPiles(numPiles);
    cout << "Enter the number of cards in each pile: ";
    for (int i = 0; i < numPiles; ++i) {
        cin >> initialPiles[i];
    }

    cout << "\nBulgarian Solitaire Steps:\n";
    playBulgarianSolitaire(initialPiles);

    return 0;
}
