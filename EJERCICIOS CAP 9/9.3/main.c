#include <stdio.h>
#include <stdlib.h>

int main() {
  // Abre el archivo de texto para leerlo
  FILE *archivo = fopen("archivo.txt", "r");

  // Verifica si el archivo se abrió correctamente
  if (archivo == NULL) {
    printf("No se pudo abrir el archivo.\n");
    return 1;
  }

  // Inicializa el contador de palabras
  int palabras = 0;

  // Lee el archivo carácter por carácter
  char caracter;
  while ((caracter = fgetc(archivo)) != EOF) {
    // Si el carácter es un espacio en blanco, incrementa el contador de palabras
    if (caracter == ' ') {
      palabras++;
    }
  }

  // Incrementa el contador de palabras una última vez para contar la última palabra
  palabras++;

  // Cierra el archivo
  fclose(archivo);

  // Imprime el número de palabras
  printf("Hay %d palabras en el archivo.\n", palabras);

  return 0;
}
