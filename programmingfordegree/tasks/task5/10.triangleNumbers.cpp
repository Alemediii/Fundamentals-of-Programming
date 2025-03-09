// triangleNumbers.cpp
// Alejandro Medina Diaz
// This programme prints a similar triangle, just that 
// it prints the position

#include <iostream>
using namespace std;

int main(){
    int counter = 1, size = 9;
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if(counter > 9) counter = 0;
            cout << counter;
            counter++;
        }
        cout << endl;
    }
}