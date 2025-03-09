#include <iostream>
#include <array>

using namespace std;
typedef array<int, 3> Number;

void pullDigits(int& n1, Number& n);
void fillArray(int digit, Number& n, int pos);
void show(Number n);

int main(){
    int n1;
    Number n;
    cout << "Define the number: "; cin >> n1;
    pullDigits(n1, n);
    show(n);
}

void pullDigits(int& n1, Number& n){
    int pos = 0;
    while(n1 > 0){
        fillArray(n1%10, n, pos);
        n1 /= 10;
        pos++;
    }
}

void fillArray(int digit, Number& n, int pos){
    n[pos] = digit;
}

void show(Number n){
    for (int i = n.size(); i >= 0; i--)
    {
        if(n[i] <= 9 and n[i] >= 0)
        cout << n[i] << " ";
    }
}