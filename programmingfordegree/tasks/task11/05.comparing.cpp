#include <iostream>
using namespace std;

int compareString(string a, string b);

int main(){
    cout << compareString("apple", "plane") << endl; 
    cout << compareString("ex", "apple") << endl; 
    cout << compareString("apple", "ex"); 
}

int compareString(string a, string b){
    int res = -1;
    if (a.length() > b.length())
        res = 1;
    else if(a.length() == b.length())
        res = 0;
    return res;  
}