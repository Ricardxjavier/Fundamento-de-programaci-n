#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contarPalabras(char *cadena) {
    int palabras = 0;
    int longitud = strlen(cadena);

    for (int i = 0; i < longitud; i++) {
        if (isalpha(cadena[i])) {
            while (isalpha(cadena[i])) {
                i++;
            }
            palabras++;
        }
    }

    return palabras;
}

int main() {
    char cadenas[10][100];
    int num_cadenas;

    printf("Ingrese el número de cadenas (máximo 10): ");
    scanf("%d", &num_cadenas);

    printf("Ingrese las cadenas:\n");
    for (int i = 0; i < num_cadenas; i++) {
        scanf("%s", cadenas[i]);
    }

    printf("Número de palabras en cada cadena:\n");
    for (int i = 0; i < num_cadenas; i++) {
        printf("Cadena %d: %d palabras\n", i + 1, contarPalabras(cadenas[i]));
    }

    return 0;
}
