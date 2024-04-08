#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estructura para la información de un estudiante
typedef struct {
    int id;
    char nombre[100];
    float promedio;
} Estudiante;

// Función para agregar un nuevo estudiante
void agregarEstudiante(Estudiante *estudiantes, int *total, int id, const char *nombre, float promedio) {
    estudiantes[*total].id = id;
    strcpy(estudiantes[*total].nombre, nombre);
    estudiantes[*total].promedio = promedio;
    (*total)++;
}

// Función para imprimir la información de todos los estudiantes
void imprimirEstudiantes(Estudiante *estudiantes, int total) {
    for (int i = 0; i < total; i++) {
        printf("ID: %d\nNombre: %s\nPromedio: %.2f\n\n", estudiantes[i].id, estudiantes[i].nombre, estudiantes[i].promedio);
    }
}

int main() {
    Estudiante *estudiantes = malloc(10 * sizeof(Estudiante)); // Asumiendo que habrá un máximo de 10 estudiantes
    int totalEstudiantes = 0;

    // Agregar estudiantes
    agregarEstudiante(estudiantes, &totalEstudiantes, 1, "Juan Perez", 8.5);
    agregarEstudiante(estudiantes, &totalEstudiantes, 2, "Maria Lopez", 9.1);

    // Imprimir la información de todos los estudiantes
    imprimirEstudiantes(estudiantes, totalEstudiantes);

    // Liberar la memoria asignada
    free(estudiantes);

    return 0;
}
