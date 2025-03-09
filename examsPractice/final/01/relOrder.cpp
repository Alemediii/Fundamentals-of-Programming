#include <iostream>
#include <array>

using namespace std;
const int MAX = 7;

typedef array<unsigned, MAX> Numbers;
struct TNumbers{
    Numbers n;
    int nEl = 0;
};

void read(TNumbers& n){
    for (int i = 0; i < n.nEl; i++) {
        cin >> n.n[i];
    }
}

bool isTheSameOrder(TNumbers n, TNumbers m);
bool isPositive(int value);

int main(){
    TNumbers n, m;
    n.nEl = 5;
    m.nEl = 7;
    read(n); 
    read(m);

    if (isTheSameOrder(n, m)) {
        cout << "The lists are nestable.";
    } else {
        cout << "The lists are not nestable.";
    }
}

bool isTheSameOrder(TNumbers n, TNumbers m){
    bool condition = true;
    int positiveIndexI = 0, positiveIndexJ = 0;

    while (positiveIndexI < n.nEl && positiveIndexJ < m.nEl) {
        // Skip non-positive numbers
        while (positiveIndexI < n.nEl && !isPositive(n.n[positiveIndexI])) positiveIndexI++;
        while (positiveIndexJ < m.nEl && !isPositive(m.n[positiveIndexJ])) positiveIndexJ++;

        // Check if both lists have positive numbers left
        if (positiveIndexI < n.nEl && positiveIndexJ < m.nEl) {
            if (n.n[positiveIndexI] != m.n[positiveIndexJ]) {
                condition = false;
            }
        }

        positiveIndexI++;
        positiveIndexJ++;
    }

    return condition;
}



bool isPositive(int value){
    return value >= 0;
}
