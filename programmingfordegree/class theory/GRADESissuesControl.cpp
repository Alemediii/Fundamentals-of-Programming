#include <iostream>
using namespace std;

int main(){
    int grade;
    cout << "define the grade: "; cin >> grade;
        if(grade >= 90 and grade <= 100) grade = 'A';
    else if(grade >= 80 and grade < 90) grade = 'B';
    else if(grade >= 70 and grade < 80) grade = 'C';
    else if(grade >= 60 and grade < 70) grade = 'D';
    else if(grade >= 50 and grade < 60) grade = 'E';
    else if(grade < 50 and grade >= 0) grade = 'F';
    else grade = false;

    while(!grade){
        cout << "define the grade: "; cin >> grade;
        if(grade >= 90 and grade <= 100) grade = 'A';
    else if(grade >= 80 and grade < 90) grade = 'B';
    else if(grade >= 70 and grade < 80) grade = 'C';
    else if(grade >= 60 and grade < 70) grade = 'D';
    else if(grade >= 50 and grade < 60) grade = 'E';
    else if(grade < 50 and grade >= 0) grade = 'F';
    else grade = false;
}
    cout << "Your grade is: " << (char) grade; 
}