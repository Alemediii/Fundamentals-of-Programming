#include <iostream>
#include <array>
#include <climits>

using namespace std;
typedef array<int, 10> Numbers;

void readElements(Numbers& n);
int highest(Numbers& n, int& highest);
int lowest(Numbers& n, int& lowest);

int main(){
    int lowestN = INT_MAX, highestN = INT_MIN; 
    Numbers n;
    cout << "define the array: "; readElements(n);
    int posHigh = highest(n, highestN); int posLow = lowest(n, lowestN);
    cout << "highest number is " << highestN << " which is in position: " << posHigh << endl
    << " and the lowest number is " << lowestN << " which is in position " << posLow;
}


void readElements(Numbers& n){
    for (int i = 0; i < n.size(); ++i)
    {
        cin >> n[i];
    }
}


int highest(Numbers& n, int& highestN){
    int pos;
    for (int i = 0; i < n.size(); i++)
    {
        if (n[i] > highestN){
            highestN = n[i];
            pos = i;
        }  
    }
    return pos;
}


int lowest(Numbers& n, int& lowestN){
    int pos;
    for (int i = 0; i < n.size(); i++)
    {
        if (n[i] < lowestN){
            lowestN = n[i];
            pos = i;
        } 
    }
    return pos;
}