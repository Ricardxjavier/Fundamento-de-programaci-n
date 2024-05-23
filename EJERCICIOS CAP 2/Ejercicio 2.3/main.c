#include <stdio.h>

int main() {
  // Se declaran dos variables enteras para almacenar los n�meros ingresados por el usuario
  int n1, n2;

  // Se solicita al usuario que ingrese el primer n�mero
  printf("Ingrese el primer n�mero: ");
  scanf("%d", &n1);

  // Se solicita al usuario que ingrese el segundo n�mero
  printf("Ingrese el segundo n�mero: ");
  scanf("%d", &n2);

  // Se verifica si el valor de n2 es diferente de 0
  if (n2 != 0) {
    // Se verifica si n1 es divisible entre n2
    if (n1 % n2 == 0) {
      // Si n1 es divisor de n2, se imprime un mensaje indicando esto
      printf("%d es divisor de %d\n", n1, n2);
    } else {
      // Si n1 no es divisor de n2, se imprime un mensaje indicando esto
      printf("%d no es divisor de %d\n", n1, n2);
    }
  } else {
    // Si n2 es 0, se imprime un mensaje indicando que no se puede realizar la divisi�n
    printf("N2 es 0, no se puede realizar la divisi�n\n");
  }

  return 0;
}
