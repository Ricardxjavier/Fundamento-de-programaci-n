#include <stdio.h>

int main() {
  // Declaraci�n de variables
  int n, positivo, negativo, cero, numero;

  // Ingreso del valor de n (cantidad de n�meros a ingresar)
  printf("Ingrese la cantidad de n�meros: ");
  scanf("%d", &n);

  // Inicializaci�n de contadores
  positivo = 0;
  negativo = 0;
  cero = 0;

  // Ingreso y clasificaci�n de los n�meros
  for (int i = 1; i <= n; i++) {
    printf("Ingrese el n�mero %d: ", i);
    scanf("%d", &numero);

    if (numero > 0) {
      positivo++;
    } else if (numero < 0) {
      negativo++;
    } else {
      cero++;
    }
  }

  // Impresi�n de resultados
  printf("\nCantidad de n�meros positivos: %d", positivo);
  printf("\nCantidad de n�meros negativos: %d", negativo);
  printf("\nCantidad de n�meros ceros: %d", cero);

  return 0;
}
