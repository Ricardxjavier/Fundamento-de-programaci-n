#include <stdio.h>

int main() {
  int n;

  printf("Ingrese el valor de N: ");
  scanf("%d", &n);

  if (n <= 0) {
    printf("Error: El valor de N debe ser mayor que 0");
  } else {
    int contador = 1;
    float resultado = 1;

    while (contador <= n) {
      resultado = resultado + (11 - 2 * contador) / contador;
      contador++;
    }

    printf("Resultado: %.2f", resultado);
  }

  return 0;
}
