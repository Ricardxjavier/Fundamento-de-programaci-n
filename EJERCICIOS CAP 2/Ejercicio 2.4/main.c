#include <stdio.h>

int main() {
  int n1, n2, n3; // Declaraci�n de variables enteras

  // Solicitar al usuario que ingrese el primer n�mero
  printf("Ingrese el primer n�mero: ");
  scanf("%d", &n1);

  // Solicitar al usuario que ingrese el segundo n�mero
  printf("Ingrese el segundo n�mero: ");
  scanf("%d", &n2);

  // Solicitar al usuario que ingrese el tercer n�mero
  printf("Ingrese el tercer n�mero: ");
  scanf("%d", &n3);

  // Verificar si los n�meros est�n en orden creciente
  if (n1 <= n2 && n2 <= n3) {
    // Los n�meros est�n en orden creciente
    printf("Los n�meros est�n en orden creciente\n");
  } else {
    // Los n�meros no est�n en orden creciente
    printf("Los n�meros no est�n en orden creciente\n");
  }

  return 0;
}
