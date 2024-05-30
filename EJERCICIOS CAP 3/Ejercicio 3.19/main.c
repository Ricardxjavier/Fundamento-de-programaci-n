#include <stdio.h>

int main() {
  // Se declara la variable `n` para almacenar el número ingresado por el usuario
  int n;

  // Se solicita al usuario que ingrese un número entero positivo
  printf("Ingrese un número entero positivo: ");
  scanf("%d", &n);

  // Se valida que el número ingresado sea positivo
  if (n <= 0) {
    printf("El número ingresado debe ser positivo.\n");
    return 1;
  }

  // Se imprime la figura de triángulo relleno con asteriscos
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
