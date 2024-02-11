#include <stdio.h>

int main() {
  int n, i, j, totalTipoVino, totalAnual;

  // Leer N
  scanf("%d", &n);

  // Inicializar totales
  totalTipoVino = 0;
  totalAnual = 0;

  // Recorrer los años
  for (i = 1; i <= n; i++) {
    // Recorrer los tipos de vino
    for (j = 1; j <= 4; j++) {
      int vin;

      // Leer VIN
      scanf("%d", &vin);

      // Acumular total por tipo de vino
      totalTipoVino += vin;

      // Acumular total anual
      totalAnual += vin;
    }
  }

  // Imprimir total por tipo de vino
  printf("Total por tipo de vino:\n");
  for (j = 1; j <= 4; j++) {
    printf("  Tipo %d: %d\n", j, totalTipoVino);
  }

  // Imprimir total anual
  printf("Total anual:\n");
  for (i = 1; i <= n; i++) {
    printf("  Año %d: %d\n", i, totalAnual);
  }

  return 0;
}
