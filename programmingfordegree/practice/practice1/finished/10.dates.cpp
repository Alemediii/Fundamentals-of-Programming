// 10.dates.cpp
// Alejandro Medina Diaz 2023 - 10 - 05
// Ask the user for a date of birth, and it will print the date with a different
// structure, printing the written month

#include <iostream>
using namespace std;

int main()
{
    int year, month, day;
    string monthWritten;
    cout << "define the year / month / day: ";
    cin >> year >> month >> day;

    switch (month)
    {
    case 1:
        monthWritten = "January";
        break;

    case 2:
        monthWritten = "February";
        break;

    case 3:
        monthWritten = "March";
        break;

    case 4:
        monthWritten = "April";
        break;

    case 5:
        monthWritten = "May";
        break;

    case 6:
        monthWritten = "June";
        break;

    case 7:
        monthWritten = "July";
        break;

    case 8:
        monthWritten = "August";
        break;

    case 9:
        monthWritten = "September";
        break;

    case 10:
        monthWritten = "October";
        break;

    case 11:
        monthWritten = "November";
        break;

    case 12:
        monthWritten = "December";
        break;
    }

    cout << day << month << year << " = " << day << monthWritten << year;
}