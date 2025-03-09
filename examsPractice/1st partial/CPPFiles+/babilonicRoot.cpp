#include <iostream>
using namespace std;

void calc(double n, double& aprox, double root);

int main(){
    double n;
    cout << "define the number: "; cin >> n;
    double aprox = n/2; double root = n/aprox; calc(n, aprox, root);
    cout << "the sqro of the number is " << aprox;

}

void calc(double n, double& aprox, double root){
    n = aprox;
    aprox = (aprox + root) / 2;
    root = n / aprox;
    while((n - aprox) > 0.001){
        n = aprox;
        aprox = (aprox + root) / 2;
        root = n / aprox;
    }
}
