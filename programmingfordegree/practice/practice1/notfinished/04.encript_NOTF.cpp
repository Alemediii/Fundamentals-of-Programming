// 04.encript.cpp
// Alejandro Medina Diaz 2023 - 10 - 05
// Ask for four letters and print its 4 next values in ASCII

#include <iostream>
using namespace std;

int main()
{
    string word;
    int counter = 0;

    cout << "define the word: ";
    cin >> word;

    word += word;
    cout << " The word is: " << (string)word;
}