#include <stdio.h>

// Definici�n de constantes para los n�meros primos
#define N1 5
#define N2 23

int main() {
  // Verificaci�n de que N1 y N2 son n�meros primos
  if (!esPrimo(N1) || !esPrimo(N2)) {
    printf("Los valores de N1 y N2 deben ser n�meros primos\n");
    return 1;
  }

  // C�lculo de la cantidad de n�meros primos gemelos en el rango
  int cantidadPrimosGemelos = 0;
  for (int numero = N1 + 2; numero <= N2 - 2; numero += 2) {
    if (esPrimo(numero) && esPrimo(numero + 2)) {
      cantidadPrimosGemelos++;
    }
  }

  // Impresi�n de la cantidad de n�meros primos gemelos encontrados
  printf("Cantidad de n�meros primos gemelos en el rango [%d, %d]: %d\n", N1, N2, cantidadPrimosGemelos);

  return 0;
}

// Funci�n para verificar si un n�mero es primo
int esPrimo(int numero) {
  if (numero <= 1) {
    return 0;
  }

  for (int i = 2; i <= numero / 2; i++) {
    if (numero % i == 0) {
      return 0;
    }
  }

  return 1;
}
