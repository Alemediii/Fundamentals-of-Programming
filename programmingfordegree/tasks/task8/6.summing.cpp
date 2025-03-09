//as if I understood it right, the programme should stop 
//whenever the sum of the previous number is lower than the constant

#include <iostream>
using namespace std;

#define max 10
int summing(int n, int& sum);

int main(){
    int n, sum = 0;
    cin >> n;
    while(summing(n, sum) < 10){
        cin >> n;
    }
    cout << "sum is: " << sum - n;
}

int summing(int n, int& sum){
    sum += n;
    return sum;
}