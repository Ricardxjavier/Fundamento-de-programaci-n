#include <stdio.h>

int main() {
  // Se declara la variable para almacenar el monto de la compra
  float compra;

  // Se solicita al usuario que ingrese el monto de la compra
  printf("Ingrese el monto de la compra: ");
  scanf("%f", &compra);

  // Se calcula el descuento correspondiente
  float descuento;
  if (compra < 800) {
    descuento = 0;
  } else if (compra <= 1500) {
    descuento = compra * 0.1;
  } else if (compra <= 5000) {
    descuento = compra * 0.15;
  } else {
    descuento = compra * 0.2;
  }

  // Se calcula el precio real a pagar
  float precioReal = compra - descuento;

  // Se muestra el precio real a pagar
  printf("El precio real a pagar es: %.2f\n", precioReal);

  return 0;
}
