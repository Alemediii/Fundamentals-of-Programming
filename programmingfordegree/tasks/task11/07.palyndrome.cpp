#include <iostream>
using namespace std;

bool isItPalindrome(string s);
string boolToString(bool value);

int main(){
    cout << "is it a palindrome? " << boolToString(isItPalindrome("elegido")) << endl;
    cout << "is it a palindrome? " << boolToString(isItPalindrome("satas"));
}

string boolToString(bool value){
    return value ? "true" : "false";
}

bool isItPalindrome(string s){
    bool success = true;
    int firstPos = 0, lastPos = s.length() - 1;
//    char one = s[firstPos], two = s[lastPos]; // this was just a checking to know what char value took in each position
    for (int i = 0; i < s.length() / 2; i++)
    {
        if(s[firstPos] != s[lastPos]) success = false;
        firstPos++;
        lastPos--;
    }
    return success;
}
