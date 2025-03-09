#include <iostream>
using namespace std;

void arrow(int n);

int main(){
    arrow(5);

    cout << endl;

    arrow(6);
}

void arrow(int n){
    //upper part
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
            cout << " ";
        for (int j = 0; j < n - i; j++)
            cout << "*";
    cout << endl;
    }

    //lower part
    for (int i = n - 2; i >= 0; --i)
    {
        for (int j = i; j > 0; --j)
            cout << " ";
        for (int j = n - i; j > 0; --j)
            cout << "*";
    cout << endl;
    }
}

