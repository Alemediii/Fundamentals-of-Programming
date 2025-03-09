// 06.scores.cpp
// Alejandro Medina Diaz 2023 - 10 - 05
// Ask the user for the grades of the first two partials and returns the final
// grade of the subject, knowing the correspondence by each partial to the final exam

#include <iostream>
using namespace std;

int main()
{
    double par1, par2, final;
    cout << "define the grade of partial 1: ";
    cin >> par1;
    cout << "define the grade of partial 2: ";
    cin >> par2;
    cout << "define the grade of the final exam: ";
    cin >> final;

    if ((par1 > 10) or (par1 < 0) or (par2 > 10) or (par2 < 0) or (final > 10) or (final < 0))
        cout << "Invalid data";
    else
    {

        par1 *= 0.15;
        par2 *= 0.25;
        double final_Perc = (10 - par1 - par2) / 10;
        double final_grade = final * final_Perc + par1 + par2;

        cout << "The final grade is: " << final_grade;
    }
}