#include <iostream>
using namespace std;

int readNum();

int main(){
    int num = readNum();
    cout << "the number: " << num << " meets the criteria"; 
}

int readNum(){
    int n;
    while(cin >> n and (n > 12 or n < 1)){
        cout << "WRONG Criteria" << endl;
        cout << "Number again: ";
    }
    return n;
}