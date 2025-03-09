#include <iostream>
using namespace std;

int harmonic(int i);

int main(){
    int i = 5;
    cout << "result is " << harmonic(i);
}

int harmonic(int i){
    float result = 0;
    for (int j = 1; j <= i; j++)
    {
        result += (1.0 / j);
    }
    return result;
}