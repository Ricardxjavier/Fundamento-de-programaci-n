#include <stdio.h>

int main() {
  // Se declaran las variables para almacenar los tres n�meros
  float n1, n2, n3;

  // Se solicita al usuario que ingrese los tres n�meros
  printf("Ingrese el primer n�mero: ");
  scanf("%f", &n1);
  printf("Ingrese el segundo n�mero: ");
  scanf("%f", &n2);
  printf("Ingrese el tercer n�mero: ");
  scanf("%f", &n3);

  // Se determina el mayor de los tres n�meros
  float mayor = n1;
  if (n2 > n1) {
    mayor = n2;
  }
  if (n3 > mayor) {
    mayor = n3;
  }

  // Se muestra el mayor de los tres n�meros
  printf("El mayor de los tres n�meros es: %.2f\n", mayor);

  return 0;
}
