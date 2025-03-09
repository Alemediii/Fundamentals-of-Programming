#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "define a letter: ";
    cin >> c;
    if(c >= 'a' and c <= 'z')
    cout << "The letter is " << (char)(c + ('A' - 'a'));  
    
    if(c >= 'A' and c <= 'Z')
    cout << "The letter is " << (char)(c - ('A' - 'a'));  
}