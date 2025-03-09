// 03.trip.cpp
// Alejandro Medina Diaz 2023 - 10 - 05
// Ask for distance , average speed and the leaving hour and minute .
// Compute estimated trip time and arriving hour

#include <iostream>
using namespace std;

int main()
{
    float dist, avspeed, ttotal, startt, arrivet;
    int starth, startmins, arrivh, arrivmins;

    cout << " distance (km): ";
    cin >> dist;
    cout << " average velocity (km/h): ";
    cin >> avspeed;
    cout << " leaving hour : ";
    cin >> starth;
    cout << " leaving mins : ";
    cin >> startmins;

    ttotal = dist / avspeed;
    startt = starth * 60 + startmins;
    arrivet = startt + ttotal * 60;

    arrivmins = (int)arrivet % 60;
    arrivh = arrivet / 60;

    cout << "Total estimated elapsed time(hours): " << ttotal << endl;
    cout << "Estimated time of arrival: " << arrivh << " : " << arrivmins;

    return 0;
}