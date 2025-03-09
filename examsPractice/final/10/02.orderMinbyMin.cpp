#include <iostream>
#include <array>

using namespace std;
const int MAX_NUM = 8;

struct Nums{
    int num;
    bool already = false;
};

typedef array<Nums, MAX_NUM> TNumbers;

TNumbers read(){
    TNumbers n;
    for (int i = 0; i < MAX_NUM; i++)
    {
        cin >> n[i].num;
    }
    return n;
}

void show(TNumbers n){
    for (int i = 0; i < MAX_NUM; i++)
    {
        cout << n[i].num << " ";
    }
    cout << endl;
}

void lowest(TNumbers& n);

int main(){

    cout << "array: ";
    TNumbers n = read();

    lowest(n);
    cout << "array after order: ";
    show(n);
}

void lowest(TNumbers& n){
    for (int i = 0; i < MAX_NUM; i++)
    {
        for (int j = i + 1; j < MAX_NUM; j++)
        {    
            if(n[i].num > n[j].num and not n[j].already){
                swap(n[i], n[j]);
            }
        }
        n[i].already = true;
    }
}