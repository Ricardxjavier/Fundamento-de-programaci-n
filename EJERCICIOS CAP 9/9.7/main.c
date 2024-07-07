#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estructura para almacenar la informaci�n de un alumno
typedef struct {
    int matricula;
    char nombre[50];
    int carrera;
    float promedio;
} Alumno;

// Funci�n para comparar dos alumnos por matr�cula
int compararAlumnos(const void *a, const void *b) {
    Alumno *alumnoA = (Alumno *)a;
    Alumno *alumnoB = (Alumno *)b;
    return alumnoA->matricula - alumnoB->matricula;
}

int main() {
    // Abrir el archivo de entrada
    FILE *archivoEntrada = fopen("ad5.dat", "rb");
    if (archivoEntrada == NULL) {
        printf("Error al abrir el archivo de entrada.\n");
        return 1;
    }

    // Obtener el tama�o del archivo
    fseek(archivoEntrada, 0, SEEK_END);
    long tamanoArchivo = ftell(archivoEntrada);
    rewind(archivoEntrada);

    // Calcular el n�mero de registros
    int numRegistros = tamanoArchivo / sizeof(Alumno);

    // Crear un arreglo para almacenar los alumnos
    Alumno *alumnos = (Alumno *)malloc(numRegistros * sizeof(Alumno));
    if (alumnos == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }

    // Leer los datos del archivo
    for (int i = 0; i < numRegistros; i++) {
        fread(&alumnos[i], sizeof(Alumno), 1, archivoEntrada);
    }

    // Ordenar los alumnos por matr�cula
    qsort(alumnos, numRegistros, sizeof(Alumno), compararAlumnos);

    // Eliminar los registros duplicados
    int i = 0;
    int j = 1;
    while (j < numRegistros) {
        // Si las matr�culas son iguales, eliminar el registro duplicado
        if (alumnos[i].matricula == alumnos[j].matricula) {
            j++;
        } else {
            // Copiar el registro �nico al siguiente �ndice
            i++;
            alumnos[i] = alumnos[j];
            j++;
        }
    }
    // Actualizar el n�mero de registros
    numRegistros = i + 1;

    // Abrir el archivo de salida
    FILE *archivoSalida = fopen("alumnos_sin_duplicados.dat", "wb");
    if (archivoSalida == NULL) {
        printf("Error al abrir el archivo de salida.\n");
        return 1;
    }

    // Escribir los datos al archivo de salida
    for (int i = 0; i < numRegistros; i++) {
        fwrite(&alumnos[i], sizeof(Alumno), 1, archivoSalida);
    }

    // Cerrar los archivos
    fclose(archivoEntrada);
    fclose(archivoSalida);

    // Liberar la memoria
    free(alumnos);

    printf("Archivo de salida generado correctamente.\n");

    return 0;
}
