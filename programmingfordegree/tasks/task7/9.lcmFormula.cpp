#include <iostream>
using namespace std;

int lcm(int a, int b);
int gcd(int a, int b);

int main(){
    int a = 5, b = 4;
    cout << "lcm by formula is " << lcm(a, b);
}

int gcd(int a, int b){
    if(b > a) swap(a, b);
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b){
    return (a * b) / gcd(a, b);
}

