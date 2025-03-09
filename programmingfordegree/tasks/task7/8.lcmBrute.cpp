#include <iostream>
using namespace std;

int lcmBruteForce(int a, int b);

int main(){
    int a = 5, b = 4;
    cout << "lcm is " << lcmBruteForce(a, b);
}


int lcmBruteForce(int a, int b){
    int lcm = a;
    while(lcm != a * b){
        lcm++;
    }
    
    return lcm;
}

