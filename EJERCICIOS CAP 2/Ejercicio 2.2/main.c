#include <stdio.h>#include <stdio.h>

int main() {
  float sueldo, incremento, nuevoSueldo; // Variables para almacenar el sueldo, incremento y nuevo sueldo

  // Obtener el sueldo del profesor del usuario
  printf("Ingrese el sueldo del profesor: ");
  scanf("%f", &sueldo);

  // Calcular el incremento en base al rango de sueldo
  if (sueldo < 18000) {
    incremento = 0.12;
  } else if (sueldo >= 18000 && sueldo < 30000) {
    incremento = 0.08;
  } else if (sueldo >= 30000 && sueldo <= 50000) {
    incremento = 0.07;
  } else {
    incremento = 0.06;
  }

  // Calcular el nuevo sueldo
  nuevoSueldo = sueldo + (incremento * sueldo);

  // Mostrar el nuevo sueldo
  printf("El nuevo sueldo es: %.2f\n", nuevoSueldo);

  return 0;
}
