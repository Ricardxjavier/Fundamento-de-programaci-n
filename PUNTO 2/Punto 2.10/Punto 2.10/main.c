#include <stdio.h>

void intercambiar(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
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

  // Ordenar
  if (n == 1) {
    printf("%d\n", A[0]);
    return 0;
  } else if (n == 2) {
    if (A[0] > A[1]) {
      intercambiar(&A[0], &A[1]);
    }
    printf("%d %d\n", A[0], A[1]);
    return 0;
  } else {
    for (int i = 0; i < n - 1; i++) {
      if (A[i] > A[i + 1]) {
        intercambiar(&A[i], &A[i + 1]);
      }
    }
    printf("%d %d\n", A[0], A[n - 1]);
  }

  return 0;
}
