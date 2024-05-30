#include <stdio.h>

int main() {
  // Declaración de variables
  int n, i, productoria = 1;

  // Ingreso de N
  printf("Ingrese la cantidad de números naturales: ");
  scanf("%d", &n);

  // Validación de N
  if (n <= 0) {
    printf("Error: La cantidad de números naturales debe ser mayor que 0.\n");
    return 1;
  }

  // Cálculo de la productoria
  for (i = 1; i <= n; i++) {
    productoria *= i;
  }

  // Impresión de la productoria
  printf("La productoria de los primeros %d números naturales es: %d\n", n, productoria);

  return 0;
}
