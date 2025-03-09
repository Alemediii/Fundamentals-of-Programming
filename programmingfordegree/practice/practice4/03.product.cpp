// Alejandro Medina Diaz
//  2023 - 11 - 09

#include <iostream>
using namespace std;

int product(int x, int y);

int main()
{
    cout << " result " << product(5, 0) << endl;
    cout << " result " << product(4, 1) << endl;
    cout << " result " << product(5, 3) << endl;
}

int product(int x, int y)
{
    if (y == 0)
        return 0;
    if (y == 1)
        return x;
    else
        return x + product(x, y - 1);
}