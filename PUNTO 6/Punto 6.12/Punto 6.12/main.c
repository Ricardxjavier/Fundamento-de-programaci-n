#include <stdio.h>

// Definición de la estructura para los datos de asistencia
struct AsistenciaEstadio {
    char nombreEstadio[50];
    int asistentes[5]; // Asistentes en los últimos 5 años
};

// Función para calcular el promedio de asistentes en los últimos 5 años
float calcularPromedio(int asistentes[]) {
    int total = 0;
    for (int i = 0; i < 5; i++) {
        total += asistentes[i];
    }
    return (float)total / 5;
}

int main() {
    // Crear un arreglo de estructuras para los 10 estadios
    struct AsistenciaEstadio estadios[10];

    // Inicializar los datos de asistencia para cada estadio
    // (Aquí se deben ingresar los datos reales)
    // Ejemplo:
    strcpy(estadios[0].nombreEstadio, "Estadio Azteca");
    estadios[0].asistentes[0] = 50000;
    estadios[0].asistentes[1] = 48000;
    estadios[0].asistentes[2] = 52000;
    estadios[0].asistentes[3] = 51000;
    estadios[0].asistentes[4] = 49000;

    // Calcular el promedio de asistentes para cada estadio
    for (int i = 0; i < 10; i++) {
        float promedio = calcularPromedio(estadios[i].asistentes);
        printf("Estadio %s: Promedio de asistentes = %.2f\n", estadios[i].nombreEstadio, promedio);
    }

    return 0;
}
