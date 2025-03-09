#include <iostream>
using namespace std;

void coutNum(int num);

int main(){
    coutNum(5);
}

void coutNum(int num){
    for (int i = 0; i < num; i++)
    {
        cout << i << ", ";
    }
    
}