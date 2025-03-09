// 02.salary.cpp
// Alejandro Medina Diaz 2023 - 10 - 05
// Ask for the amouynt of hours worked and rerturns the salary and net amount
// to be paid

#include <iostream>
using namespace std;

const double tax = 0.25;
const int hourly_pay = 60;

int main()
{
    double hours, days, total, net;

    cout << "Enter the number of worked hours: ";
    cin >> hours;
    cout << "Enter the number of worked days: ";
    cin >> days;
    total = hours * days * hourly_pay;
    net = total - (total * tax);

    cout << "The gross amount to be paid is: " << total << endl;
    cout << "The net amount to be paid is: " << net << endl;
}