#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> Vector;

void readElements(Vector& v);
void show(Vector v);

int main(){
    Vector v;
    readElements(v);
    show(v);
}

void readElements(Vector& v){
    for(int num : v)
        cin >> num;
}

void show(Vector v){
    for(int num : v)
        cout << num << ", ";
}