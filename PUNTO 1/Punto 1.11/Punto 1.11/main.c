#include <stdio.h>
#include <math.h>

int main() {

  double lado1, lado2, lado3, semiperimetro, area;

  // Leer los lados del triángulo
  printf("Ingrese la longitud del lado 1: ");
  scanf("%lf", &lado1);
  printf("Ingrese la longitud del lado 2: ");
  scanf("%lf", &lado2);
  printf("Ingrese la longitud del lado 3: ");
  scanf("%lf", &lado3);

  // Calcular el semiperímetro
  semiperimetro = (lado1 + lado2 + lado3) / 2.0;

  // Calcular el área
  area = sqrt(semiperimetro * (semiperimetro - lado1) * (semiperimetro - lado2) * (semiperimetro - lado3));

  // Imprimir el área
  printf("El área del triángulo es: %.4f\n", area);

  return 0;
}
