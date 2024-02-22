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
    int i;
    for (i = 1; i <= 4; i++) {
        printf("\n\nEl resultado de la función f1 es: %d", suma(i));
        printf("\nEl resultado de la función f2 es: %d", suma(i));
        printf("\nEl resultado de la función f3 es: %d", suma(i));
        printf("\nEl resultado de la función f4 es: %d", suma(i));
    }
    return 0;
}
