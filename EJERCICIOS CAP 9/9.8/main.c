#include <stdio.h>
#include <stdlib.h>

// Estructura para almacenar la información de un alumno
typedef struct {
  int matricula;
  float calificacion1;
  float calificacion2;
  float calificacion3;
} Alumno;

// Función para comparar dos alumnos por su matrícula
int comparar_alumnos(const void *a, const void *b) {
  Alumno *alumno1 = (Alumno *)a;
  Alumno *alumno2 = (Alumno *)b;
  return alumno1->matricula - alumno2->matricula;
}

int main() {
  // Abrir el archivo de entrada
  FILE *archivo_entrada = fopen("arc.dat", "r");
  if (archivo_entrada == NULL) {
    printf("Error al abrir el archivo de entrada.\n");
    return 1;
  }

  // Abrir el archivo de salida
  FILE *archivo_salida = fopen("arc1.dat", "w");
  if (archivo_salida == NULL) {
    printf("Error al abrir el archivo de salida.\n");
    fclose(archivo_entrada);
    return 1;
  }

  // Leer los datos del archivo de entrada
  Alumno alumnos[100]; // Arreglo para almacenar la información de los alumnos
  int numero_alumnos = 0;
  while (fscanf(archivo_entrada, "%d %f %f %f", &alumnos[numero_alumnos].matricula, &alumnos[numero_alumnos].calificacion1, &alumnos[numero_alumnos].calificacion2, &alumnos[numero_alumnos].calificacion3) == 4) {
    numero_alumnos++;
  }

  // Ordenar los alumnos por su matrícula
  qsort(alumnos, numero_alumnos, sizeof(Alumno), comparar_alumnos);

  // Escribir los datos ordenados en el archivo de salida
  for (int i = 0; i < numero_alumnos; i++) {
    fprintf(archivo_salida, "%d %f %f %f\n", alumnos[i].matricula, alumnos[i].calificacion1, alumnos[i].calificacion2, alumnos[i].calificacion3);
  }

  // Cerrar los archivos
  fclose(archivo_entrada);
  fclose(archivo_salida);

  printf("Archivo ordenado correctamente.\n");

  return 0;
}
