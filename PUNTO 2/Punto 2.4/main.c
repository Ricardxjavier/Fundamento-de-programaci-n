#include <stdio.h>

int main() {
  int n1, n2, n3;

  // Leer N1
  printf("Ingrese el primer n�mero: ");
  scanf("%d", &n1);

  // Leer N2
  printf("Ingrese el segundo n�mero: ");
  scanf("%d", &n2);

  // Leer N3
  printf("Ingrese el tercer n�mero: ");
  scanf("%d", &n3);

  // Si N1 < N2
  if (n1 < n2) {
    // Si N2 < N3
    if (n2 < n3) {
      printf("Los n�meros est�n en orden creciente.\n");
    } else {
      printf("Los n�meros no est�n en orden creciente.\n");
    }
  } else {
    // Si N1 < N3
    if (n1 < n3) {
      printf("Los n�meros no est�n en orden creciente.\n");
    } else {
      printf("Los n�meros no est�n en orden creciente.\n");
    }
  }

  return 0;
}
