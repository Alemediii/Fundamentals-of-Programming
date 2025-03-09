// 04.power.cpp
// Alejandro Medina Diaz

#include <iostream>
using namespace std;

float powx(float x, int n);
int main(){
    int n = 2, exp = 3;
    cout << "the result is " << powx(exp, n);
}

float powx(float x, int n){
    int res = 1;
    while(x != 0){
        x--;
        res *= n;
    }
    return res;
}