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
      switch (contador) {
      case 1 ... 15:
        resultado = resultado + (contador * contador + 15);
        break;
      case 16 ... 30:
        resultado = resultado + (contador * contador + 12);
        break;
      case 31 ... 60:
        resultado = resultado + (4.0 * contador / (contador * contador + 8));
        break;
      default:
        resultado = resultado + 0;
        break;
      }
      contador++;
    }

    printf("Resultado: %.2f", resultado);
  }

  return 0;
}
