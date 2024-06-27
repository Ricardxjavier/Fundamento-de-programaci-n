#include <stdio.h>
#include <string.h>

#define MAX_PROFESORES 200
#define NUM_MESES 12

// Estructura para almacenar informaci�n del profesor
typedef struct {
  int numeroEmpleado;
  char nombreApellido[100];
  char departamento[50];
  char puesto[50];
  char gradoAcademico[50];
  char nacionalidad[50];
  float salario[NUM_MESES];
} PROFESOR;

// Funci�n para encontrar el profesor que m�s gan� el a�o anterior
PROFESOR encontrarMejorPagado(PROFESOR profesores[], int nProfesores) {
  PROFESOR mejorPagado = profesores[0];
  float ingresoTotalMejorPagado = 0;

  // Iterar sobre todos los profesores para encontrar el que m�s gan�
  for (int i = 0; i < nProfesores; i++) {
    float ingresoTotal = 0;
    for (int j = 0; j < NUM_MESES; j++) {
      ingresoTotal += profesores[i].salario[j];
    }
    if (ingresoTotal > ingresoTotalMejorPagado) {
      mejorPagado = profesores[i];
      ingresoTotalMejorPagado = ingresoTotal;
    }
  }

  return mejorPagado;
}

// Funci�n para calcular el monto total pagado a los profesores extranjeros
float montoTotalExtranjeros(PROFESOR profesores[], int nProfesores) {
  float montoTotal = 0;

  // Iterar sobre todos los profesores para calcular el monto total pagado a los extranjeros
  for (int i = 0; i < nProfesores; i++) {
    if (strcmp(profesores[i].nacionalidad, "Colombia") != 0) {
      for (int j = 0; j < NUM_MESES; j++) {
        montoTotal += profesores[i].salario[j];
      }
    }
  }

  return montoTotal;
}

// Funci�n para calcular el porcentaje de pago a extranjeros respecto al total
float porcentajeExtranjeros(PROFESOR profesores[], int nProfesores) {
  float montoTotalExtranjeros = (profesores, nProfesores);
  float montoTotal = 0;

  // Calcular el monto total pagado a todos los profesores
  for (int i = 0; i < nProfesores; i++) {
    for (int j = 0; j < NUM_MESES; j++) {
      montoTotal += profesores[i].salario[j];
    }
  }

  // Calcular el porcentaje
  if (montoTotal > 0) {
    return (montoTotalExtranjeros / montoTotal) * 100;
  } else {
    return 0;
  }
}

// Funci�n para encontrar el departamento con m�s egresos
char *departamentoMasEgresos(PROFESOR profesores[], int nProfesores) {
  char *departamentoMaximo = NULL;
  float egresosMaximos = 0;

  // Iterar sobre todos los profesores para encontrar el departamento con m�s egresos
  for (int i = 0; i < nProfesores; i++) {
    float egresosDepartamento = 0;
    for (int j = 0; j < NUM_MESES; j++) {
      egresosDepartamento += profesores[i].salario[j];
    }
    if (egresosDepartamento > egresosMaximos) {
      egresosMaximos = egresosDepartamento;
      departamentoMaximo = profesores[i].departamento;
    }
  }

  return departamentoMaximo;
}

int main() {
  // Inicializar un arreglo de profesores (ejemplo)
  PROFESOR profesores[MAX_PROFESORES] = {
    {1, "Juan Perez", "Econom�a", "Profesor", "Doctor", "Colombia", {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000}},
    {2, "Maria Rodriguez", "Derecho", "Profesor", "Doctor", "Colombia", {1200, 1200, 1200, 1200, 1200, 1200, 1200, 1200, 1200, 1200, 1200, 1200}},
    {3, "Pedro Garcia", "Computaci�n", "Profesor", "Doctor", "Argentina", {1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500}},
    {4, "Ana Lopez", "Administraci�n", "Profesor", "Doctor", "Colombia", {1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300}}
  };

  // Cantidad de profesores
  int nProfesores = 4;

  // Encontrar el profesor que m�s gan�
  PROFESOR mejorPagado = encontrarMejorPagado(profesores, nProfesores);
  printf("El profesor que m�s gan� el a�o anterior es: %s\n", mejorPagado.nombreApellido);
  printf("Departamento: %s\n", mejorPagado.departamento);
  printf("Nacionalidad: %s\n", mejorPagado.nacionalidad);
  printf("Ingreso total: %.2f\n\n", montoTotalExtranjeros(profesores, nProfesores));

  // Calcular el monto total pagado a los profesores extranjeros
  float montoTotalExtranjeros = (profesores, nProfesores);
  printf("Monto total pagado a profesores extranjeros: %.2f\n", montoTotalExtranjeros);

  // Calcular el porcentaje de pago a extranjeros respecto al total
  float porcentajeExtranjeros = (profesores, nProfesores);
  printf("Porcentaje de pago a extranjeros: %.2f%%\n\n", porcentajeExtranjeros);

  // Encontrar el departamento con m�s egresos
  char *departamentoMaximo = departamentoMasEgresos(profesores, nProfesores);
  printf("Departamento con m�s egresos: %s\n", departamentoMaximo);

  return 0;
}
