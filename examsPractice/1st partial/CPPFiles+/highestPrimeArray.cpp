#include <iostream>
#include <array>
using namespace std;

typedef array<int, 5> Numbers;

void readNumbers(Numbers& n);
void highestNumber(Numbers& n, int& highest);
bool isPerfect(int n);

int main(){
    Numbers n;
    int highest = -1;
    readNumbers(n);
    highestNumber(n, highest);

    cout << "the highest prime number in the array is: " << highest;
}

void readNumbers(Numbers& n) {
    for (int i = 0; i < n.size(); i++)
    {
        cin >> n[i];
    }
    
}


void highestNumber(Numbers& n, int& highest){
    for (int i = 0; i < n.size(); i++)
    {
        if(n[i] > highest and isPerfect(n[i])) 
        highest = n[i];
    }
}

bool isPerfect(int n){
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if(n % i == 0) sum += i;
    }
    return sum == n;    
}