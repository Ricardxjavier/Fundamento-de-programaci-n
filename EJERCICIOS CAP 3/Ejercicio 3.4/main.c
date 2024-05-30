#include <stdio.h>

int main() {
  // Declaración de variables
  int n, positivo, negativo, cero, numero;

  // Ingreso del valor de n (cantidad de números a ingresar)
  printf("Ingrese la cantidad de números: ");
  scanf("%d", &n);

  // Inicialización de contadores
  positivo = 0;
  negativo = 0;
  cero = 0;

  // Ingreso y clasificación de los números
  for (int i = 1; i <= n; i++) {
    printf("Ingrese el número %d: ", i);
    scanf("%d", &numero);

    if (numero > 0) {
      positivo++;
    } else if (numero < 0) {
      negativo++;
    } else {
      cero++;
    }
  }

  // Impresión de resultados
  printf("\nCantidad de números positivos: %d", positivo);
  printf("\nCantidad de números negativos: %d", negativo);
  printf("\nCantidad de números ceros: %d", cero);

  return 0;
}
