#include <stdio.h>

int main() {

  int distancia, minutos, segundos, centesimas;
  float tiempo_segundos, velocidad_ms, velocidad_kmh;

  // Leer la distancia y el tiempo
  printf("Ingrese la distancia recorrida (en metros): ");
  scanf("%d", &distancia);
  printf("Ingrese el tiempo (en minutos, segundos y centésimas): ");
  scanf("%d %d %d", &minutos, &segundos, &centesimas);

  // Convertir el tiempo a segundos
  tiempo_segundos = minutos * 60 + segundos + centesimas / 100.0;

  // Calcular la velocidad en metros por segundo
  velocidad_ms = distancia / tiempo_segundos;

  // Convertir la velocidad a kilómetros por hora
  velocidad_kmh = velocidad_ms * 3.6;

  // Imprimir la velocidad
  printf("La velocidad del participante es: %.2f km/h\n", velocidad_kmh);

  return 0;
}
