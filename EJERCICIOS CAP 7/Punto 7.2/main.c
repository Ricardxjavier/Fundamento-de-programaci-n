#include <stdio.h>
#include <string.h>

void extraer_digitos_pares(const char *cadena) {
    int longitud = strlen(cadena);
    printf("Digitos en posiciones pares: ");
    for (int i = 0; i < longitud; i += 2) {
        if (cadena[i] >= '0' && cadena[i] <= '9') {
            printf("%c ", cadena[i]);
        }
    }
    printf("\n");
}

int main() {
    const char *mi_cadena = "H0la_Mundo";
    extraer_digitos_pares(mi_cadena);
    return 0;
}
