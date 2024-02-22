#include <stdio.h>

void trueque(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int suma(int x) {
    return (x + x);
}

int main() {
    int x, y, z;

    // Asigna valores a las variables
    x = 1;
    y = 2;
    z = 3;

    // Llamadas a funciones
    trueque(&x, &y);  // Correcto
    z = suma(x);  // Correcto

    printf("x = %d, y = %d, z = %d\n", x, y, z);

    return 0;
}
