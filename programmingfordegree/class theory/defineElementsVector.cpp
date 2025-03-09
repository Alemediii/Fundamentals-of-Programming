#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> Numbers;

void readElements(Numbers& n);
void coutElements(Numbers n);

int main(){
    Numbers n;
    cout << "define the elements: ";
    readElements(n);

    cout << "these are the elements: "; coutElements(n);
}

void readElements(Numbers& n){
    int i = 0;
        while(cin >> i and i != 0)
        n.push_back(i);
}

void coutElements(Numbers n){
    for (int i: n) cout << i << " ";
}