#include <stdio.h>

int main() {
  // Se declaran las variables para almacenar los tres números
  float n1, n2, n3;

  // Se solicita al usuario que ingrese los tres números
  printf("Ingrese el primer número: ");
  scanf("%f", &n1);
  printf("Ingrese el segundo número: ");
  scanf("%f", &n2);
  printf("Ingrese el tercer número: ");
  scanf("%f", &n3);

  // Se determina el mayor de los tres números
  float mayor = n1;
  if (n2 > n1) {
    mayor = n2;
  }
  if (n3 > mayor) {
    mayor = n3;
  }

  // Se muestra el mayor de los tres números
  printf("El mayor de los tres números es: %.2f\n", mayor);

  return 0;
}
