#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> Numbers;

void capicua(int n, Numbers& number);
void show(Numbers n);

int main() {
    Numbers number;
    int n;
    
    cout << "Introduce a series of numbers (end with -1): ";
    
    while (cin >> n && n != -1) {
        capicua(n, number);
    }
    
    show(number);
}

void capicua(int n, Numbers& number) {
    int originalN = n;
    int reversedN = 0;
    
    while (n > 0) {
        reversedN = reversedN * 10 + n % 10;
        n /= 10;
    }
    
    if (originalN == reversedN) {
        number.push_back(originalN);
    }
}

void show(Numbers n) {
    cout << "The sequence of palindromic numbers: ";
    for (int i : n) {
        cout << i << " ";
    }
    cout << endl;
}
