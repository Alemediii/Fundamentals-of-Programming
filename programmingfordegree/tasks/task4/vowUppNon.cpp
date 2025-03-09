// vowUppNon.cpp
// Alejandro Medina Diaz
// The programme will read a number of chat until a '.' is entered and 
// will return the number of vowels, upperCase letters and non letters entered

#include <iostream>
using namespace std;

int main(){
    char c;
    int vowels = 0, upperCase = 0, nonLetters = 0;

    c = cin.get();
    while (c != '.' ) {
        if(c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U' or c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u')
        vowels++;
         if(c >= 'A' and c <= 'Z')
        upperCase++;
        if((c >= ' ' and c <= '@') or (c >= '{' and c <= '~'))
        nonLetters++;
        c = cin.get();
    }

    cout << "Vowels: " << vowels << ", upperCases: " << upperCase 
    << ", nonLetters: " <<nonLetters;

}