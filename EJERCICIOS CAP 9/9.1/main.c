#include <stdio.h>
#include <stdlib.h>

int main() {
  // Abrimos el archivo de texto para lectura
  FILE *archivo = fopen("texto.txt", "r");

  // Si el archivo no se pudo abrir, salimos del programa
  if (archivo == NULL) {
    printf("Error al abrir el archivo.\n");
    return 1;
  }

  // Variables para almacenar la longitud de la cadena actual y la longitud de la cadena m�s grande
  int longitud_actual = 0;
  int longitud_maxima = 0;

  // Variables para almacenar el car�cter actual y el car�cter anterior
  char caracter_actual;
  char caracter_anterior = '\0';

  // Iteramos sobre cada car�cter del archivo
  while ((caracter_actual = fgetc(archivo)) != EOF) {
    // Si el car�cter actual es un espacio, un salto de l�nea o el fin del archivo,
    // y el car�cter anterior no era un espacio, un salto de l�nea o el fin del archivo,
    // entonces la cadena actual ha terminado.
    if ((caracter_actual == ' ' || caracter_actual == '\n' || caracter_actual == EOF) &&
        (caracter_anterior != ' ' && caracter_anterior != '\n' && caracter_anterior != EOF)) {
      // Actualizamos la longitud m�xima si la longitud de la cadena actual es mayor
      if (longitud_actual > longitud_maxima) {
        longitud_maxima = longitud_actual;
      }

      // Reiniciamos la longitud de la cadena actual
      longitud_actual = 0;
    } else {
      // Si el car�cter actual no es un espacio, un salto de l�nea o el fin del archivo,
      // entonces la cadena actual sigue creciendo.
      longitud_actual++;
    }

    // Guardamos el car�cter actual como car�cter anterior para la siguiente iteraci�n
    caracter_anterior = caracter_actual;
  }

  // Cerramos el archivo
  fclose(archivo);

  // Imprimimos la longitud de la cadena m�s grande
  printf("La longitud de la cadena m�s grande es: %d\n", longitud_maxima);

  return 0;
}
