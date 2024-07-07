#include <stdio.h>
#include <stdlib.h>

int main() {
  // Abre el archivo arc.txt en modo lectura
  FILE *archivo = fopen("arc.txt", "r");

  // Verifica si el archivo se abrió correctamente
  if (archivo == NULL) {
    printf("Error al abrir el archivo.\n");
    return 1;
  }

  // Inicializa las variables para contar las vocales
  int a = 0;
  int e = 0;
  int i = 0;
  int o = 0;
  int u = 0;

  // Lee el archivo carácter por carácter
  char caracter;
  while ((caracter = fgetc(archivo)) != EOF) {
    // Convierte el carácter a minúscula
    caracter = tolower(caracter);

    // Incrementa el contador correspondiente si el carácter es una vocal
    if (caracter == 'a') {
      a++;
    } else if (caracter == 'e') {
      e++;
    } else if (caracter == 'i') {
      i++;
    } else if (caracter == 'o') {
      o++;
    } else if (caracter == 'u') {
      u++;
    }
  }

  // Cierra el archivo
  fclose(archivo);

  // Imprime los resultados
  printf("a: %d\n", a);
  printf("e: %d\n", e);
  printf("i: %d\n", i);
  printf("o: %d\n", o);
  printf("u: %d\n", u);

  return 0;
}
