#include <stdio.h>

int main() {
  // Declaración de variables
  int med; // Tipo de conversión
  int val;  // Valor a convertir

  // Solicitar al usuario el tipo de conversión
  printf("Ingrese el tipo de conversión (1 - Pulgadas a milímetros, 2 - Yardas a metros, 3 - Millas a kilómetros): ");
  scanf("%d", &med);

  // Solicitar al usuario el valor a convertir
  printf("Ingrese el valor a convertir: ");
  scanf("%d", &val);

  // Convertir pulgadas a milímetros (si med es 1)
  if (med == 1) {
    val = val * 25.40; // Multiplicar el valor por la constante de conversión
    printf("Pulgadas a milímetros: %d\n", val); // Imprimir el resultado
  }

  // Convertir yardas a metros (si med es 2)
  else if (med == 2) {
    val = val * 0.9144; // Multiplicar el valor por la constante de conversión
    printf("Yarda a metros: %d\n", val); // Imprimir el resultado
  }

  // Convertir millas a kilómetros (si med es 3)
  else if (med == 3) {
    val = val * 1.6093; // Multiplicar el valor por la constante de conversión
    printf("Milla a kilómetros: %d\n", val); // Imprimir el resultado
  }

  // Si el tipo de conversión no es válido
  else {
    printf("Tipo de conversión no válido\n"); // Imprimir un mensaje de error
  }

  return 0;
}
