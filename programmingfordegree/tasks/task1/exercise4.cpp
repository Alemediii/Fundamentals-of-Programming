/*
exercise4.cpp
Alejandro Medina Diaz 21/09/2023

Considering a right triangle like the one in the next figure. Build a program that asks for the length
of the two sides b, c that form the right angle and computes and shows on the screen its hypotenuse a,
but rounding its value to the next integer. Remember that in order to use the square root function
(sqrt(value)), the cmath file must be also included: #include <cmath>
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float hyp, a, b;
    cout << "Define the two sides of the triangle: ";
    cin >> a >> b;
    hyp = sqrt(pow(a, 2) + pow(b, 2));
    cout << "The hypotenus equals to " << (int) hyp + 1;
}