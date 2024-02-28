#include <stdio.h>

int main() {
    int ventas[5][12];
    int totalVentas = 0;

    // Llenar la matriz con los datos de ventas
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 12; j++) {
            printf("Introduce las ventas del departamento %d en el mes %d: ", i+1, j+1);
            scanf("%d", &ventas[i][j]);
            totalVentas += ventas[i][j];
        }
    }

    // Imprimir el total de ventas
    printf("El total de ventas de la fábrica es: %d\n", totalVentas);

    return 0;
}
