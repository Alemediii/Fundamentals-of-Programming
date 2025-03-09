#include <iostream>
using namespace std;

int firstInt(string s);

int main(){
    cout << firstInt("I cannot believe they did it on 93 passes") << endl;
    cout << firstInt("it ain't the 1st time");
}

int firstInt(string s){
    int res = 0, i = 0;
    bool isFinished = false, onIt = true;

    while(i < s.length() and not isFinished){
        if('0' <= s[i] and s[i] <= '9'){
            res = res * 10 + (s[i] - 0);
            onIt = true;
        } else if(onIt)
        isFinished = true;
        ++i;
    }
    return res;
}