#include <iostream>
using namespace std;

int binomialCoeff(int n, int k);
void printPascal(int n);
 
int main()
{
    printPascal(5);
}
 
void printPascal(int n)
{
    for (int line = 0; line < n; line++) {
        for (int i = 0; i <= line; i++)
            cout << " " << binomialCoeff(line, i);
        cout << endl;
    }
}
 
int binomialCoeff(int n, int k)
{
    int res = 1;
        k = n - k;
    for (int i = 0; i < k; ++i) 
        res = res * (n - i) / (i + 1);
    return res;
}
 


    // 012345678
    //     1       0
    //    1 1      1     
    //   1 2 1     2 
    //  1 3 3 1    3
    // 1 4 6 4 1   4  