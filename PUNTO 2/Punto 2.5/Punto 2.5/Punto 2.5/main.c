#include <stdio.h>

int main() {
  float com;
  float descuento;
  float precioFinal;

  // Leer COM
  printf("Ingrese el monto de la compra: ");
  scanf("%f", &com);

  // Calcular descuento y precio final
  if (com < 800) {
    descuento = 0.0;
    precioFinal = com;
  } else if (com < 1500) {
    descuento = 0.1;
    precioFinal = com - (com * descuento);
  } else if (com < 5000) {
    descuento = 0.15;
    precioFinal = com - (com * descuento);
  } else {
    descuento = 0.2;
    precioFinal = com - (com * descuento);
  }

  // Imprimir COM
  printf("Monto de la compra: %.2f\n", com);

  // Imprimir Descuento
  printf("Descuento: %.2f%%\n", descuento * 100);

  // Imprimir Precio final
  printf("Precio final: %.2f\n", precioFinal);

  return 0;
}
