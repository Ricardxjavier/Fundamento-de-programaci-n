#include <stdio.h>

int main() {
  int num; // Variable para almacenar el número entero de cuatro dígitos
  int digito; // Variable para almacenar el dígito actual

  printf("Ingrese un número entero de cuatro dígitos: ");
  scanf("%d", &num);

  digito = num / 1000; // Obtener el dígito más significativo

  if (digito % 2 != 0) {
    printf("No todos los dígitos son pares");
  } else {
    // Procesar los demás dígitos
    num = num % 1000;
    while (num > 0) {
      digito = num / 100;

      if (digito % 2 != 0) {
        printf("No todos los dígitos son pares");
        return 0;
      }

      num = num % 100;
    }

    printf("Todos los dígitos son pares");
  }

  return 0;
}
