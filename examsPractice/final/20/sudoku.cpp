#include <iostream>
#include <array>
using namespace std;

const int TAM_REGION = 3;
const int TAM = TAM_REGION * TAM_REGION;

typedef array<int, TAM> TFila;
typedef array<TFila, TAM> TMatriz;

typedef array<bool, TAM + 1> TAparecidos; // The first slot (0) is unused

bool checkNum(TAparecidos& numAparecidos, int num) {
    bool valida = true;
    if ((num >= 1 && num <= TAM) && !numAparecidos[num]) {
        numAparecidos[num] = true;
    } else if (num != 0) {
        valida = false;
    }
    return valida;
}

bool filaValida(const TMatriz& tablero, int fi) {
    TAparecidos numAparecidos = {}; // All slots set to false
    bool valida = true;
    for (int co = 0; co < int(tablero[fi].size()) && valida; ++co) {
        valida = checkNum(numAparecidos, tablero[fi][co]);
    }
    return valida;
}

bool filasValidas(const TMatriz& tablero) {
    bool valida = true;
    for (int fi = 0; fi < int(tablero.size()) && valida; ++fi) {
        valida = filaValida(tablero, fi);
    }
    return valida;
}

bool columnaValida(const TMatriz& tablero, int co) {
    TAparecidos numAparecidos = {}; // All slots set to false
    bool valida = true;
    for (int fi = 0; fi < int(tablero.size()) && valida; ++fi) {
        valida = checkNum(numAparecidos, tablero[fi][co]);
    }
    return valida;
}

bool columnasValidas(const TMatriz& tablero) {
    bool valida = true;
    for (int co = 0; co < int(tablero[0].size()) && valida; ++co) {
        valida = columnaValida(tablero, co);
    }
    return valida;
}

bool regionValida(const TMatriz& tablero, int fiSupReg, int coIzqReg) {
    TAparecidos numAparecidos = {}; // All slots set to false
    bool valida = true;
    for (int fi = fiSupReg; fi < fiSupReg + TAM_REGION && valida; ++fi) {
        for (int co = coIzqReg; co < coIzqReg + TAM_REGION && valida; ++co) {
            valida = checkNum(numAparecidos, tablero[fi][co]);
        }
    }
    return valida;
}

bool regionesValidas(const TMatriz& tablero) {
    bool valida = true;
    for (int fi = 0; fi < int(tablero.size()) && valida; fi += TAM_REGION) {
        for (int co = 0; co < int(tablero[fi].size()) && valida; co += TAM_REGION) {
            valida = regionValida(tablero, fi, co);
        }
    }
    return valida;
}

bool tableroValido(const TMatriz& tablero) {
    return (filasValidas(tablero) && columnasValidas(tablero) && regionesValidas(tablero));
}

int main() {
    TMatriz tablero1 = {{
        {{5, 3, 1, 0, 7, 0, 1, 0, 2}},
        {{6, 0, 0, 1, 9, 5, 0, 4, 0}},
        {{0, 9, 8, 0, 0, 0, 5, 6, 0}},
        {{8, 0, 0, 0, 6, 0, 0, 0, 3}},
        {{4, 0, 0, 8, 0, 3, 0, 0, 1}},
        {{7, 0, 0, 0, 2, 0, 0, 0, 6}},
        {{0, 6, 0, 0, 0, 0, 2, 8, 0}},
        {{0, 0, 0, 4, 1, 9, 0, 0, 5}},
        {{0, 0, 0, 0, 8, 0, 0, 7, 9}}
    }};

    // ... Define tablero2, tablero3, tablero4 similarly ...

    if (tableroValido(tablero1)) {
        cout << "El tablero1 es un sudoku VALIDO" << endl;
    } else {
        cout << "El tablero1 es un sudoku NO VALIDO" << endl;
    }

    // ... Check for the validity of other predefined Sudoku grids ...

    return 0;
}
