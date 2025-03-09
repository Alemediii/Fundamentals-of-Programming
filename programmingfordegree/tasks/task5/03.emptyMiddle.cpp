// square.cpp
// Alejandro Medina Diaz
// This programme asks for n and defines an square with a partial emptyness on its middle

#include <iostream>
using namespace std;

int main(){
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {  
            if(i == (n / 2) - 1 and j == (n / 2) - 1 or i == (n / 2) and j == (n / 2)
            or i == n / 2 and j == (n / 2) - 1 or i == (n / 2) - 1 and j == n / 2) cout << " ";
            else cout << "*";
        }
        cout << endl;
    }
}

// 012345
// ******    i = 0
// ******    i = 1
// **_ **    i = 2 
// ** _**    i = 3 
// ******    i = 4
// ******    i = 5