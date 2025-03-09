// firstLastPos.cpp
// Alejandro Medina Diaz
// Asks for a sequence and returns the first and last pos in which we find a number

#include <iostream>
#include <climits>
using namespace std;

int main(){
    int num, pos, first = INT_MAX, last = INT_MIN;
    cout << "define the sequence: "; 
    cin >> num;
    pos = 1;
    if(num == 12){
        if(pos < first)
        first = pos;
        
        if(pos > last)
        last = pos;
    }

    while(num != 0){
    pos++;
    cin >> num;
    if(num == 12){
        if(pos < first)
        first = pos;
        
        if(pos > last)
        last = pos;
    }
    }

    cout << "the first position is: " << first << endl;
    cout << "the last position is: " << last;
}