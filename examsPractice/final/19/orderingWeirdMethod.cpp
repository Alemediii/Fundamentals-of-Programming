#include <iostream>
#include <array>

using namespace std;
const int SIZE = 10;

typedef array<int, SIZE> Numbers;

void read(Numbers& n){
    cout << "define: "; 
    for (int i = 0; i < SIZE; i++)
    {
        cin >> n[i];
    }
}

void show(Numbers n){
    cout << "array: "; 
    for (int i = 0; i < SIZE; i++)
    {
        cout << n[i] << " ";
    }
    cout << endl;
}

void order(Numbers& n);

int main(){
    Numbers n;
    read(n);
    cout << "before order"; show(n);

    order(n); 
    cout << "after order"; show(n);
}

void minAndOrder(Numbers& n, int starting){
    int min = n[starting];
    int pos = starting;
    for (int i = starting; i < SIZE; i++)
    {
        if(n[i] < min){
            min = n[i];
            pos = i;
        } 
    }
    swap(n[pos], n[starting]);
}

void order(Numbers& n){
    for (int i = 0; i < SIZE; i++)
    {
        minAndOrder(n, i);
    }
}