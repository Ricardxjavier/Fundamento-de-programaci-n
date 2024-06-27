#include <stdio.h>
#include <string.h>

// Definición de la estructura del alumno
struct Alumno {
  int matricula;
  char nombre[50];
  struct {
    char calle[50];
    int codigo_postal;
    char colonia[50];
    char ciudad[50];
    char telefono[20];
  } domicilio;
  char nivel_estudios[20];
  int grado;
  char salon[10];
  struct {
    char materia[50];
    float promedio;
  } calificaciones[7];
};

// Función para calcular el promedio general de un alumno
float calcular_promedio(struct Alumno alumno) {
  float suma_promedios = 0;
  for (int i = 0; i < 7; i++) {
    suma_promedios += alumno.calificaciones[i].promedio;
  }
  return suma_promedios / 7;
}

// Función para listar la matrícula, el nombre y el promedio de todos los alumnos
void listar_alumnos(struct Alumno escuela[], int n, char nivel[], int grado, char salon[]) {
  for (int i = 0; i < n; i++) {
    if (strcmp(escuela[i].nivel_estudios, nivel) == 0 && escuela[i].grado == grado && strcmp(escuela[i].salon, salon) == 0) {
      printf("Matrícula: %d\n", escuela[i].matricula);
      printf("Nombre: %s\n", escuela[i].nombre);
      printf("Promedio: %.2f\n\n", calcular_promedio(escuela[i]));
    }
  }
}

// Función para encontrar al alumno con el mayor promedio
struct Alumno encontrar_mejor_alumno(struct Alumno escuela[], int n, char nivel[], int grado, char salon[]) {
  struct Alumno mejor_alumno = {0};
  float mejor_promedio = 0;
  for (int i = 0; i < n; i++) {
    if (strcmp(escuela[i].nivel_estudios, nivel) == 0 && escuela[i].grado == grado && strcmp(escuela[i].salon, salon) == 0) {
      float promedio_actual = calcular_promedio(escuela[i]);
      if (promedio_actual > mejor_promedio) {
        mejor_promedio = promedio_actual;
        mejor_alumno = escuela[i];
      }
    }
  }
  return mejor_alumno;
}

int main() {
  // Datos de prueba
  struct Alumno escuela[1000];
  int n = 10; // Número de alumnos
  //... (Inicializar los datos de los alumnos aquí)

  // a) Calcular el promedio general de un alumno
  int matricula = 12345; // Matrícula del alumno
  struct Alumno alumno = escuela[0]; // Supongamos que el alumno está en el índice 0
  float promedio = calcular_promedio(alumno);
  printf("El promedio general del alumno %d es %.2f\n", matricula, promedio);

  // b) Listar la matrícula, el nombre y el promedio de todos los alumnos
  char nivel[] = "Primaria";
  int grado = 1; // Primer grado
  char salon[] = "A"; // Salón A
  listar_alumnos(escuela, n, nivel, grado, salon);

  // c) Encontrar al alumno con el mayor promedio
  struct Alumno mejor_alumno = encontrar_mejor_alumno(escuela, n, nivel, grado, salon);
  printf("El alumno con el mayor promedio es:\n");
  printf("Matrícula: %d\n", mejor_alumno.matricula);
  printf("Nombre: %s\n", mejor_alumno.nombre);
  printf("Promedio: %.2f\n", calcular_promedio(mejor_alumno));

  return 0;
}
