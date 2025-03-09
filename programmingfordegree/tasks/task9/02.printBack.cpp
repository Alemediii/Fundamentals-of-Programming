#include <iostream>
#include <array>

using namespace std;
typedef array<int, 5> TVec;

void printBack(TVec a);

int main(){
    printBack((TVec){{1,20,3,40,5}}); // 5 40 3 20 1
    cout << endl;
}

void printBack(TVec a){
    for (int i = a.size(); i < 0; --i)
    {
        cout << a[i] << " ";
    }
    
}