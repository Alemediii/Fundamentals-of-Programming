#include <iostream>
using namespace std;

bool isPrime(int n);
bool sum(int& sum1, int& sum2, int n);

int main(){
    int n, sum1, sum2;
    cout << "define n: "; cin >> n;
    if(isPrime(n))
    sum(sum1, sum2, n);
    
    cout << "the numbers which sum " << n << " are: " << 
    sum1 << " + " << sum2; 

}

bool isPrime(int n){
    int counter = 0;
    for (int i = 1; i < n; i++)
    {
        if(n % i == 0)
        counter++;
    }
    return counter <= 2;
}

bool sum(int& n1, int& n2, int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if((i + j) == n)
            return true;
        }
    }
}