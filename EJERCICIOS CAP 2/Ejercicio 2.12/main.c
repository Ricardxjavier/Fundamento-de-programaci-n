#include <stdio.h>

int main() {
  int num; // Variable para almacenar el n�mero entero de cuatro d�gitos
  int digito; // Variable para almacenar el d�gito actual

  printf("Ingrese un n�mero entero de cuatro d�gitos: ");
  scanf("%d", &num);

  digito = num / 1000; // Obtener el d�gito m�s significativo

  if (digito % 2 != 0) {
    printf("No todos los d�gitos son pares");
  } else {
    // Procesar los dem�s d�gitos
    num = num % 1000;
    while (num > 0) {
      digito = num / 100;

      if (digito % 2 != 0) {
        printf("No todos los d�gitos son pares");
        return 0;
      }

      num = num % 100;
    }

    printf("Todos los d�gitos son pares");
  }

  return 0;
}
