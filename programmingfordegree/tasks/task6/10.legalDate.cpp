#include <iostream>
using namespace std;

bool isItLegal(int year, int month, int day);

int main(){
    int year, month, day;
    cout << "define year, month, day: "; 
    cin >> year >> month >> day;

    if(isItLegal(year, month, day)) cout << year << " - " << month << " - "<< day << " [Y-M-D]is a valid date";
    else cout << year << " - " << month << " - "<< day << " [Y-M-D]is not a valid date";
}


bool isItLegal(int year, int month, int day){
    bool success = false, lapYear = false;
    if(year % 4 == 0 and year % 100 != 0 or year % 400 == 0)
    lapYear = true;
    if(year >= 0) {
    if(month >= 1 and month <= 12){
        switch (month)
        {
        case 1:
            if(day >= 1 and day <= 31) success = true;
            break;
        case 2:
            if((day >= 1 and day <= 28) or (lapYear and day <= 29)) success = true;
            break;
        case 3:
            if(day >= 1 and day <= 31) success = true;
            break;
        case 4:
            if(day >= 1 and day <= 30) success = true;
            break;
        case 5:
            if(day >= 1 and day <= 31) success = true;
            break;
        case 6:
            if(day >= 1 and day <= 30) success = true;
            break;
        case 7:
            if(day >= 1 and day <= 31) success = true;
            break;
        case 8:
            if(day >= 1 and day <= 31) success = true;
            break;
        case 9:
            if(day >= 1 and day <= 30) success = true;
            break;
        case 10:
            if(day >= 1 and day <= 31) success = true;
            break;
        case 11:
            if(day >= 1 and day <= 30) success = true;
            break;
        case 12:
            if(day >= 1 and day <= 31) success = true;
            break;
        
        default:
            success = false;
            break;
        }
    }
    }   
    return success;
}