// perfectSq.cpp
// Alejandro Medina Diaz
// Prove if a number has a perfect square

#include <iostream>
using namespace std;

int main(){
    int n;
    bool success = false;
    cout << "define th number: "; cin >> n;
    for (int i = 0; i < n; i++)
    {
        if(i * i == n)
        success = true;
    }
    if(success) cout << "the number " << n << " meets the conditional";
    else cout << "the number " << n << " does not meet the condition";
}