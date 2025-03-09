#include <iostream>
#include <vector>

using namespace std;
typedef vector<int> Numbers;

Numbers read();
bool isPerfect(int value);
int highestPerfect(Numbers n);

int main(){
    Numbers numbers = read();
    int perfect = highestPerfect(numbers);
    if(perfect == -1) cout << "there is no perfect number in the array";
    else cout << "the highest perfect is " << perfect;
}

Numbers read(){
    Numbers n;
    int num;
    while(cin >> num and num != 0) n.push_back(num);
    return n;
}

bool isPerfect(int value){
    int sum = 0, div = 1;
    while(div < value){
        if(value % div == 0) sum += div;
        div++;
    }
    return sum == value;
}

int highestPerfect(Numbers n){
    int perfect = -1;
    for (int i = 0; i < n.size() - 1; i++)
    {
        if(isPerfect(n[i]) and n[i] > perfect) perfect = n[i];
    }
    return perfect;
}