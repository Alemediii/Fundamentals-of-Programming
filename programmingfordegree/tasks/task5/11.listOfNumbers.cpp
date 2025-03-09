// listOfNumbers.cpp
// Alejandro Medina Diaz
// This programme write the multiplying tables

#include <iostream>
using namespace std;

int main(){
    int div = 1;
    for (int j = 1; j <= 10; j++)
    {
    for (int i = 1; i <= 10; i++)
    {
        if(i * div / 100 >= 1) cout << "." << i * div;
        else if(i * div / 10 >= 1) cout  << ".." << i * div;
        else if(i * div <= 10) cout  << "..." << i * div;
    }
    cout << endl;
    div++;
    }
    
}