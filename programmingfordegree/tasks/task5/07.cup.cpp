// cup.cpp
// Alejandro Medina Diaz
// Print a cup

#include <iostream>
using namespace std;

int main(){
    int n = 5, space = 2;


    //first bucle for, which is used to build the upper part of the cup
        for (int i = n; i >= 0; i--)
    {
            for(int k = space; k > 0; k--)
            cout << " ";
    space++;
            for (int j = i * 2 + 1; j > 0 ; j--)
            cout << "*"; 
        cout << endl;
    }

    //second bucle for, used to print the part from which we grab the cup
    space = (n / 2);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            if(j == (n + 2)) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }

    //third bucle, made for the lower part of the cup
    space = n;
    for (int i = 1; i <= 2; i++)
    {
        for (int i = 0; i < space; i++)
        {
            cout << " ";
        }
        
    space = n / 2;

        for (int j = 0; j < i * n; j++)
        {
            cout << "*"; 
        }
        cout << endl;
    }
    

    

}
    // 012345678
    // *********
    //  *******
    //   *****
    //    ***
    //     *
    //     * 
    //     * 
    //     * 
    //     * 
    //   ***** 
    // *********


    