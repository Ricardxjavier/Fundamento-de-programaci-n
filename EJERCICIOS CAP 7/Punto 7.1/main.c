#include <stdio.h>
#include <string.h>

void imprimir_caracteres_impares(const char *cadena) {
    int longitud = strlen(cadena);
    for (int i = 0; i < longitud; i += 2) {
        printf("%c ", cadena[i]);
    }
}

int main() {
    const char *mi_cadena = "Hola, mundo!";
    imprimir_caracteres_impares(mi_cadena);
    return 0;
}
