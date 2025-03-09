// 08.astro.cpp
// Alejandro Medina Diaz 2023 - 07 - 10
// Ask for the day and month of birthday and returns its zodiac sign

#include <iostream>
using namespace std;

int main(){
    int day, month;

    cout<<"Define the day of your birthday: "; cin>>day;
    cout<<"Define the month of your birthday: "; cin>>month;

    if (month==1){
        if(day<21){
            cout<<"Capricornus"<<endl;
        }
            else {
            cout<<"Aquarius"<<endl;
            }
    }
    if (month==2){
        if(day<=19){
            cout<<"Aquarius"<<endl;
        }
            else {
            cout<<"Piscis"<<endl;
            }
    }
    if (month==3){
        if(day<=20){
            cout<<"Piscis"<<endl;
        }
            else {
            cout<<"Aries"<<endl;
            }
    }
    if (month==4){
        if(day<=20){
            cout<<"Aries"<<endl;
        }
            else {
            cout<<"Taurus"<<endl;
            }
    }
    if (month==5){
        if(day<=20){
            cout<<"Taurus"<<endl;
        }
            else {
            cout<<"Geminis"<<endl;
            }
    }
    if (month==6){
        if(day<=21){
            cout<<"Geminis"<<endl;
        }
            else {
            cout<<"Cancer"<<endl;
            }
    }
    if (month==7){
        if(day<=21){
            cout<<"Cancer"<<endl;
        }
            else {
            cout<<"Leo"<<endl;
            }
    }

    if (month==8){
        if(day<=22){
            cout<<"Leo"<<endl;
        }
            else {
            cout<<"Virgo"<<endl;
            }
    }
    if (month==9){
        if(day<=22){
            cout<<"Virgo"<<endl;
        }
            else {
            cout<<"Libra"<<endl;
            }
    }
    if (month==10){
        if(day<=22){
            cout<<"Libra"<<endl;
        }
            else {
            cout<<"Escorpio"<<endl;
            }
    }
    if (month==11){
        if(day<=22){
            cout<<"Escorpio"<<endl;
        }
            else {
            cout<<"Sagittarius"<<endl;
            }
    }
    if (month==12){
        if(day<=21){
            cout<<"Sagittarius"<<endl;
        }
            else {
            cout<<"Capricornus"<<endl;
            }
    }

}