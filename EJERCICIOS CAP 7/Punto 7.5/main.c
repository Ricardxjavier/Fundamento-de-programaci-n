#include <stdio.h>
#include <ctype.h>

void convertirMayusculas(char *cadena) {
    int i = 0;
    int longitud = strlen(cadena);

    // Convierte el primer carácter a mayúsculas
    cadena[0] = toupper(cadena[0]);

    // Recorre la cadena para convertir los siguientes caracteres
    for (i = 1; i < longitud; i++) {
        if (cadena[i - 1] == ' ') {
            cadena[i] = toupper(cadena[i]);
        }
    }
}

int main() {
    char texto[] = "hola mundo, este es un ejemplo";

    // Llama a la función para convertir las palabras a mayúsculas
    convertirMayusculas(texto);

    // Imprime el resultado
    printf("Texto convertido: %s\n", texto);

    return 0;
}
