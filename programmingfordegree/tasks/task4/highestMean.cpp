// highestMean.cpp
// Alejandro Medina Diaz
// The programme does N interactions to find the largest and the mean of a 
// serie of numbers

#include <iostream>
using namespace std;

int main(){
    int n1, n;
    cout << "define the bucle interactions: ";
    cin >> n1;
    
    cout << "define the numbers: ";
    cin >> n;

    int highest = n, counter = 1, sum = n;
    for(int i = 0; i < n1 - 1; i++){
        sum += n;
        counter++;
        if(n > highest)
        highest = n1;
    }

    cout << "The sum equals to : " << sum << endl;
    cout << "The mean of the numbers is: " << (double) sum / counter << endl;
    cout << "The highest of the numbers is: " << highest << endl;   
}