#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Función para intercambiar dos cadenas.
void intercambiarCadenas(char **cadena1, char **cadena2) {
  char *temp = *cadena1;
  *cadena1 = *cadena2;
  *cadena2 = temp;
}

// Función para invertir el orden de las cadenas en un archivo.
void invertirCadenas(const char *nombreArchivoEntrada, const char *nombreArchivoSalida) {
  FILE *archivoEntrada = fopen(nombreArchivoEntrada, "r");
  if (archivoEntrada == NULL) {
    perror("Error al abrir el archivo de entrada");
    return;
  }

  FILE *archivoSalida = fopen(nombreArchivoSalida, "w");
  if (archivoSalida == NULL) {
    perror("Error al abrir el archivo de salida");
    fclose(archivoEntrada);
    return;
  }

  // Leer las cadenas del archivo de entrada y guardarlas en un array.
  char **cadenas = NULL;
  int contadorCadenas = 0;
  char buffer[1024];
  while (fgets(buffer, sizeof(buffer), archivoEntrada) != NULL) {
    // Eliminar el salto de línea del buffer.
    buffer[strcspn(buffer, "\n")] = 0;

    // Realocar memoria para el array de cadenas.
    cadenas = realloc(cadenas, (contadorCadenas + 1) * sizeof(char *));
    if (cadenas == NULL) {
      perror("Error al realocar memoria");
      fclose(archivoEntrada);
      fclose(archivoSalida);
      return;
    }

    // Copiar la cadena al array.
    cadenas[contadorCadenas] = strdup(buffer);
    if (cadenas[contadorCadenas] == NULL) {
      perror("Error al duplicar la cadena");
      fclose(archivoEntrada);
      fclose(archivoSalida);
      free(cadenas);
      return;
    }

    contadorCadenas++;
  }

  // Invertir el orden de las cadenas.
  for (int i = 0; i < contadorCadenas / 2; i++) {
    intercambiarCadenas(&cadenas[i], &cadenas[contadorCadenas - i - 1]);
  }

  // Escribir las cadenas invertidas en el archivo de salida.
  for (int i = 0; i < contadorCadenas; i++) {
    fprintf(archivoSalida, "%s\n", cadenas[i]);
    free(cadenas[i]);
  }
  free(cadenas);

  fclose(archivoEntrada);
  fclose(archivoSalida);
}

int main() {
  // Nombres de los archivos de entrada y salida.
  const char *nombreArchivoEntrada = "entrada.txt";
  const char *nombreArchivoSalida = "salida.txt";

  // Invierte el orden de las cadenas en el archivo.
  invertirCadenas(nombreArchivoEntrada, nombreArchivoSalida);

  printf("Las cadenas se han invertido correctamente en el archivo %s.\n", nombreArchivoSalida);

  return 0;
}
