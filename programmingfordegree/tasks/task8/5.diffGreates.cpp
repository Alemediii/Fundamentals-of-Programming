#include <iostream>
using namespace std;

int difIntegers(int a, int b);

int main(){
    int n, greatA, greatB;
    cin >> n; greatA = greatB = n;
    while(cin >> n and n != 0){
        if(n > greatA){
            greatB = greatA;
            greatA = n;
        } 
        // if(n > greatB and n != greatA) greatB = n;
    }
    int result = difIntegers(greatA, greatB);
    cout << "the difference is: " << result; 
}


int difIntegers(int a, int b){
    return a - b;
}