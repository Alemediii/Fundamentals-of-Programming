#include <iostream>
#include <array>
using namespace std;

const int N = 5;
typedef array<int, N> TVec;

void invertArr(TVec& a); 
void swap(int& a, int& b); 
void writeArr(TVec a);

int main() {
    TVec a = {1, 2, 3, 4, 5};
    writeArr(a);
    cout << endl;

    invertArr(a);

    cout << "after invert:" << endl;
    writeArr(a);
    cout << endl;

    return 0;
}

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void invertArr(TVec& a) {
    int start = 0;
    int end = a.size() - 1;

    while (start < end) {
        swap(a[start], a[end]);
        start++;
        end--;
    }
}

void writeArr(TVec a) {
    for (int i = 0; i < a.size(); ++i) {
        cout << a[i] << " ";
    }
}