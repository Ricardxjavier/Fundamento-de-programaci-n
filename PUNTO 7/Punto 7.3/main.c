#include <stdio.h>
#include <string.h>

void completar_con_guiones(char *cadena) {
    int longitud = strlen(cadena);
    if (longitud < 30) {
        for (int i = longitud; i < 30; i++) {
            cadena[i] = '-';
        }
        cadena[30] = '\0'; // Asegura que la cadena termine correctamente
    }
}

int main() {
    char mi_cadena[31] = "Hola, mundo!";
    completar_con_guiones(mi_cadena);
    printf("Cadena completa: %s\n", mi_cadena);
    return 0;
}
