// primeOrNot.cpp
// Alejandro Medina Diaz
// Asks for a number and checks whether it is prime or not

#include <iostream>
using namespace std;

int main()
{
    int n, div, counter = 0;
    cout << "define n: ";
    cin >> n; 

   for (int i = 1; i <= n; i++){
        if(n % i == 0)
            counter++;
   }
   

    if (counter > 2)
        cout << n << " is NOT prime" << endl  << " it has " << counter << " divisors";
    else
        cout << n << " is prime" << endl;
}