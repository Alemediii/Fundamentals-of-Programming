#include <iostream>
using namespace std;

void calendar();

int main(){
    calendar();
}


void points(int i){
    int counter = 0;
    while(i > 0){
        i /= 10;
        counter++;
    }
    for (int i = 0; i < counter; i++)
    {
        cout << " ";
    }
}

void calendar(){
    int counter = 1;
    int i = 0, j = 0;
    while(i * j <= 31){
    for (i = 0; i < 5; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            cout << counter;
            counter++;
            points(counter);
        }
        cout << endl;
    }    
    }
}
