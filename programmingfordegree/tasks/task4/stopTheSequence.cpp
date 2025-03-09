// stopTheSequence.cpp
// Alejandro Medina Diaz
// The programme asks for a sequence and stops it whenever a zero is enterd or
// whenever the sums of the numbers already antered is the same as the last number

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "define the numbers: "; 
    cin >> n;

    int sum = n;
    while(n != 0 or sum == n){
        cin >> n;
        sum += n;
    }
}