#include <stdio.h>

#define N 8

int tablero[N][N];

// Funci�n para verificar si es seguro colocar una reina en la posici�n (fila, columna)
int esSeguro(int fila, int columna) {
    // Verificar la fila en la direcci�n izquierda
    for (int i = 0; i < columna; i++) {
        if (tablero[fila][i]) {
            return 0;
        }
    }

    // Verificar la diagonal superior izquierda
    for (int i = fila, j = columna; i >= 0 && j >= 0; i--, j--) {
        if (tablero[i][j]) {
            return 0;
        }
    }

    // Verificar la diagonal inferior izquierda
    for (int i = fila, j = columna; i < N && j >= 0; i++, j--) {
        if (tablero[i][j]) {
            return 0;
        }
    }

    return 1;
}

// Funci�n recursiva para resolver el problema de las ocho reinas
int resolverReinas(int columna) {
    if (columna >= N) {
        return 1; // Todas las reinas est�n colocadas
    }

    for (int i = 0; i < N; i++) {
        if (esSeguro(i, columna)) {
            tablero[i][columna] = 1;

            if (resolverReinas(columna + 1)) {
                return 1;
            }

            tablero[i][columna] = 0; // Retroceder si no se encuentra una soluci�n
        }
    }

    return 0; // No se encontr� una soluci�n
}

int main() {
    if (resolverReinas(0)) {
        printf("Soluci�n encontrada:\n");
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                printf("%d ", tablero[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("No se encontr� una soluci�n.\n");
    }

    return 0;
}
