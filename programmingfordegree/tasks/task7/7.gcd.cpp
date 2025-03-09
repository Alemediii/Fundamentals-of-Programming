#include <iostream>
using namespace std;

int gcd(int a, int b);

int main(){
    cout << "gcd: " << gcd(18,12);
}

int gcd(int a, int b) {
    if(b > a) swap(a, b);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;  // Once b becomes 0, a is the GCD.
}
