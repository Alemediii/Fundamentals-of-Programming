/*
 * ejercicio3.cpp
 *
 *  Created on: 03/02/2017
 *      Alumno:
 *      Titulación:
 *      Grupo:
 *      PC usado:
 */

#include <iostream>
#include <string>

using namespace std;

const unsigned MAX_PAL_DIST = 20;

typedef string TPalabras[MAX_PAL_DIST];

struct TDatos {
	TPalabras pal;
	unsigned nPal;
};

// comprueba si la palabra pal esta almacenada ya en la estructura datos
bool esta(const string& pal, const TDatos& datos) {
	unsigned i = 0;

	while ((i < datos.nPal) && (pal != datos.pal[i])) {
		i++;
	}

	return i < datos.nPal;
}

// devuelve la suma de los caracteres ASCII que conforman la cadena s
unsigned sumaASCII(const string& s) {
    unsigned suma = 0;

    for (unsigned i = 0; i < s.size(); i++) {
        suma += unsigned(s[i]);
    }

    return suma;
}

/* comprueba si la suma de los caracteres de la palabra pal en ASCII suman el mismo
 * valor que la suma de los caracteres del patron
 */
bool coincideSumaASCII(const string& patron, const string& pal) {
    return sumaASCII(patron) == sumaASCII(pal);
}

// muestra por pantalla las palabras almacenadas en la estructura datos
void escribir(const TDatos& datos) {
	cout << "Las palabras que cumplen la condicion son:\n\n";
	for (unsigned i = 0; i < datos.nPal; i++) {
		cout << datos.pal[i] << " ";
	}
}

int main()
{
	TDatos datos;
	string patron,pal;

	cout << "Introduzca el patron: ";

    cin >> patron;

	cout << "Introduzca el texto (FIN para terminar):\n";

	datos.nPal = 0;

	cin >> pal;

	while (pal != "FIN") {
		if ((coincideSumaASCII(patron,pal)) && (!esta(pal,datos))) {
			datos.pal[datos.nPal] = pal;
			datos.nPal++;
		}
		cin >> pal;
	}

	escribir(datos);

    return 0;
}
