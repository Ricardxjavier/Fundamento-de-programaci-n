#include <stdio.h>

int main() {
    int S;  // Número de sonidos emitidos por el grillo en un minuto
    float FA;  // Temperatura en grados Fahrenheit

    printf("Introduce el número de sonidos emitidos por el grillo en un minuto: ");
    scanf("%d", &S);

    // Calcular la temperatura en grados Fahrenheit
    FA = S / 4.0 + 40;

    printf("La temperatura es %.2f grados Fahrenheit.\n", FA);

    return 0;
}
