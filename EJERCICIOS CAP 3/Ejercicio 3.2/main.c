#include <stdio.h>

int main() {
  int n;
  float acumulador = 0;
  float resultado = 0;

  printf("Ingrese el valor de N: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    acumulador += (1 / (i * i));
  }

  resultado = acumulador;

  printf("El resultado de la serie es: %.2f", resultado);

  return 0;
}
