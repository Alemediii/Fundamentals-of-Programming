// 05.quadratic.cpp
// Alejandro Medina Diaz 2023 - 10 - 06
// Second grade equation solver

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float a, b, c, x1, x2, srqt;
    bool n = true;

    cout << "define a, b, c: "; cin >> a >> b >> c;

    if (a==0){
        cout<<"A can not be 0 because no number can be divided by 0" << endl;
        n=false;
    }

    srqt=pow(b,2)-(4*a*c);
    
    if (srqt<0){
        cout<<"There is not a float result for a negative square root" << endl;
        n=false;

    }

    x1=(-b+sqrt(srqt))/2*a;
    x2=(-b-sqrt(srqt))/2*a;

    if (n==true){
    cout<<"The first value for x is equal to "<<x1;
    cout<<endl;
    cout<<"The second value for x is equal to "<<x2;
    cout<<endl;
    }
    return 0;
}
