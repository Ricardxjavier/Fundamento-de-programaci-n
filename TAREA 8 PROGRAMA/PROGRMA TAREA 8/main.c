#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definimos la estructura dinámica para almacenar los datos
typedef struct {
    char nombre[50];
    int edad;
} Persona;

// Función para grabar un dato en un archivo
void grabarDato(Persona* p, FILE* archivo) {
    fwrite(p, sizeof(Persona), 1, archivo);
}

// Función para leer un archivo y mostrar los datos
void leerArchivo(FILE* archivo) {
    Persona* p = (Persona*)malloc(sizeof(Persona));
    while (fread(p, sizeof(Persona), 1, archivo) == 1) {
        printf("Nombre: %s, Edad: %d\n", p->nombre, p->edad);
    }
    free(p);
}

int main() {
    int opcion;
    FILE* archivo;
    Persona* p;

    // Abrimos el archivo en modo de escritura y lectura
    archivo = fopen("datos.bin", "wb+");
    if (archivo == NULL) {
        printf("Error al abrir el archivo\n");
        return 1;
    }

    do {
        printf("Menu:\n");
        printf("0. Salir\n");
        printf("1. Grabar dato\n");
        printf("2. Leer archivo\n");
        printf("Ingrese una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 0:
                // Salir del programa
                break;
            case 1:
                // Grabar un dato
                p = (Persona*)malloc(sizeof(Persona));
                printf("Ingrese nombre: ");
                scanf("%49s", p->nombre);
                printf("Ingrese edad: ");
                scanf("%d", &p->edad);
                grabarDato(p, archivo);
                free(p);
                printf("Dato grabado correctamente\n");
                printf("¿Desea grabar otro dato? (s/n): ");
                char respuesta;
                scanf(" %c", &respuesta);
                if (respuesta == 's') {
                    continue;
                }
                break;
            case 2:
                // Leer archivo
                rewind(archivo); // Volvemos al principio del archivo
                leerArchivo(archivo);
                break;
            default:
                printf("Opción inválida\n");
        }
    } while (opcion != 0);

    fclose(archivo);
    return 0;
}
