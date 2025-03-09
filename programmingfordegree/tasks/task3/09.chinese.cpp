// 09.chinese.cpp
// Alejandro Medina Diaz 2023 - 07 - 10 
// Asks the user for input of the year of born, and returns the chinese zodiac signed

#include <iostream> 
using namespace std;

int main(){
    int year;
    string animal;
    cout << "define the year: "; cin >> year;

    switch(year % 12){
        
        case 0: 
            animal = "pig";
            break;
        case 1: 
            animal = "rat";
            break;
        case 2: 
            animal = "ox";
            break;
        case 3: 
            animal = "tiger";
            break;
        case 4: 
            animal = "rabbit";
            break;
        case 5: 
            animal = "dragon";
            break;
        case 6: 
            animal = "snake";
            break;
        case 7: 
            animal = "horse";
            break;
        case 8: 
            animal = "goat";
            break;
        case 9: 
            animal = "monkey";
            break;
        case 10: 
            animal = "rooster";
            break;
        case 11: 
            animal = "dog";
            break;
        default: 
            animal = "INVALID YEAR";
            break;
    } 

    cout << "the chinese animal is: " << animal; 
}