#include <stdio.h>
#define N 8

int solveKTUtil(int x, int y, int movei, int sol[N][N], int xMove[], int yMove[]);

/* Funci�n para verificar si (x, y) est� dentro del tablero N*N */
int isSafe(int x, int y, int sol[N][N]) {
    return (x >= 0 && x < N && y >= 0 && y < N && sol[x][y] == -1);
}

/* Imprime la soluci�n */
void printSolution(int sol[N][N]) {
    for (int x = 0; x < N; x++) {
        for (int y = 0; y < N; y++) {
            printf("%2d ", sol[x][y]);
        }
        printf("\n");
    }
}

/* Resuelve el problema del recorrido del caballo utilizando backtracking */
int solveKT() {
    int sol[N][N];
    for (int x = 0; x < N; x++) {
        for (int y = 0; y < N; y++) {
            sol[x][y] = -1;
        }
    }

    // Movimientos posibles del caballo
    int xMove[8] = {2, 1, -1, -2, -2, -1, 1, 2};
    int yMove[8] = {1, 2, 2, 1, -1, -2, -2, -1};

    // El caballo comienza en la posici�n (0, 0)
    sol[0][0] = 0;

    // Comienza el backtracking
    if (solveKTUtil(0, 0, 1, sol, xMove, yMove) == 0) {
        printf("No hay soluci�n\n");
        return 0;
    } else {
        printSolution(sol);
    }
    return 1;
}

/* Funci�n auxiliar para resolver el problema del recorrido del caballo */
int solveKTUtil(int x, int y, int movei, int sol[N][N], int xMove[], int yMove[]) {
    int k, next_x, next_y;
    if (movei == N * N) {
        return 1;
    }

    for (k = 0; k < 8; k++) {
        next_x = x + xMove[k];
        next_y = y + yMove[k];
        if (isSafe(next_x, next_y, sol)) {
            sol[next_x][next_y] = movei;
            if (solveKTUtil(next_x, next_y, movei + 1, sol, xMove, yMove) == 1) {
                return 1;
            } else {
                sol[next_x][next_y] = -1; // retroceder
            }
        }
    }
    return 0;
}

int main() {
    solveKT();
    return 0;
}
