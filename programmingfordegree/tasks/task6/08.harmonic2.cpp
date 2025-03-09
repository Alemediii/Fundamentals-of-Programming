#include <iostream>
#include <cmath>
using namespace std;

float harmonic(int i);

int main(){
    int i = 2;
    cout << "result is " << harmonic(i);
}

float harmonic(int i){
    float result = 0;
    for (int j = 1; j <= i; j++)
    {
        result = pow(-1, i+1)*1/i;
    }
    return result;
}