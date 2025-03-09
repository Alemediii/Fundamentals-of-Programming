#include <iostream>
using namespace std;

const int TAM = 5;

typedef char TMatriz[TAM][TAM];

void leer(TMatriz& m, int& numGen) {
    cout << "Introduzca numero de generaciones: ";
    cin >> numGen;

    cout << "Introduzca generacion inicial:\n";

    for (int fi = 0; fi < TAM; fi++) {
        for (int co = 0; co < TAM; co++) {
            cin >> m[fi][co];
        }
    }

}

void mostrar(const TMatriz& m, int gen) {
    if (gen == 1) {
        cout << "Generacion " << gen << " (inicial):\n";
    } else {
        cout << "Generacion " << gen << ":\n";
    }


    for (int fi = 0; fi < TAM; fi++) {
        for (int co = 0; co < TAM; co++) {
            cout << m[fi][co];
        }
        cout << endl;
    }

}

void copiar(const TMatriz& origen, TMatriz& destino) {
    for (int fi = 0; fi < TAM; fi++) {
        for (int co = 0; co < TAM; co++) {
             destino[fi][co] = origen[fi][co];
        }
    }

}

bool celdaValida(int fi, int co) {
    return fi >= 0 && fi < TAM && co >= 0 && co < TAM;
}

int calcularVecinosVivos(const TMatriz& m, int fi, int co) {
    int res = 0;

    for (int i = fi-1; i <= fi+1; i++) {
        for (int j = co-1; j <= co+1; j++) {
            if (!(i == fi && j == co) && celdaValida(i,j) && m[i][j] == 'x') {
                res++;
            }
        }
    }

    return res;
}

void generar(const TMatriz& a, TMatriz& b) {
    int vecinosVivos;
    for (int fi = 0; fi < TAM; fi++) {
        for (int co = 0; co < TAM; co++) {
             vecinosVivos = calcularVecinosVivos(a,fi,co);
             if (a[fi][co] == 'o') { // vacia
                if (vecinosVivos == 3) {
                    b[fi][co] = 'x'; // nace ser vivo
                } else {
                    b[fi][co] = 'o'; // sigue vacia
                }
             } else { // hay ser vivo
                if (vecinosVivos == 2 || vecinosVivos == 3) {
                    b[fi][co] = 'x'; // se mantiene ser vivo
                } else {
                    b[fi][co] = 'o'; // muere
                }
             }
        }
    }

}

int main() {
    TMatriz a,b;
    int numGen;

    leer(a,numGen);

    mostrar(a,1);

    for (int i = 2; i <= numGen; i++) {
        generar(a,b);
        mostrar(b,i);
        copiar(b,a);
    }


    return 0;
}
