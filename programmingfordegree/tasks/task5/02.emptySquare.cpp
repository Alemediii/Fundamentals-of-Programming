// square.cpp
// Alejandro Medina Diaz
// This programme asks for n and defines an empty square

#include <iostream>
using namespace std;

int main(){
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i == 0 or i == n - 1 or j == 0 or j == n - 1) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}

// 0123
// ****    i = 0
// *  *    i = 1 
// *  *    i = 2 
// ****    i = 3