#include <stdio.h>

void loop(char c[3][3]);
void intro_primera(char c[3][3]);
void tablero(char c[3][3]);
void turno(char c[3][3], char jugador);
int ganador(char c[3][3]);

int main() {
    char c[3][3];
    loop(c);
    return 0;
}

void loop(char c[3][3]) {
    intro_primera(c);
    char jugador = 'X';
    int ganado = 0;

    while (!ganado) {
        tablero(c);
        turno(c, jugador);
        ganado = ganador(c);
        if (ganado) {
            tablero(c);
            printf("El jugador %c ha ganado!\n", jugador);
        } else {
            jugador = (jugador == 'X')? 'O' : 'X';
        }
    }
}

void intro_primera(char c[3][3]) {
    int i, j;
    char aux = '1';

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = aux++;
        }
    }
}

void tablero(char c[3][3]) {
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (j < 2) {
                printf(" %c |", c[i][j]);
            } else {
                printf(" %c ", c[i][j]);
            }
        }
        printf("\n");
        if (i < 2) {
            printf("-----------\n");
        }
    }
    printf("\n");
}

void turno(char c[3][3], char jugador) {
    int fila, columna;
    printf("Turno del jugador %c. Introduce la fila y columna (1-3): ", jugador);
    scanf("%d %d", &fila, &columna);
    fila--; columna--; // ajustar indices para que sean 0-based
    if (c[fila][columna]!= 'X' && c[fila][columna]!= 'O') {
        c[fila][columna] = jugador;
    } else {
        printf("Casilla ocupada. Intente de nuevo.\n");
        turno(c, jugador);
    }
}

int ganador(char c[3][3]) {
    int i;

    // filas
    for (i = 0; i < 3; i++) {
        if (c[i][0] == c[i][1] && c[i][1] == c[i][2]) {
            return 1;
        }
    }

    // columnas
    for (i = 0; i < 3; i++) {
        if (c[0][i] == c[1][i] && c[1][i] == c[2][i]) {
            return 1;
        }
    }

    // diagonales
    if (c[0][0] == c[1][1] && c[1][1] == c[2][2]) {
        return 1;
    }
    if (c[0][2] == c[1][1] && c[1][1] == c[2][0]) {
        return 1;
    }

    return 0;
}
