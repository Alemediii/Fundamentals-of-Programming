// triangleNumbers.cpp
// Alejandro Medina Diaz
// The programme returns a triangle with the values

#include <iostream>
using namespace std;

int main(){
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    
}