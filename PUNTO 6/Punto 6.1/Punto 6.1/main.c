#include <stdio.h>

void llenarMatriz(int n) {
    int matriz[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j || i == n - j - 1) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Introduce el tamaño de la matriz: ");
    scanf("%d", &n);
    llenarMatriz(n);
    return 0;
}
