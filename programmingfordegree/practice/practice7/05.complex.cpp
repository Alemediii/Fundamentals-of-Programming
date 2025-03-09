#include <iostream>
#include <cmath>
using namespace std;

struct Complex{
    float re, im;
};

void addNumbers(Complex a, Complex b);
void subNumbers(Complex a, Complex b);
void multNumbers(Complex a, Complex b);
void divNumbers(Complex a, Complex b);
void conjugate(Complex a);

int main(){
    Complex a = {4, 8}; Complex b = {5, 1};

    addNumbers(a, b);
    subNumbers(a, b);
    multNumbers(a, b);
    divNumbers(a, b);
}


Complex conjugate(Complex a);
float modul(Complex b);
void printRes(int real, int imaginary);
void printRes(int real, int imaginary){
    cout << real << " + " << imaginary << "i";
}

void addNumbers(Complex a, Complex b){
    float re = a.re + b.re;
    float im = a.im + b. im;
    printRes(re, im);
}

void subNumbers(Complex a, Complex b){
    float re = a.re - b.re;
    float im = a.im - b. im;
    printRes(re, im);
}

void multNumbers(Complex a, Complex b){
    float re = a.re * b.re;
    float im = a.im * b. im;
    printRes(re, im);
}

void divNumbers(Complex a, Complex b){
    float re = a.re * conjugate(b).re / modul(b.re);
    float im = a.im * conjugate(b.im) / modul(b.im);
    printRes(re, im);
}

Complex conjugate(Complex a){
    Complex result;
    result.re = a.re;
    result.im = -1 * a.im;
    return result;
}

float modul(Complex b){
    return sqrt(b.re * b.re + b.im * b.im);
}