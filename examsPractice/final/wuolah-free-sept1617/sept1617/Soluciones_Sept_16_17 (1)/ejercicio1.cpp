/*
 * ejercicio1.cpp
 *
 *  Created on: 01/09/2017
 *      Alumno:
 *      Titulación:
 *      Grupo:
 *      PC usado:
 */

#include <iostream>

using namespace std;

const unsigned FIL = 3;
const unsigned COL = 4;

typedef unsigned TFila[COL];
typedef TFila TMatriz[FIL];

/* devuelve el mayor impar del array pasado como parámetro.
 * si no hay impares devuelve 0
 */
unsigned mayorImpar(const TFila& a) {
    unsigned mayor = 0;

    for (unsigned c = 0; c < COL; c++) {
        if (a[c] > mayor && a[c] % 2 != 0) {
            mayor = a[c];
        }
    }

    return mayor;
}


/*  devuelve la suma de los mayores impares de cada
 *  fila de la matriz m
 */
unsigned sumaMayoresImpares(const TMatriz& m) {
    unsigned suma = 0;

    for (unsigned f = 0; f < FIL; f++) {
        suma += mayorImpar(m[f]);
    }

    return suma;
}

// muestra por pantalla el contenido de la matriz m
void escribir(const TMatriz& m) {
    for (unsigned f = 0; f < FIL; f++) {
        for (unsigned c = 0; c < COL; c++) {
            cout << m[f][c] << " ";
        }
		cout << endl;
	}
	cout << endl;

}

int main() {
	TMatriz m = { {6,4,12,2},
                  {5,2,7,3},
                  {4,9,5,11}
                };
	unsigned suma;

	/* Mostramos la matriz */
	cout << "El contenido de la matriz de prueba es: \n";
	escribir(m);

	/* Probamos nuestra función sumaMayoresImpares */
	suma = sumaMayoresImpares(m);

    cout << "La suma de los mayores impares de las filas es: " << suma << endl;


	return 0;
}

