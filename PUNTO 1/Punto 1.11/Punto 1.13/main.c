#include <stdio.h>
#include <math.h>

int main() {

  double radio, altura, generatriz, area_lateral, area_total, volumen;

  // Leer el radio y la altura del cono
  printf("Ingrese el radio del cono: ");
  scanf("%lf", &radio);
  printf("Ingrese la altura del cono: ");
  scanf("%lf", &altura);

  // Calcular la generatriz
  generatriz = sqrt(radio * radio + altura * altura);

  // Calcular el área lateral
  area_lateral = M_PI * radio * generatriz;

  // Calcular el área total
  area_total = area_lateral + M_PI * radio * radio;

  // Calcular el volumen
  volumen = (1.0 / 3.0) * M_PI * radio * radio * altura;

  // Imprimir los resultados
  printf("El área lateral del cono es: %.4f\n", area_lateral);
  printf("El área total del cono es: %.4f\n", area_total);
  printf("El volumen del cono es: %.4f\n", volumen);

  return 0;
}
