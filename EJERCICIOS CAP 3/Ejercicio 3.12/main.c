#include <stdio.h>

int main() {
  // Declaraci�n de variables
  int num;

  // Leer el valor de NUM
  printf("Ingrese un n�mero entero positivo: ");
  scanf("%d", &num);

  // Inicializar variables para conteo de divisores
  int divisores = 0;

  // Evaluar si NUM es primo
  for (int i = 1; i <= num; i++) {
    if (num % i == 0) {
      divisores++;
    }
  }

  // Imprimir el resultado
  if (divisores == 2) {
    printf("%d es un n�mero primo\n", num);
  } else {
    printf("%d no es un n�mero primo\n", num);
  }

  return 0;
}
