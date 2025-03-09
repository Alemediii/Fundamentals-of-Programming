// 06.seconds.cpp
// Alejandro Medina Diaz 2023 - 07 - 10
// Asks the user for a number of seconds and decompose it in hours
// minutes and seconds

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "define the seconds: "; cin >> n;

    double hours = n / 3600; n %= 3600;
    double minutes = n / 60; n %= 60;

    cout << "hours " << hours << " minutes " << minutes << " seconds " << n; 
}