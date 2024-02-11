#include <stdio.h>

void ordenar(int A[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (A[i] > A[j]) {
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
      }
    }
  }
}

int main() {
  int n;
  int A[100];

  // Leer N
  printf("Ingrese el número de elementos: ");
  scanf("%d", &n);

  // Leer elementos
  for (int i = 0; i < n; i++) {
    printf("Ingrese el valor del elemento %d: ", i + 1);
    scanf("%d", &A[i]);
  }

  // Ordenar A
  ordenar(A, n);

  // Imprimir A
  for (int i = 0; i < n; i++) {
    printf("%d ", A[i]);
  }

  printf("\n");

  return 0;
}
