// square.cpp
// Alejandro Medina Diaz
// This programme asks for n and defines an square

#include <iostream>
using namespace std;

int main(){
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}