// 1.arrow.cpp
// Alejandro Medina Diaz

#include <iostream>
using namespace std;

void arrow(int n);

int main()
{
    int n = 4, n2 = 3;
    arrow(n);

    cout << endl;

    arrow(n2);
}

void arrow(int n)
{
    int spaces = 0;
    for (int i = 0; i < n * 2 - 1; ++i)
    {
        for (int j = 0; j < spaces; ++j)
        {
            cout << " ";
        }
        for (int j = 0; j < n - spaces; ++j)
        {
            cout << "*";
        }

        if (i <= n / 2)
            spaces++;
        else
            spaces--;

        cout << endl;
    }
}

// 01234       01
// *****       **       0
// .****       .*       1
// ..***       **       2
// ...**                3
// ....*                4
// ...**                5
// ..***                6
// .****                7
// *****                8