#include <iostream>
using namespace std;

bool isIt(int i);
bool isPrime(int number);

int main(){
    int upLim, doLim;
    cout << "define up low bound: ";
    cin >> upLim >> doLim;
    for (int i = upLim; i < doLim; i++)
    {
        if(i % 2 == 0)
        isIt(i);
    }   
    
    if(isIt) cout << "The expression is correct";
    else cout << "These limits do not complete the guess";
}

bool isPrime(int number){
    for (int i = 2; i < number; i++)
    {
        if(number % i != 0)
        return true;
    }
    return false;
}

bool isIt(int i){
    bool success = true;
    int k = 0, j = 0;
    while(not isPrime(k) and not isPrime(j) and (k+j) != i){
        k++, j++;
    }

    cout << i << " = " << j << " + " << k << endl;
    return success;
}

