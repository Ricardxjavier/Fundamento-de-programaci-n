#include <stdio.h>

int main() {
  // Declaraci�n de variables
  int med; // Tipo de conversi�n
  int val;  // Valor a convertir

  // Solicitar al usuario el tipo de conversi�n
  printf("Ingrese el tipo de conversi�n (1 - Pulgadas a mil�metros, 2 - Yardas a metros, 3 - Millas a kil�metros): ");
  scanf("%d", &med);

  // Solicitar al usuario el valor a convertir
  printf("Ingrese el valor a convertir: ");
  scanf("%d", &val);

  // Convertir pulgadas a mil�metros (si med es 1)
  if (med == 1) {
    val = val * 25.40; // Multiplicar el valor por la constante de conversi�n
    printf("Pulgadas a mil�metros: %d\n", val); // Imprimir el resultado
  }

  // Convertir yardas a metros (si med es 2)
  else if (med == 2) {
    val = val * 0.9144; // Multiplicar el valor por la constante de conversi�n
    printf("Yarda a metros: %d\n", val); // Imprimir el resultado
  }

  // Convertir millas a kil�metros (si med es 3)
  else if (med == 3) {
    val = val * 1.6093; // Multiplicar el valor por la constante de conversi�n
    printf("Milla a kil�metros: %d\n", val); // Imprimir el resultado
  }

  // Si el tipo de conversi�n no es v�lido
  else {
    printf("Tipo de conversi�n no v�lido\n"); // Imprimir un mensaje de error
  }

  return 0;
}
