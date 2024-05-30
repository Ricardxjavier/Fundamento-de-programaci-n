#include <stdio.h>

int main() {
  // Declaraci�n e inicializaci�n de la variable 'n' para almacenar el entero positivo
  int n;

  // Solicitar al usuario que ingrese un entero positivo
  printf("Ingrese un entero positivo: ");
  scanf("%d", &n);

  // Verificar si la entrada es v�lida (mayor que 0)
  if (n <= 0) {
    printf("Entrada inv�lida. Ingrese un entero positivo.\n");
    return 1;
  }

  // Dibujar la figura
  // Primera mitad de la figura
  for (int i = 1; i <= n; i++) {
    // Imprimir los n�meros de la primera fila
    for (int j = 1; j <= i; j++) {
      printf("%d", j);
    }

    // Agregar espacios para la alineaci�n a la derecha
    for (int j = i + 1; j <= n; j++) {
      printf(" ");
    }

    // Imprimir una nueva l�nea
    printf("\n");
  }

  // Segunda mitad de la figura
  for (int i = n - 1; i >= 1; i--) {
    // Agregar espacios para la alineaci�n a la izquierda
    for (int j = n - i; j >= 1; j--) {
      printf(" ");
    }

    // Imprimir los n�meros de la �ltima fila
    for (int j = 1; j <= i; j++) {
      printf("%d", j);
    }

    // Imprimir una nueva l�nea
    printf("\n");
  }

  return 0;
}
