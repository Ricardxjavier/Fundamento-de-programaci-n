#include <stdio.h>

// Definición de constantes para los números primos
#define N1 5
#define N2 23

int main() {
  // Verificación de que N1 y N2 son números primos
  if (!esPrimo(N1) || !esPrimo(N2)) {
    printf("Los valores de N1 y N2 deben ser números primos\n");
    return 1;
  }

  // Cálculo de la cantidad de números primos gemelos en el rango
  int cantidadPrimosGemelos = 0;
  for (int numero = N1 + 2; numero <= N2 - 2; numero += 2) {
    if (esPrimo(numero) && esPrimo(numero + 2)) {
      cantidadPrimosGemelos++;
    }
  }

  // Impresión de la cantidad de números primos gemelos encontrados
  printf("Cantidad de números primos gemelos en el rango [%d, %d]: %d\n", N1, N2, cantidadPrimosGemelos);

  return 0;
}

// Función para verificar si un número es primo
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
