#include <iostream>
using namespace std;

void count(char c, int& upp, int& low);

int main(){
    char c;
    int upp = 0, low = 0;
    while(cin >> c and c != '.') count(c, upp, low);
    if(upp = low) cout << "vow = upp";
    else cout << "vow != upp";
}

void count(char c, int& upp, int& low){
    if(c >= 'A' and c <= 'Z') ++upp;
    if(c >= 'a' and c <= 'z') ++low;
}