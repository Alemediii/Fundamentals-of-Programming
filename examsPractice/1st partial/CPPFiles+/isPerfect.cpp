#include <iostream>
#include <array>
using namespace std;

typedef array<int, 5> Numbers;

void show(Numbers divisors);
bool isPerfect(Numbers& divisors, int n);

int main(){
    Numbers divisors;
    int number = 28;

    if(isPerfect(divisors, number)){
        cout << "the number is perfect" << endl;
        cout << "its divisors are: "; show(divisors);
    }

}

void show(Numbers divisors){
    for (int i = 0; i < divisors.size(); i++)
    {
        cout << divisors[i] << " ";
    }
}

bool isPerfect(Numbers& divisors, int n){
    int sum = 0, j = 0;
    for (int i = 1; i < n; i++)
    {
        if(n % i == 0){
            sum += i;
            divisors[j] = i;
            j++;
        } 
    }
    return sum == n;    
}