#include <stdio.h>

int main() {
  int n;
  float acumulador = 0;
  float resultado = 0;

  printf("Ingrese el valor de N: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    acumulador += (1 / i); // Se suman los inversos de cada número entero de 1 a N
  }

  resultado = acumulador; // Se obtiene el resultado final

  printf("El resultado de la serie es: %.2f", resultado); // Se muestra el resultado

  return 0;
}
