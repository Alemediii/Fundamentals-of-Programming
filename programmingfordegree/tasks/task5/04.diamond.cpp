// rombus.cpp
// Alejandro Medina Diaz
// This programme asks for a number n and return a diamond of n size

#include <iostream>
using namespace std;

int main(){
    int n = 4;
    int space = n;
    for (int i = 0; i < n; i++)
    {
            for(int k = 0; k < space; k++)
            cout << " ";
    space--;
            for (int j = 0; j < i * 2 + 1; j++)
            cout << "*"; 
        cout << endl;
    }

    space = 0;

        for (int i = n; i >= 0; i--)
    {
            for(int k = space; k > 0; k--)
            cout << " ";
    space++;
            for (int j = i * 2 + 1; j > 0 ; j--)
            cout << "*"; 
        cout << endl;
    }

    
}

// 0123456
//    *     i = 0 
//   ***    i = 1
//  *****   i = 2
// *******  i = 3
//  *****   i = 4
//   ***    i = 5
//    *     i = 6 
