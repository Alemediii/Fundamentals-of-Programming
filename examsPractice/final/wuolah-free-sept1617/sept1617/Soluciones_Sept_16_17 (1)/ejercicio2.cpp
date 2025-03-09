/*
 * ejercicio2.cpp
 *
 *  Created on: 01/09/2017
 *      Alumno:
 *      Titulación:
 *      Grupo:
 *      PC usado:
 */

#include <iostream>

using namespace std;

const unsigned TAM = 10;

typedef unsigned TArray[TAM];


/* devuelve la longitud de la mayor sub-sucesión ordenada de los números
 *  almacenados en el array pasado como parámetro
 */
unsigned mayorLongitud(const TArray& a) {
    unsigned mayor = 0, longitud = 0, anterior = 0;

    for (unsigned i = 0; i < TAM; i++) {
        if (anterior <= a[i]) {
            longitud++;
        } else {
            if (longitud > mayor) {
                mayor = longitud;
            }
            longitud = 1;
        }
        anterior = a[i];
    }
    // hay que comprobar si la ultima sub-sucesion es la de mayor longitud
    if (longitud > mayor) {
        mayor  = longitud;
    }

    return mayor;
}

void leer(TArray& a) {

    cout << "Introduzca " << TAM << " numeros naturales: ";
    for (unsigned i = 0; i < TAM; i++) {
        cin >> a[i];
    }

}

int main() {
	TArray a;


	/* leemos la colección de números y los almacenamos en el arra */
	leer(a);

	/* Probamos nuestra función mayorLongitud */

    cout << "La longitud de la mayor sub-sucesion es: " << mayorLongitud(a) << endl;


	return 0;
}

