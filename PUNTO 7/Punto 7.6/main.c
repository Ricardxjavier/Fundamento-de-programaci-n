#include <stdio.h>
#include <string.h>

#define MAX_CADENAS 10
#define LONGITUD_MAXIMA 100

int main() {
    char cadenas[MAX_CADENAS][LONGITUD_MAXIMA];
    int num_cadenas;

    printf("Ingrese el número de cadenas (máximo %d): ", MAX_CADENAS);
    scanf("%d", &num_cadenas);

    printf("Ingrese las cadenas:\n");
    for (int i = 0; i < num_cadenas; i++) {
        scanf("%s", cadenas[i]);
    }

    int longitud_maxima = 0;
    char cadena_mas_larga[LONGITUD_MAXIMA];

    for (int i = 0; i < num_cadenas; i++) {
        if (strlen(cadenas[i]) > longitud_maxima) {
            longitud_maxima = strlen(cadenas[i]);
            strcpy(cadena_mas_larga, cadenas[i]);
        }
    }

    printf("La cadena más larga es: %s\n", cadena_mas_larga);

    return 0;
}
