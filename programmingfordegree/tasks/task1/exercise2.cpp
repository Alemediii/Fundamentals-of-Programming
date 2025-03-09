/*
exercise2.cpp
Alejandro Medina Diaz 21/09/2023

Suppose we have already defined
char c;
int x, y;
The boolean expression x > 5 tells (reveals) if x is greater than 5, is true when the content of x is
greater than 5.
*/

#include <iostream>
using namespace std;

int main(){
char c;
int x, y;
bool itIs = false;
//    a) Write a boolean expression that tells whether x is even
if(x % 2 == 0)
itIs = true;

//    b) Write a boolean expression that tells whether x ends in 0
if(x % 10 == 0)
itIs = true;

//    c) Write a boolean expression that tells whether x ends in 00
if(x % 100 == 0)
itIs = true;

//    d) Write a boolean expression that tells whether x has 3 digits
if(x - 100 > 0 and x - 1000 < 0)
itIs = true;

//    e) Write a boolean expression that tells whether x belongs to {3, 4, 5, 6, 7}.
if(x == 3 || x == 4 || x == 5 || x == 6 || x == 7)
itIs = true;

//    f ) Write a boolean expression that tells whether x belongs to {1, 2, 3, 7, 8, 9}.
if(x == 1 || x == 2 || x == 3 || x == 7 || x == 8 || x == 9)
itIs = true

//    g) Write a boolean expression that tells whether x belongs to {1, 2, 3, 7, 8, 9}, and at the same time y belongs to {6, 7, 8, 3}
if((x == 1 || x == 2 || x == 3 || x == 7 || x == 8 || x == 9) && (y == 6 || y == 7 || y == 8 || y == 3))
itIs = true

//    h) Write an boolean expression to reveal neither x nor y are greater than 10
if(x <= 10 && y <= 10)
itIs = true

//    i) Write a boolean expression that tells whether c is an uppercase letter
if(c >= 'A' && c <= 'Z')
itIs = true

//    j) Write a boolean expression that tells whether c is a letter (upper or lowercase)
if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
itIs = true

//    k) Write a boolean expression that tells whether c is a lowercase vowel (a, e, i, o, u)
if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
itIs = true;
}