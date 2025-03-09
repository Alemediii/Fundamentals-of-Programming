#include <iostream>
using namespace std;

int difIntegers(int a, int b);

int main(){
    int n, a, b;
    cin >> n; a = b = n;
    while(cin >> n and n != 0){
        b = n;
    }
    int result = difIntegers(a, b);
    cout << "the difference is: " << result; 
}


int difIntegers(int a, int b){
    int result;
    if(a > b) result = a - b;
    else result = b - a;
    return result;
}