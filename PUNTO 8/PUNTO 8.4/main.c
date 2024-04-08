#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estructura para los datos del empleado
typedef struct {
    int id;
    char nombre[50];
    char departamento[50];
    char direccion[100];
    float salarioMensual;
} Empleado;

// Prototipos de funciones
void agregarEmpleado(Empleado *empleados, int *contador);
void eliminarEmpleado(Empleado *empleados, int *contador, int id);
void listarEmpleadosPorDepartamento(Empleado *empleados, int contador, char *departamento);

int main() {
    Empleado empleados[100]; // Array para almacenar hasta 100 empleados
    int contador = 0; // Contador para la cantidad de empleados

    // Agregar, eliminar o listar empleados aquí
    // Ejemplo: agregarEmpleado(empleados, &contador);

    return 0;
}

// Implementación de funciones
void agregarEmpleado(Empleado *empleados, int *contador) {
    // Aquí va el código para agregar un empleado
}

void eliminarEmpleado(Empleado *empleados, int *contador, int id) {
    // Aquí va el código para eliminar un empleado por ID
}

void listarEmpleadosPorDepartamento(Empleado *empleados, int contador, char *departamento) {
    // Aquí va el código para listar empleados por departamento
}
