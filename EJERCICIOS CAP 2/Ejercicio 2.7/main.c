#include <stdio.h>

float f(float x) {
  int y = (int)x; // Se convierte X a entero

  // Se calcula el residuo de la división de Y por 4
  int residuo = y % 4;

  // Se calcula el valor de f(X) según el residuo
  float fX;
  switch (residuo) {
    case 0:
      fX = (y * y - 14) / y;
      break;
    case 1:
      fX = y * y * y + 5;
      break;
    case 2:
      fX = y * x;
      break;
    case 3:
      fX = -x;
      break;
    default:
      fX = 0; // Valor por defecto si el residuo no está entre 0 y 3
  }

  return fX;
}

int main() {
  // Se declara la variable para almacenar el valor de X
  float x;

  // Se solicita al usuario que ingrese el valor de X
  printf("Ingrese el valor de X: ");
  scanf("%f", &x);

  // Se calcula el valor de f(X)
  float fX = f(x);

  // Se muestra el valor de f(X)
  printf("El valor de f(X) es: %.2f\n", fX);

  return 0;
}
