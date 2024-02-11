#include <stdio.h>

int main() {
    float n1, n2, suma, resta, multiplicacion;

    printf("Introduce dos números reales: ");
    scanf("%f %f", &n1, &n2);

    suma = n1 + n2;
    resta = n1 - n2;
    multiplicacion = n1 * n2;

    printf("Suma: %.2f\n", suma);
    printf("Resta: %.2f\n", resta);
    printf("Multiplicación: %.2f\n", multiplicacion);

    return 0;
}
