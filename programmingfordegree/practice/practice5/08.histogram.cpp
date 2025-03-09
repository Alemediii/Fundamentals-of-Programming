#include <iostream>
#include <array>

using namespace std;

const int N = 5;
typedef array<int,N> TVec;

TVec readArr();
void histArr(TVec a);

int main(){
    TVec a = readArr();
    histArr(a);
}


TVec readArr(){
    TVec v;
    cout << "define vector: ";
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    return v;
}

void histArr(TVec v){
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i]; j++)
        {
            cout << "#";
        }
        cout << endl;
    }
}