/*
exercise3.cpp
Alejandro Medina Diaz 21/09/2023

In the next C++ program
make the necessary modifications so as to the program asks for the height of a cylinder and its radio,
and then shows its volume (V = Sb × h)
*/

#include <iostream>
#include <cmath>
using namespace std;

const float PI = 3.141592;

int main(){
    float radio;
    float height;
    float area;
    cout << "Enter the circle radio: ";
    cin >> radio;

    cout << "Enter the cylinder height: ";
    cin >> height;

    area = PI * pow(radio, 2) * height;

    cout << "The surface of a circle with radio " << radio
    << " and which height is " << height << " is: " << area << endl;
return 0;
}
