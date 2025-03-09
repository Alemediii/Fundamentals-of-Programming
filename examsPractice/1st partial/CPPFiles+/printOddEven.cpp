#include <iostream>
using namespace std;

int coutNumbers(int res, int upperLimit, int lowerLimit);

int main(){
    int resOdd = 1, resEven = 0;
    int upperLimit, lowerLimit;
    cout << "define lower and upper limits: "; 
    cin >> lowerLimit >> upperLimit;

    cout << "the sum of odd numbers is: " << coutNumbers(resOdd, upperLimit, lowerLimit) << endl;
    cout << "the sum of even numbers is: " << coutNumbers(resEven, upperLimit, lowerLimit);
}

int coutNumbers(int res, int upperLimit, int lowerLimit){
    int sum = 0;
    for (int i = lowerLimit; i <= upperLimit; i++)
    {
        if(i % 2 == res) sum += i;
    }
    return sum;
}