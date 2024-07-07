#include <stdio.h>
#include <string.h>

int main() {
  // Declaraci�n de variables
  char cad[50];
  char archivo[50] = "arc2.txt";
  FILE *fp;
  char linea[100];
  int contador = 0;

  // Lectura de la cadena de caracteres
  printf("Ingrese la cadena de caracteres: ");
  scanf("%s", cad);

  // Apertura del archivo
  fp = fopen(archivo, "r");
  if (fp == NULL) {
    printf("Error al abrir el archivo.\n");
    return 1;
  }

  // Conteo de la cadena de caracteres en el archivo
  while (fgets(linea, sizeof(linea), fp) != NULL) {
    // Eliminaci�n del salto de l�nea
    linea[strcspn(linea, "\n")] = 0;

    // B�squeda de la cadena de caracteres en la l�nea
    char *ptr = strstr(linea, cad);
    while (ptr != NULL) {
      contador++;
      ptr = strstr(ptr + strlen(cad), cad);
    }
  }

  // Cierre del archivo
  fclose(fp);

  // Impresi�n del resultado
  printf("La cadena de caracteres '%s' se encuentra %d veces en el archivo.\n", cad, contador);

  return 0;
}
