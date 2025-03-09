#include <iostream>
using namespace std;

int cube(int& result, int i, int& odd);

int main(){
    int n = 4, odd = 1, odd2 = 0, result = 0;
    for (int i = 1; i <= n; i++)
    {
        cout << i << " to the cube " << cube(result, i, odd) << endl;
    }
    
}
         
int cube(int i, int &odd, int& odd2){
    int result;
    if(i == 1){
        result = odd;
    }
    else{
       for (int j = 0; j < i; j++)
       {
            odd += 2;
            result += odd;
       }
       
    }
    return result;
}   

// 1^3 = 1 = 1
// 2^3 = 3 + 5 = 8
// 3^3 = 7 + 9 + 11 = 27
// 4^3 = 13 + 15 + 17 + 19 = 64

