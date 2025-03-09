// rombus.cpp
// Alejandro Medina Diaz
// This programme asks for a number n and return a triangle 
// with a unique form

#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int space = n;
    for (int i = 0; i < n; i++)
    {
            for(int k = 0; k < space; k++)
            cout << ".";
    space--;
            for (int j = 0; j < i * 2 + 1; j++)
            {
                if(j % 2 == 0) cout << "*";
                else cout << ".";
            } 
        cout << "." << endl;
    }
}

// 0123456
// ...*..     i = 0 
// ..*.*.   i = 1
// .*.*.*.   i = 2
// .*.*.*.*.  i = 3
