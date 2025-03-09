#include <iostream>
#include <array>

const int N = 10;
using namespace std;

typedef array<int, N> Numbers;

Numbers read();
void lengthAndSerie(Numbers n, int& length, int& first, int& end);
void show(Numbers n, int first, int end);

int main(){
    Numbers n = read();
    int first, end, length;
    first = end = length = 0;
    lengthAndSerie(n, length, first, end);
    
    cout << "the longest serie is: " << length << endl;
    cout << "this is: "; show(n, first, end);
}

Numbers read(){
    Numbers n;
    for (int i = 0; i < N; i++)
        cin >> n[i];
    return n;
}

void lengthAndSerie(Numbers n, int& length, int& first, int& end){
    int counter = 1;
    for (int i = 0; i < N; i++)
    {
        if(n[i] < n[i + 1]){
            counter++;
        }
        else{
            if(counter > length){
            first = i - counter + 1;
            end = i + 1;
            length = counter;
            }
            counter = 1;
        }
    }
}

void show(Numbers n, int first, int end){
    for (int i = first; i < end; i++)
    {
        cout << n[i] << " ";
    }
}