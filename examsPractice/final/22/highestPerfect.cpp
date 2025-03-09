#include <iostream>
#include <array>

using namespace std;
const int MAX = 10;

typedef array<int, MAX> Numbers;
struct TNumbers{
    Numbers n;
    int nEl = 0;
};

bool isPerfect(int value){
    int sum = 0;
    for (int i = 1; i < value; i++)
    {
        if(value % i == 0) sum += i;
    }
    
    return value == sum;
}

int highestPerfect(TNumbers n){
    int highestPerfect = 0;
    for(int i = 0; i < n.nEl; i++)
    {
        if(isPerfect(n.n[i]) and n.n[i] > highestPerfect)
        highestPerfect = n.n[i];
    }
    return highestPerfect;
}

void read(TNumbers& n);

int main(){
    TNumbers n;
    read(n);

    int result = highestPerfect(n);
    if(result == 0) cout << "there is no perfect num"; 
    else cout << "perfect num is " << result; 
}

void read(TNumbers& n){
    int num;
    cout << "define: ";
    cin >> num;
    while(num != 0){
        n.n[n.nEl] = num;
        n.nEl++;
        cin >> num;
    }
}
