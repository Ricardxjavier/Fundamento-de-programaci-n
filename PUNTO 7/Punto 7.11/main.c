#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contarVocales(char *cadena) {
    int vocales = 0;
    for (int i = 0; cadena[i] != '\0'; i++) {
        char c = tolower(cadena[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vocales++;
        }
    }
    return vocales;
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

    int max_vocales = 0;
    char cadena_max_vocales[100];

    for (int i = 0; i < num_cadenas; i++) {
        int num_vocales = contarVocales(cadenas[i]);
        if (num_vocales > max_vocales) {
            max_vocales = num_vocales;
            strcpy(cadena_max_vocales, cadenas[i]);
        }
    }

    printf("La cadena con más vocales es: %s\n", cadena_max_vocales);

    return 0;
}
