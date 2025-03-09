#include <iostream>
#include <array>
#include <algorithm>

using namespace std;
const int N = 4;
const int N2 = 12;

typedef array<int, N> Permutation;
typedef array<int, N2> Array;

Permutation readP();
Array readA();
void isAPerm(Permutation p, Array a, int& count);

int main(){
    int count = 0;
    Permutation p; Array a;
    p = readP(); a = readA();
    isAPerm(p, a, count);
    cout << "there is: " << count << " permutations";
}

Permutation readP(){
    Permutation p;
    for (int i = 0; i < p.size(); i++)
    cin >> p[i];
    return p;
}

Array readA(){
    Array a;
    for (int i = 0; i < a.size() - 1; i++)
    cin >> a[i];
    return a;
}

void isAPerm(Permutation p, Array a, int& count){
    for (int i = 0; i < a.size(); i++)
    {
        if(is_permutation(a.begin() + i, a.begin() + i + p.size(), p.begin())){
        count++;
        cout << "perm " << count << " in pos: ";
        for(int j = i; j < i + p.size(); j++) cout << j << " ";
        cout << endl;
        }
    }
}