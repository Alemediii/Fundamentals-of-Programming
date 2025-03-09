#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b, c;
    double x1, x2, srqt;
    bool n = true;
    cout<<"Define a, b, c: "; cin >> a >> b >> c;

    x1=(-b+srqt)/2*a;
    x2=(-b-srqt)/2*a;
    srqt=pow(b,2)*(-4*a*c);

    if (a==0){
        cout<<"A can not be 0 because no number can be divided by 0" << endl;
        n=false;
    }
        
    if (srqt<0){
        cout<<"There is not a float result for a negative square root, we should be using complex numbers" << endl;
        n=false;
        double sqroott = sqrt((-1) * (pow(b,2)*(-4*a*c)));
        cout << "The sol1 equals " << (-b+(sqroott))/2*a << " i";
        cout << "The sol2 equals " << (-b-(sqroott))/2*a << " i";

    } else if (n){

        x1=(-b+srqt)/2*a;
        x2=(-b-srqt)/2*a;
        srqt=pow(b,2)*(-4*a*c);

        cout<<"The first value for x is equal to "<<x1;
        cout<<endl;
        cout<<"The second value for x is equal to "<<x2;
        cout<<endl;
    }
    return 0;
}
