#include <iostream>
using namespace std;


int main()
{
    int palabraActual = 0, palabraMayor = 0;
    cout << "Introduzca una secuencia de caracteres acabada en punto: ";
    char c = cin.get();
    while(c != '.')
    {
        if (c == ' ' || c == '\n') palabraActual = 0;
        else //Si no es un espacio (o ENTER)
        {
        palabraActual++;
        if (palabraActual > palabraMayor)
            palabraMayor = palabraActual;
        }
        //Para el siguiente:
        c = cin.get();
    }
    cout << "El tamanyo de la palabra mas larga es: " << palabraMayor << endl;
}
