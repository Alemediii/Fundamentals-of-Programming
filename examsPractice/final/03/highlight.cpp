#include <iostream>
#include <array>

using namespace std;
const int SIZE = 6;

typedef array<int, SIZE> Numbers;

Numbers read(){
    Numbers n;
    for (int i = 0; i < SIZE; i++)
    {
        cin >> n[i];
    }
    return n;
}

int manyHighlighted(Numbers n);
bool isHighlighted(Numbers n, int pos);

int main(){
    Numbers n = read();
    int result = manyHighlighted(n);

    cout << "there is " << result << " highlighted numbers"; 
}

int manyHighlighted(Numbers n){
    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if(isHighlighted(n, i)){
            count++;
            cout << "the " << count << " highlighted number is: " << n[i] << endl; 
        }
    }
    return count;
}

bool isHighlighted(Numbers n, int pos){
    bool found = false;
    int pos1, pos2;
    pos1 = pos2 = -1;
    for (int i = pos - 1; i >= 0 and not found; i--)
    {
        if(n[i] != n[pos]){
            found = true;
            pos1 = i;
        } 
    }
    
    found = false;
    
    for (int i = pos + 1; i < SIZE and not found; i++)
    {
        if(n[i] != n[pos]){
            found = true;
            pos2 = i;
        } 
    }
    return (n[pos] > n[pos1] and n[pos] > n[pos2]) 
    and (pos1 != -1 or pos2 != -1);
}