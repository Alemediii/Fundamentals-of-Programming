// 05.secondgrade.cpp
// Alejandro Medina Diaz

// I used some info outside of my knowledge, as I did not know how
// to specify the type of issue that the equation had, because
// I wanted to use the original function, with its parameters, and also did not
// want to use many couts in the ifs conditions, and having that type of information in the main part.
// I used some information from outside, but also had to modify the quadEq adding one more parameter

#include <iostream>
#include <cmath>

using namespace std;

enum SolutionType {
    TWO_ROOTS,
    COMPLEX,
    REAL_ROOT,
    SIMPLE,
    IMPOSSIBLE,
    TRIVIAL
};

void quadEq(float a, float b, float c, float& x1, float& x2, SolutionType& type) {
    float discriminant = b * b - 4 * a * c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                type = TRIVIAL;
            } else {
                type = SIMPLE;
            }
        } else {
            type = REAL_ROOT;
            x1 = -c / b;
            x2 = x1;
        }
    } else {
        if (discriminant > 0) {
            type = TWO_ROOTS;
            x1 = (-b + sqrt(discriminant)) / (2 * a);
            x2 = (-b - sqrt(discriminant)) / (2 * a);
        } else if (discriminant == 0) {
            type = REAL_ROOT;
            x1 = -b / (2 * a);
            x2 = x1;
        } else {
            type = COMPLEX;
            x1 = -b / (2 * a);
            x2 = sqrt(-discriminant) / (2 * a);
        }
    }
}

int main() {
    float a, b, c, x1, x2;
    SolutionType type;

    cout << "Enter a, b, and c: ";
    cin >> a >> b >> c;

    quadEq(a, b, c, x1, x2, type);

    switch (type) {
        case TWO_ROOTS:
            cout << "Two different real roots: x1 = " << x1 << ", x2 = " << x2 << endl;
            break;
        case COMPLEX:
            cout << "Real parts of complex roots: x1 = " << x1 << " + " << x2 << "i, x2 = " << x1 << " - " << x2 << "i" << endl;
            break;
        case REAL_ROOT:
            cout << "Double real root: x1 = x2 = " << x1 << endl;
            break;
        case SIMPLE:
            cout << "Simple number (a is 0)" << endl;
            break;
        case IMPOSSIBLE:
            cout << "Impossible equation (a and b are non-zero, but c is zero)" << endl;
            break;
        case TRIVIAL:
            cout << "Trivial equation (a, b, and c are all zero)" << endl;
            break;
    }

    return 0;
}
