 // enumerated type are a way to encode a 
//for example a color


// //not easy
// int colour;
// colour = 1;
// colour = 3;


// //much better
// enum TColour{BLUE, GREEN, RED, WHITE};
// enum Months{JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER}


#include <iostream>
using namespace std;
enum TColour {BLUE, GREEN, RED, BROWN};
int main()
{
    TColour colorSky, colorGround;
    colorSky = BLUE;
    colorGround = BROWN;
    cout << colorSky << endl;
    cout << colorGround << endl;
    return 0;
}