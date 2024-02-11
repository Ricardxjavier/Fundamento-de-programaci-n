#include <stdio.h>

int main() {
  int n;
  float promedio = 0.0;
  char nombre[50];
  float nota;

  // Leer N
  printf("Ingrese el número de estudiantes: ");
  scanf("%d", &n);

  // Leer nombres y notas
  for (int i = 1; i <= n; i++) {
    printf("Ingrese el nombre del estudiante %d: ", i);
    scanf("%s", nombre);
    printf("Ingrese la nota del estudiante %d: ", i);
    scanf("%f", &nota);
    promedio += nota;
  }

  // Calcular promedio
  promedio /= n;

  // Imprimir promedio
  printf("El promedio es: %.2f\n", promedio);

  return 0;
}
