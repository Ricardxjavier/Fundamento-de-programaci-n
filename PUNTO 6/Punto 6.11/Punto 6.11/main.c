#include <stdio.h>

// Definici�n del tama�o del arreglo
#define NUM_CENTROS 10
#define NUM_MESES 12
#define NUM_ANIOS 5

// Declaraci�n del arreglo tridimensional
int SEC[NUM_CENTROS][NUM_MESES][NUM_ANIOS];

// Funci�n para calcular el total de visitantes por centro tur�stico
int totalVisitantesCentro(int centro) {
  int total = 0;
  for (int mes = 0; mes < NUM_MESES; mes++) {
    for (int anio = 0; anio < NUM_ANIOS; anio++) {
      total += SEC[centro][mes][anio];
    }
  }
  return total;
}

// Funci�n para encontrar el centro tur�stico m�s visitado
int centroMasVisitado() {
  int maximo = 0, indiceMaximo = 0;
  for (int centro = 1; centro < NUM_CENTROS; centro++) {
    int total = totalVisitantesCentro(centro);
    if (total > maximo) {
      maximo = total;
      indiceMaximo = centro;
    }
  }
  return indiceMaximo;
}

// Funci�n para encontrar el centro tur�stico menos visitado
int centroMenosVisitado() {
  int minimo = INT_MAX, indiceMinimo = 0;
  for (int centro = 1; centro < NUM_CENTROS; centro++) {
    int total = totalVisitantesCentro(centro);
    if (total < minimo) {
      minimo = total;
      indiceMinimo = centro;
    }
  }
  return indiceMinimo;
}

// Funci�n para encontrar el mes con mayor afluencia tur�stica
int mesMayorAfluencia() {
  int maximo = 0, indiceMaximo = 0;
  for (int mes = 0; mes < NUM_MESES; mes++) {
    int total = 0;
    for (int centro = 0; centro < NUM_CENTROS; centro++) {
      total += SEC[centro][mes][NUM_ANIOS - 1];
    }
    if (total > maximo) {
      maximo = total;
      indiceMaximo = mes;
    }
  }
  return indiceMaximo;
}

// Funci�n para encontrar el mes con menor afluencia tur�stica
int mesMenosAfluencia() {
  int minimo = INT_MAX, indiceMinimo = 0;
  for (int mes = 0; mes < NUM_MESES; mes++) {
    int total = 0;
    for (int centro = 0; centro < NUM_CENTROS; centro++) {
      total += SEC[centro][mes][NUM_ANIOS - 1];
    }
    if (total < minimo) {
      minimo = total;
      indiceMinimo = mes;
    }
  }
  return indiceMinimo;
}

int main() {
  // Datos de ejemplo: Reemplazar con recuentos reales de visitantes para cada centro
  // SEC[centro][mes][anio]
  // Por ahora, asumamos algunos valores aleatorios
  SEC[0][0][0] = 1000;
  SEC[0][0][1] = 1200;
  // ... (rellenar datos para otros centros, meses y a�os)

  // Calcular y mostrar resultados
  printf("Centro m�s visitado: Centro %d\n", centroMasVisitado() + 1);
  printf("Centro menos visitado: Centro %d\n", centroMenosVisitado() + 1);
  printf("Mes con mayor afluencia: Mes %d\n", mesMayorAfluencia() + 1);
  printf("Mes con menor afluencia: Mes %d\n", mesMenosAfluencia() + 1);

  return 0;
}
