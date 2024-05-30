#include <stdio.h>

int main() {
  int t, p, r;

  printf("Introduzca el valor de T: ");
  scanf("%d", &t);

  printf("Introduzca el valor de P: ");
  scanf("%d", &p);

  printf("Introduzca el valor de R: ");
  scanf("%d", &r);

  int expresion = 7 * t * t * t * t * t * p * p * p + 12 * r * r;

  if (expresion < 5850) {
    printf("Los valores de T, P y R que satisfacen la expresión son:\n");
    printf("T = %d\n", t);
    printf("P = %d\n", p);
    printf("R = %d\n", r);
  } else {
    printf("No hay valores de T, P y R que satisfagan la expresión.\n");
  }

  return 0;
}
