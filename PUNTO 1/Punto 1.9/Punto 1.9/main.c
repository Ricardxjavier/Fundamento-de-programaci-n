#include <stdio.h>

int main() {

  int dias, segundos;

  // Leer el número de días
  printf("Ingrese el número de días: ");
  scanf("%d", &dias);

  // Calcular el número de segundos
  segundos = dias * 24 * 60 * 60;

  // Imprimir el número de segundos
  printf("El número de segundos en %d días es: %d\n", dias, segundos);

  return 0;
}
