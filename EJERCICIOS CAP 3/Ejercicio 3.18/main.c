#include <stdio.h>

int main() {
  // Se declara la variable `n` para almacenar el n�mero ingresado por el usuario
  int n;

  // Se solicita al usuario que ingrese un n�mero entero positivo
  printf("Ingrese un n�mero entero positivo: ");
  scanf("%d", &n);

  // Se valida que el n�mero ingresado sea positivo
  if (n <= 0) {
    printf("El n�mero ingresado debe ser positivo.\n");
    return 1;
  }

  // Se imprime la figura de tri�ngulo utilizando dos bucles anidados
  for (int i = 1; i <= n; i++) {
    // Se imprime la primera mitad del tri�ngulo
    for (int j = 1; j <= i; j++) {
      printf("%d", j);
    }
    printf("\n");

    // Se imprime la segunda mitad del tri�ngulo en orden inverso
    for (int j = i - 1; j >= 1; j--) {
      printf("%d", j);
    }
    printf("\n");
  }

  return 0;
}
