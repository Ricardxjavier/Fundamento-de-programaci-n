#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contarMayusculas(char *cadena) {
    int mayusculas = 0;
    for (int i = 0; cadena[i] != '\0'; i++) {
        if (isupper(cadena[i])) {
            mayusculas++;
        }
    }
    return mayusculas;
}

int main() {
    char cadenas[10][100];
    int num_cadenas;

    printf("Ingrese el n�mero de cadenas (m�ximo 10): ");
    scanf("%d", &num_cadenas);

    printf("Ingrese las cadenas:\n");
    for (int i = 0; i < num_cadenas; i++) {
        scanf("%s", cadenas[i]);
    }

    int max_mayusculas = 0;
    char cadena_max_mayusculas[100];

    for (int i = 0; i < num_cadenas; i++) {
        int num_mayusculas = contarMayusculas(cadenas[i]);
        if (num_mayusculas > max_mayusculas) {
            max_mayusculas = num_mayusculas;
            strcpy(cadena_max_mayusculas, cadenas[i]);
        }
    }

    printf("La cadena con m�s letras may�sculas es: %s\n", cadena_max_mayusculas);

    return 0;
}
