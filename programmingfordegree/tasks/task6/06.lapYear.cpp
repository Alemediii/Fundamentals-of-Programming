#include <iostream>
using namespace std;

bool isItLap(int year);

int main(){
    int year = 2016;
    if(isItLap(year)) cout << "year " << year << " is a lap year";
    else cout << "year " << year << " is not a lap year";
}


bool isItLap(int year){
    bool success = false;
    if(year % 4 == 0 and year % 100 != 0 or year % 400 == 0)
    success = true;
    return success;
}