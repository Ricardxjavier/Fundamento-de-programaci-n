#include <stdio.h>

void intercambiarFilas(int matriz[5][5], int fila1, int fila2) {
    int temp;
    for (int i = 0; i < 5; i++) {
        temp = matriz[fila1][i];
        matriz[fila1][i] = matriz[fila2][i];
        matriz[fila2][i] = temp;
    }
}

int main() {
    int matriz[5][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};
    intercambiarFilas(matriz, 0, 4);
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
