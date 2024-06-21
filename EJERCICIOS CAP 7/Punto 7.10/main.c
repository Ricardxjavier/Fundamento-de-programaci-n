#include <stdio.h>
#include <string.h>

void invertirPalabras(char *cadena) {
    int longitud = strlen(cadena);
    int inicio = 0;

    for (int i = 0; i <= longitud; i++) {
        if (cadena[i] == ' ' || cadena[i] == '\0') {
            for (int j = i - 1; j >= inicio; j--) {
                printf("%c", cadena[j]);
            }
            if (i != longitud) {
                printf(" ");
            }
            inicio = i + 1;
        }
    }
}

int main() {
    char entrada[100];
    printf("Ingrese una cadena de caracteres: ");
    scanf("%[^\n]", entrada);

    printf("La cadena con las palabras invertidas es:\n");
    invertirPalabras(entrada);

    return 0;
}
