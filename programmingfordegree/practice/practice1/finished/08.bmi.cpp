// 08.bmi.cpp
// Alejandro Medina Diaz 2023 - 10 - 05
// This program asks the user for some information and will print the bmi
// according to the formula

#include <iostream>
using namespace std;

int main()
{
    double height, weight;
    cout << "define the height: ";
    cin >> height;
    cout << "define the weight: ";
    cin >> weight;

    int bmi = weight / (height * height);
    cout << "The bmi equals to: " << bmi;
}