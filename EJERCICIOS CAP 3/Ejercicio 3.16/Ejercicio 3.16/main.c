#include <stdio.h>

int main() {
  // Declaración e inicialización de la variable 'n' para almacenar el entero positivo
  int n;

  // Solicitar al usuario que ingrese un entero positivo
  printf("Ingrese un entero positivo: ");
  scanf("%d", &n);

  // Verificar si la entrada es válida (mayor que 0)
  if (n <= 0) {
    printf("Entrada inválida. Ingrese un entero positivo.\n");
    return 1;
  }

  // Dibujar la figura
  // Primera mitad de la figura
  for (int i = 1; i <= n; i++) {
    // Imprimir los números de la primera fila
    for (int j = 1; j <= i; j++) {
      printf("%d", j);
    }

    // Agregar espacios para la alineación a la derecha
    for (int j = i + 1; j <= n; j++) {
      printf(" ");
    }

    // Imprimir una nueva línea
    printf("\n");
  }

  // Segunda mitad de la figura
  for (int i = n - 1; i >= 1; i--) {
    // Agregar espacios para la alineación a la izquierda
    for (int j = n - i; j >= 1; j--) {
      printf(" ");
    }

    // Imprimir los números de la última fila
    for (int j = 1; j <= i; j++) {
      printf("%d", j);
    }

    // Imprimir una nueva línea
    printf("\n");
  }

  return 0;
}
