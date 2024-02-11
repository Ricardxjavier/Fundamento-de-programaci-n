#include <stdio.h>
#include <math.h>

int main() {

  double radio, altura, volumen;

  // Leer el radio y la altura del cilindro
  printf("Ingrese el radio del cilindro: ");
  scanf("%lf", &radio);
  printf("Ingrese la altura del cilindro: ");
  scanf("%lf", &altura);

  // Calcular el volumen
  volumen = M_PI * radio * radio * altura;

  // Imprimir el volumen
  printf("El volumen del cilindro es: %.4f\n", volumen);

  return 0;
}
