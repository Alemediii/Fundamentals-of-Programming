#include <iostream>

using namespace std;

bool isPalindrome(int number);

int main() {
    cout << "Ingrese una secuencia de números (-1 para detenerse):" << endl;
    
    int number;
    cin >> number;
    
    while (number != -1) {
        if (isPalindrome(number)) {
            cout << "El número " << number << " es capicúa." << endl;
        }
        
        cin >> number;
    }

    return 0;
}

bool isPalindrome(int number) {
    int originalNumber = number;
    int reversedNumber = 0;

    while (number > 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    return (originalNumber == reversedNumber);
}


// my development

/*#include <iostream>
#include <array>

using namespace std;

bool isItCapicua(int number);

int main(){
    int number;
    cin >> number;
    while (cin >> number && number != -1)
    {
        if(isItCapicua(number))
        cout << "TRUE";   
    }
    }

bool isItCapicua(int number){
    int firstDigit = number % 10, lastDigit;
    bool success = false;
    while(number > 0){
        lastDigit = number % 10;
        number /= 10;
    }
    if(firstDigit == lastDigit)
    success = true;
    return success;
}

*/