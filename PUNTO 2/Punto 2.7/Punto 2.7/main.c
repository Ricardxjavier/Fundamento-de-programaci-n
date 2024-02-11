#include <stdio.h>

int main() {
  float x;
  float f;

  // Leer X
  printf("Ingrese el valor de X: ");
  scanf("%f", &x);

  // Calcular f(x)
  if (x < 0) {
    f = x * x;
  } else if (x < 1) {
    f = x * x * x;
  } else {
    f = x + 1;
  }

  // Imprimir f(x)
  printf("f(x) = %.2f\n", f);

  return 0;
}
