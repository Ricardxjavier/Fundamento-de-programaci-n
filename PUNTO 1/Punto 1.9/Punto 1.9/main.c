#include <stdio.h>

int main() {

  int dias, segundos;

  // Leer el n�mero de d�as
  printf("Ingrese el n�mero de d�as: ");
  scanf("%d", &dias);

  // Calcular el n�mero de segundos
  segundos = dias * 24 * 60 * 60;

  // Imprimir el n�mero de segundos
  printf("El n�mero de segundos en %d d�as es: %d\n", dias, segundos);

  return 0;
}
