#include <stdio.h>

// Función para recorrer la matriz en espiral
void recorrerMatriz(int matriz[][4], int filas, int columnas) {
    int inicioFila = 0, inicioColumna = 0;
    int finFila = filas - 1, finColumna = columnas - 1;

    while (inicioFila <= finFila && inicioColumna <= finColumna) {
        // Imprimir la primera fila
        for (int i = inicioColumna; i <= finColumna; ++i)
            printf("%d ", matriz[inicioFila][i]);
        inicioFila++;

        // Imprimir la última columna
        for (int i = inicioFila; i <= finFila; ++i)
            printf("%d ", matriz[i][finColumna]);
        finColumna--;

        // Imprimir la última fila
        if (inicioFila <= finFila) {
            for (int i = finColumna; i >= inicioColumna; --i)
                printf("%d ", matriz[finFila][i]);
            finFila--;
        }

        // Imprimir la primera columna
        if (inicioColumna <= finColumna) {
            for (int i = finFila; i >= inicioFila; --i)
                printf("%d ", matriz[i][inicioColumna]);
            inicioColumna++;
        }
    }
}

int main() {
    int matriz[][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int filas = 4, columnas = 4;

    printf("Recorrido en espiral de la matriz:\n");
    recorrerMatriz(matriz, filas, columnas);

    return 0;
}
