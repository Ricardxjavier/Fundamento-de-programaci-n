#include <stdio.h>

// Definir las dimensiones de las matrices
#define M 3
#define N 4

// Función para sumar dos matrices
void sumarMatrices(int A[M][N], int B[N][M], int C[M][N]) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            C[i][j] = A[i][j] + B[j][i];
        }
    }
}

// Función para imprimir una matriz
void imprimirMatriz(int matriz[M][N]) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[M][N] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int B[N][M] = {{2, 4, 6, 8}, {1, 3, 5, 7}, {10, 20, 30, 40}, {15, 25, 35, 45}};
    int C[M][N];

    // Sumar las matrices A y B
    sumarMatrices(A, B, C);

    printf("Matriz A:\n");
    imprimirMatriz(A);

    printf("\nMatriz B:\n");
    imprimirMatriz(B);

    printf("\nMatriz C (suma de A y transpuesta de B):\n");
    imprimirMatriz(C);

    return 0;
}
