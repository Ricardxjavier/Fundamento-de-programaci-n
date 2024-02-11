#include <stdio.h>

int main() {
  int n, m;
  int A[100][100];

  // Leer N y M
  printf("Ingrese el número de filas: ");
  scanf("%d", &n);
  printf("Ingrese el número de columnas: ");
  scanf("%d", &m);

  // Leer matriz
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("Ingrese el valor de la fila %d, columna %d: ", i + 1, j + 1);
      scanf("%d", &A[i][j]);
    }
  }

  // Imprimir matriz
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }

  return 0;
}
