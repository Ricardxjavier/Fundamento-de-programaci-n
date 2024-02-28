#include <stdio.h>

// Definición del tamaño del arreglo
#define NUM_CENTROS 10
#define NUM_MESES 12
#define NUM_ANIOS 5

// Declaración del arreglo tridimensional
int SEC[NUM_CENTROS][NUM_MESES][NUM_ANIOS];

// Función para calcular el total de visitantes por centro turístico
int totalVisitantesCentro(int centro) {
  int total = 0;
  for (int mes = 0; mes < NUM_MESES; mes++) {
    for (int anio = 0; anio < NUM_ANIOS; anio++) {
      total += SEC[centro][mes][anio];
    }
  }
  return total;
}

// Función para encontrar el centro turístico más visitado
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

// Función para encontrar el centro turístico menos visitado
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

// Función para encontrar el mes con mayor afluencia turística
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

// Función para encontrar el mes con menor afluencia turística
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
  // ... (rellenar datos para otros centros, meses y años)

  // Calcular y mostrar resultados
  printf("Centro más visitado: Centro %d\n", centroMasVisitado() + 1);
  printf("Centro menos visitado: Centro %d\n", centroMenosVisitado() + 1);
  printf("Mes con mayor afluencia: Mes %d\n", mesMayorAfluencia() + 1);
  printf("Mes con menor afluencia: Mes %d\n", mesMenosAfluencia() + 1);

  return 0;
}
