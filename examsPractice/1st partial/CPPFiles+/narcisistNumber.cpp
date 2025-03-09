#include <iostream>
#include <cmath>

using namespace std;

void howManyDigit(int& number, int& digit);
void digitPower(int& digit, int& number, int& sum);

int main(){
    int number, digit = 0, sum = 0;
    cin >> number;
    digitPower(digit, number, sum);
    if(number == sum) cout << "The number is a narcisist";
    else cout << "The number is NOT a narcisist";
}

void howManyDigit(int& number, int& digit){
    int n = number;
    while(n > 0){
        digit++;
        n /= 10;
    }
}

void digitPower(int& digit, int& number, int& sum){
    int n = number;
    howManyDigit(number, digit);
    while(n > 0){
        sum += pow(n % 10, digit); 
        n /= 10;
    }
}
