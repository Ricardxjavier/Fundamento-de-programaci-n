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

  // Se imprime la figura de triángulo utilizando dos bucles anidados
  for (int i = 1; i <= n; i++) {
    // Se imprime la primera mitad del triángulo
    for (int j = 1; j <= i; j++) {
      printf("%d", j);
    }
    printf("\n");

    // Se imprime la segunda mitad del triángulo en orden inverso
    for (int j = i - 1; j >= 1; j--) {
      printf("%d", j);
    }
    printf("\n");
  }

  return 0;
}
