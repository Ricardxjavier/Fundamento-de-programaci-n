#include <stdio.h>

int main() {
  // Variables para almacenar las horas trabajadas y el salario por hora
  float horas_trabajadas, salario_hora;

  // Solicitar al usuario que ingrese las horas trabajadas
  printf("Ingrese las horas trabajadas: ");
  scanf("%f", &horas_trabajadas);

  // Solicitar al usuario que ingrese el salario por hora
  printf("Ingrese el salario por hora: ");
  scanf("%f", &salario_hora);

  // Calcular las horas normales
  float horas_normales;
  if (horas_trabajadas <= 40) {
    horas_normales = horas_trabajadas;
  } else {
    horas_normales = 40;
  }

  // Calcular las horas extra
  float horas_extra;
  if (horas_trabajadas > 40) {
    horas_extra = horas_trabajadas - horas_normales;
  } else {
    horas_extra = 0;
  }

  // Calcular el pago por horas normales
  float pago_horas_normales = horas_normales * salario_hora;

  // Calcular el pago por horas extra
  float pago_horas_extra = horas_extra * 1.5 * salario_hora;

  // Calcular el pago total
  float pago_total = pago_horas_normales + pago_horas_extra;

  // Imprimir el resultado
  printf("Pago por horas normales: $%.2f\n", pago_horas_normales);
  printf("Pago por horas extra: $%.2f\n", pago_horas_extra);
  printf("Pago total: $%.2f\n", pago_total);

  return 0;
}
