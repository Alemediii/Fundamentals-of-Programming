// 07.dogage.cpp
// Alejandro Medina Diaz 2023 - 07 - 10
// Asks for a number of years and returns the correspondence with dog years

#include <iostream> 
using namespace std;

int main(){
    double n, years;
    cout << "define the human years: "; cin >> n;

    years = ((n - (n - 2)) * 10.5) + ((n - 2) * 4);
    cout << "the dogs age for " << n << " years is " << years;
}