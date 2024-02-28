#include <stdio.h>

int esCuadradoMagico(int matriz[3][3], int n) {
    int sumaDiagonal1 = 0, sumaDiagonal2 = 0;
    for (int i = 0; i < n; i++) {
        sumaDiagonal1 += matriz[i][i];
        sumaDiagonal2 += matriz[i][n-i-1];
    }
    if (sumaDiagonal1 != sumaDiagonal2) return 0;

    for (int i = 0; i < n; i++) {
        int sumaFila = 0, sumaColumna = 0;
        for (int j = 0; j < n; j++) {
            sumaFila += matriz[i][j];
            sumaColumna += matriz[j][i];
        }
        if (sumaFila != sumaDiagonal1 || sumaColumna != sumaDiagonal1) return 0;
    }
    return 1;
}

int main() {
    int matriz[3][3] = {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}};
    if (esCuadradoMagico(matriz, 3)) {
        printf("La matriz es un cuadrado mágico.\n");
    } else {
        printf("La matriz no es un cuadrado mágico.\n");
    }
    return 0;
}
