#include <stdio.h>

int main() {
  int s; // N�mero de sonidos emitidos por minuto
  float fa; // Temperatura en grados Fahrenheit

  // Solicitar al usuario el n�mero de sonidos emitidos por minuto
  printf("Ingrese el n�mero de sonidos emitidos por minuto: ");
  scanf("%d", &s);

  // Calcular la temperatura en grados Fahrenheit
  fa = ((s - 38) / 4) + 40;

  // Mostrar la temperatura en grados Fahrenheit
  printf("La temperatura es de %.2f grados Fahrenheit\n", fa);

  return 0;
}
