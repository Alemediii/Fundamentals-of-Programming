#include <iostream>
#include <array>

using namespace std;
const int MAX = 10;

typedef array<int, MAX> Numbers;
struct TNumbers{
    Numbers n;
    int nEl = 0;
};

void read(TNumbers& n);
void show(TNumbers n);

int main(){
    TNumbers l1, l2, l3;
    cout << "input: " << endl;
    read(l1); read(l2); read(l3);

    cout << "output: " << endl;
    show(l1); show(l2); show(l3); 
}

void read(TNumbers& n) {
    cout << "Enter numbers (enter 0 to stop): ";
    int input;
    while (cin >> input && n.nEl < MAX && input != 0) {
        n.n[n.nEl++] = input;
    }
}

void show(TNumbers n){
    cout << "list is: "; 
    for (int i = 0; i < n.nEl; i++)
    {
        cout << n.n[i] << " ";
    }
    cout << endl;
}