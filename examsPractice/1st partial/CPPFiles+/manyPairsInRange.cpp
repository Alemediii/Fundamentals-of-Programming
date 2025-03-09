#include <iostream>
using namespace std;

bool isPar(int n);

int main(){
    int n1, n2, counter = 0;
    cout << "define the limits: "; 
    cin >> n1 >> n2;

    for (int i = n1; i < n2; i++)
    {
        if(isPar(i))
        counter++;
    }
    cout << "Counter: " << counter;
}

bool isPar(int n){
    if(n % 2 == 0) return true;
    else return false;
}