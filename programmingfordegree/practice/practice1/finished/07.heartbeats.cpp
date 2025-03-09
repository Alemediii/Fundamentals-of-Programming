// 07.heartbeats.cpp
// Alejandro Medina Diaz 2023 - 10 - 05
// A program which ask the user for a number and return the max numbers of beats
// that a person should have by minute

#include <iostream>
using namespace std;

int main()
{
    int age, b;
    cout << "Define the age: ";
    cin >> age;
    b = 220 - age;

    cout << "According to Haskell and Fox, the max bpm should be: " << b;
}