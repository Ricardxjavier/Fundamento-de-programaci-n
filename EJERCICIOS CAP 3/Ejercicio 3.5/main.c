#include <stdio.h>

int main() {
  // Declaraci�n de variables
  int n, i, productoria = 1;

  // Ingreso de N
  printf("Ingrese la cantidad de n�meros naturales: ");
  scanf("%d", &n);

  // Validaci�n de N
  if (n <= 0) {
    printf("Error: La cantidad de n�meros naturales debe ser mayor que 0.\n");
    return 1;
  }

  // C�lculo de la productoria
  for (i = 1; i <= n; i++) {
    productoria *= i;
  }

  // Impresi�n de la productoria
  printf("La productoria de los primeros %d n�meros naturales es: %d\n", n, productoria);

  return 0;
}
