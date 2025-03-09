// backwards.cpp
// Alejandro Medina Diaz
// Writes a number backwards

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n = 3567, digits = 0, backwards = n;
  
    while(n > 0){ // we take the digits of the number
        n /= 10;
        digits++;
    }

    while(digits > 0){
        n += (backwards % 10) * pow(10, digits - 1);
        digits--;
        backwards /= 10;
    }
    
    cout << "backwards number is " << n;
}