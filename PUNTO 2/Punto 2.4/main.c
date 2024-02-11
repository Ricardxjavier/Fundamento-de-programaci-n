#include <stdio.h>

int main() {
  int n1, n2, n3;

  // Leer N1
  printf("Ingrese el primer número: ");
  scanf("%d", &n1);

  // Leer N2
  printf("Ingrese el segundo número: ");
  scanf("%d", &n2);

  // Leer N3
  printf("Ingrese el tercer número: ");
  scanf("%d", &n3);

  // Si N1 < N2
  if (n1 < n2) {
    // Si N2 < N3
    if (n2 < n3) {
      printf("Los números están en orden creciente.\n");
    } else {
      printf("Los números no están en orden creciente.\n");
    }
  } else {
    // Si N1 < N3
    if (n1 < n3) {
      printf("Los números no están en orden creciente.\n");
    } else {
      printf("Los números no están en orden creciente.\n");
    }
  }

  return 0;
}
