#include <iostream>
#include <array>

using namespace std;
const int MAX = 5;

typedef array<int, MAX> Numbers;

void readList(Numbers& n);
bool fixable(Numbers n, Numbers n2);
bool isPositive(int value);

int main(){
    Numbers n = {1, 2, 4, 6, -2}; 
    Numbers n2 = {1, -2, 2, 4, 6};

    if(fixable(n, n2)) cout << "the list are fixable";
    else cout << "the list are not fixable";
}

bool isPositive(int value){
    return value >= 0;
}

void readList(Numbers& n){
    cout << "define: " << endl;
    for (int i = 0; i < int(n.size()); i++)
    {
        cin >> n[i];
    }

}

bool fixable(Numbers n, Numbers n2){
    bool keeps = true;
    int i, j;
    unsigned counter;
    counter = i = j = 0;
    while(keeps and counter < MAX - 1){
        while(i < MAX and not isPositive(n[i])) i++;
        while(j < MAX and not isPositive(n2[j])) j++;

        if(i < MAX and j < MAX){
            keeps = n[i] == n2[j];
            i++; j++;
        } else keeps = false;
        counter++;
    }
    return keeps;
}