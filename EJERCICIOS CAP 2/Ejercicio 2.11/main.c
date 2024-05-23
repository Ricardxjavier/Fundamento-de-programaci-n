#include <stdio.h>

int main() {
  // Declarar variables para los tres lados del tri�ngulo
  float lado1, lado2, lado3;

  // Solicitar al usuario que ingrese los tres lados del tri�ngulo
  printf("Ingrese los tres lados del tri�ngulo: ");
  scanf("%f %f %f", &lado1, &lado2, &lado3);

  // Verificar si los tres lados forman un tri�ngulo
  if (lado1 + lado2 <= lado3 || lado1 + lado3 <= lado2 || lado2 + lado3 <= lado1) {
    printf("Los tres lados no forman un tri�ngulo.\n");
    return 1;
  }

  // Calcular el per�metro del tri�ngulo
  float perimetro = lado1 + lado2 + lado3;

  // Calcular el �rea del tri�ngulo usando la f�rmula de Her�n
  float s = perimetro / 2;
  float area = sqrt(s * (s - lado1) * (s - lado2) * (s - lado3));

  // Verificar si el tri�ngulo es equil�tero, is�sceles o escaleno
  if (lado1 == lado2 && lado2 == lado3) {
    printf("El tri�ngulo es equil�tero.\n");
  } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
    printf("El tri�ngulo es is�sceles.\n");
  } else {
    printf("El tri�ngulo es escaleno.\n");
  }

  // Imprimir el per�metro y el �rea del tri�ngulo
  printf("Per�metro: %.2f\n", perimetro);
  printf("�rea: %.2f\n", area);

  return 0;
}
