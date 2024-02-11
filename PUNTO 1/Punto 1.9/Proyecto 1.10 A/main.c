#include <stdio.h>
#include <math.h>

int main() {

  double numero, x0, x1, error;

  // Leer el n�mero
  printf("Ingrese el n�mero: ");
  scanf("%lf", &numero);

  // Elegir una aproximaci�n inicial
  x0 = numero / 2.0;

  // Definir el error
  error = 0.0001;

  // Bucle para calcular la ra�z cuadrada
  do {
    x1 = (x0 + numero / x0) / 2.0;
    error = fabs(x1 - x0);
    x0 = x1;
  } while (error >= error);

  // Imprimir la ra�z cuadrada
  printf("La ra�z cuadrada de %.2f es: %.4f\n", numero, x1);

  return 0;
}
