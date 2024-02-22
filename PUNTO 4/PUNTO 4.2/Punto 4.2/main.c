#include <stdio.h>

int main() {
    int NUM, i;
    double resultado = 1.0;

    printf("Introduce un número entero: ");
    scanf("%d", &NUM);

    for(i = 2; i <= NUM; i++) {
        resultado *= (double)1/i;
    }

    printf("El resultado de la serie es: %lf\n", resultado);

    return 0;
}
