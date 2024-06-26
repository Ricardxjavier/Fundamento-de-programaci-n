#include <stdio.h>
#include <math.h>

int main() {
  double x, suma, termino, diferencia;
  int n, factorial, potencia;

  printf("Ingrese el valor de x: ");
  scanf("%lf", &x);

  n = 1;
  suma = 0;

  while (diferencia > 0.001) {
    factorial = 1;
    potencia = 1;

    while (potencia <= 2 * n - 1) {
      factorial = factorial * potencia;
      potencia = potencia + 2;
    }

    termino = (potencia - 1) * pow(-1, n) * pow(x, potencia - 1) / factorial;
    suma = suma + termino;

    diferencia = abs(suma);

    n++;
  }

  printf("El seno de %lf es: %lf\n", x, suma);
  printf("Se necesitaron %d términos para obtener la precisión deseada\n", n);

  return 0;
}

