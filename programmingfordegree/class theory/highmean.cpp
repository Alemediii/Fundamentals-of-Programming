// 1. programme that asks the user for numbers and sum each of them until he enters 0. prints the sum after
// 2. print also the average of the numbers
// 3. add to the final receipt the highest

#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n1;
    cout << "define the numbers (0 ends): ";
    cin >> n1;
    
    int highest = n1, sum = n1, counter = 1;

    while(cin >> n1 and n1 != 0){
        sum += n1;
        counter++;
        if(n1 > highest)
        highest = n1;
    }

    cout << "The sum equals to : " << sum << endl;
    cout << "The mean of the numbers is: " << (double) sum / counter << endl;
    cout << "The highest of the numbers is: " << highest << endl;   
}