#include <stdio.h>

// Definir las dimensiones de las matrices
#define M 3
#define N 2
#define P 4

// Función para multiplicar las matrices A y B y almacenar el resultado en C
void multiplicarMatrices(int A[][N], int B[][P], int C[][P]) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < P; j++) {
            C[i][j] = 0;
            for (int k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Función para imprimir una matriz
void imprimirMatriz(int matriz[][P]) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < P; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[M][N] = {{1, 2}, {3, 4}, {5, 6}};
    int B[N][P] = {{7, 8, 9, 10}, {11, 12, 13, 14}};
    int C[M][P];

    multiplicarMatrices(A, B, C);

    printf("Matriz A:\n");
    imprimirMatriz(A);

    printf("\nMatriz B:\n");
    imprimirMatriz(B);

    printf("\nMatriz C (resultado de la multiplicación):\n");
    imprimirMatriz(C);

    return 0;
}
