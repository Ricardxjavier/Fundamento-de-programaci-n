#include <stdio.h>

int main() {
  int n1, n2, n3; // Declaración de variables enteras

  // Solicitar al usuario que ingrese el primer número
  printf("Ingrese el primer número: ");
  scanf("%d", &n1);

  // Solicitar al usuario que ingrese el segundo número
  printf("Ingrese el segundo número: ");
  scanf("%d", &n2);

  // Solicitar al usuario que ingrese el tercer número
  printf("Ingrese el tercer número: ");
  scanf("%d", &n3);

  // Verificar si los números están en orden creciente
  if (n1 <= n2 && n2 <= n3) {
    // Los números están en orden creciente
    printf("Los números están en orden creciente\n");
  } else {
    // Los números no están en orden creciente
    printf("Los números no están en orden creciente\n");
  }

  return 0;
}
