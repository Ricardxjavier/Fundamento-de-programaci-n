#include <stdio.h>

int main() {
  // Declarar variables para los tres lados del triángulo
  float lado1, lado2, lado3;

  // Solicitar al usuario que ingrese los tres lados del triángulo
  printf("Ingrese los tres lados del triángulo: ");
  scanf("%f %f %f", &lado1, &lado2, &lado3);

  // Verificar si los tres lados forman un triángulo
  if (lado1 + lado2 <= lado3 || lado1 + lado3 <= lado2 || lado2 + lado3 <= lado1) {
    printf("Los tres lados no forman un triángulo.\n");
    return 1;
  }

  // Calcular el perímetro del triángulo
  float perimetro = lado1 + lado2 + lado3;

  // Calcular el área del triángulo usando la fórmula de Herón
  float s = perimetro / 2;
  float area = sqrt(s * (s - lado1) * (s - lado2) * (s - lado3));

  // Verificar si el triángulo es equilátero, isósceles o escaleno
  if (lado1 == lado2 && lado2 == lado3) {
    printf("El triángulo es equilátero.\n");
  } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
    printf("El triángulo es isósceles.\n");
  } else {
    printf("El triángulo es escaleno.\n");
  }

  // Imprimir el perímetro y el área del triángulo
  printf("Perímetro: %.2f\n", perimetro);
  printf("Área: %.2f\n", area);

  return 0;
}
