#include <iostream>
#include <array>

using namespace std;
const int MAX = 10;

typedef array<int, MAX> Numbers;

bool isRepeated(Numbers n, int num){
    int i = 0, count = 0;
    while(i < MAX - 1){
        if(n[i] == num) count++;
        i++;
    }
    return count == 1;
}

void read(Numbers& n){
    cout << "define numbers: ";
    for (int i = 0; i < MAX; i++)
    {
        cin >> n[i];
    }
}

void strict(Numbers n, int& minor, bool& unique);

int main(){
    Numbers n; bool unique; int minor;

    read(n);
    strict(n, minor, unique);

    if(unique) cout << "strict minor is: " << minor;
    else cout << "no strict minor";
}

void strict(Numbers n, int& minor, bool& unique){
    minor = n[0];
    for (int i = 0; i < MAX; i++)
    {
        if(n[i] < minor) minor = n[i];
    }
    unique = isRepeated(n, minor);
}