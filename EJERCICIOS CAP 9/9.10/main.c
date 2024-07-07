#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estructura para representar un paciente
typedef struct {
  int clave;
  char nombre[50];
  int edad;
  char sexo;
  int condicion;
  char calle[50];
  int numero;
  char colonia[50];
  char codigo_postal[10];
  char ciudad[50];
  char telefono[15];
} Paciente;

// Función para cargar los datos de los pacientes desde un archivo
Paciente* cargar_pacientes(const char* nombre_archivo, int* num_pacientes) {
  FILE* archivo = fopen(nombre_archivo, "r");
  if (archivo == NULL) {
    printf("Error al abrir el archivo %s\n", nombre_archivo);
    exit(1);
  }

  // Contar la cantidad de pacientes en el archivo
  int contador = 0;
  while (!feof(archivo)) {
    if (fgetc(archivo) == '\n') {
      contador++;
    }
  }
  *num_pacientes = contador;
  rewind(archivo); // Volver al inicio del archivo

  // Asignar memoria para el arreglo de pacientes
  Paciente* pacientes = (Paciente*)malloc(*num_pacientes * sizeof(Paciente));
  if (pacientes == NULL) {
    printf("Error al asignar memoria para los pacientes\n");
    exit(1);
  }

  // Leer los datos de cada paciente
  for (int i = 0; i < *num_pacientes; i++) {
    fscanf(archivo, "%d,%[^,],%d,%c,%d,%[^,],%d,%[^,],%[^,],%[^,],%[^\n]\n",
           &(pacientes[i].clave), pacientes[i].nombre,
           &(pacientes[i].edad), &(pacientes[i].sexo),
           &(pacientes[i].condicion), pacientes[i].calle,
           &(pacientes[i].numero), pacientes[i].colonia,
           pacientes[i].codigo_postal, pacientes[i].ciudad,
           pacientes[i].telefono);
  }

  fclose(archivo);
  return pacientes;
}

// Función para calcular el porcentaje de hombres y mujeres
void calcular_porcentaje_genero(Paciente* pacientes, int num_pacientes) {
  int hombres = 0;
  int mujeres = 0;
  for (int i = 0; i < num_pacientes; i++) {
    if (pacientes[i].sexo == 'M') {
      hombres++;
    } else if (pacientes[i].sexo == 'F') {
      mujeres++;
    }
  }
  float porcentaje_hombres = (float)hombres / num_pacientes * 100;
  float porcentaje_mujeres = (float)mujeres / num_pacientes * 100;
  printf("Porcentaje de hombres: %.2f%%\n", porcentaje_hombres);
  printf("Porcentaje de mujeres: %.2f%%\n", porcentaje_mujeres);
}

// Función para calcular el número de pacientes por categoría de condición
void calcular_pacientes_condicion(Paciente* pacientes, int num_pacientes) {
  int contador[6] = {0}; // Arreglo para contar pacientes por condición (de 1 a 5)
  for (int i = 0; i < num_pacientes; i++) {
    if (pacientes[i].condicion >= 1 && pacientes[i].condicion <= 5) {
      contador[pacientes[i].condicion]++;
    }
  }
  printf("Número de pacientes por condición:\n");
  for (int i = 1; i <= 5; i++) {
    printf("Condición %d: %d\n", i, contador[i]);
  }
}

// Función para calcular el número de pacientes por rango de edad
void calcular_pacientes_edad(Paciente* pacientes, int num_pacientes) {
  int rangos_edad[10] = {0}; // Arreglo para contar pacientes por rango de edad
  for (int i = 0; i < num_pacientes; i++) {
    if (pacientes[i].edad >= 0 && pacientes[i].edad <= 9) {
      rangos_edad[0]++;
    } else if (pacientes[i].edad >= 10 && pacientes[i].edad <= 19) {
      rangos_edad[1]++;
    } else if (pacientes[i].edad >= 20 && pacientes[i].edad <= 29) {
      rangos_edad[2]++;
    } else if (pacientes[i].edad >= 30 && pacientes[i].edad <= 39) {
      rangos_edad[3]++;
    } else if (pacientes[i].edad >= 40 && pacientes[i].edad <= 49) {
      rangos_edad[4]++;
    } else if (pacientes[i].edad >= 50 && pacientes[i].edad <= 59) {
      rangos_edad[5]++;
    } else if (pacientes[i].edad >= 60 && pacientes[i].edad <= 69) {
      rangos_edad[6]++;
    } else if (pacientes[i].edad >= 70 && pacientes[i].edad <= 79) {
      rangos_edad[7]++;
    } else if (pacientes[i].edad >= 80 && pacientes[i].edad <= 89) {
      rangos_edad[8]++;
    } else if (pacientes[i].edad >= 90 && pacientes[i].edad <= 99) {
      rangos_edad[9]++;
    } else if (pacientes[i].edad >= 100) {
      rangos_edad[10]++;
    }
  }
  printf("Número de pacientes por rango de edad:\n");
  printf("0-9: %d\n", rangos_edad[0]);
  printf("10-19: %d\n", rangos_edad[1]);
  printf("20-29: %d\n", rangos_edad[2]);
  printf("30-39: %d\n", rangos_edad[3]);
  printf("40-49: %d\n", rangos_edad[4]);
  printf("50-59: %d\n", rangos_edad[5]);
  printf("60-69: %d\n", rangos_edad[6]);
  printf("70-79: %d\n", rangos_edad[7]);
  printf("80-89: %d\n", rangos_edad[8]);
  printf("90-99: %d\n", rangos_edad[9]);
  printf(">=100: %d\n", rangos_edad[10]);
}

int main() {
  int num_pacientes;
  Paciente* pacientes = cargar_pacientes("pacientes.dat", &num_pacientes);

  calcular_porcentaje_genero(pacientes, num_pacientes);
  calcular_pacientes_condicion(pacientes, num_pacientes);
  calcular_pacientes_edad(pacientes, num_pacientes);

  free(pacientes);
  return 0;
}
