#include <stdio.h>
#include <string.h>

#define MAX_EMPLEADOS 100

// Estructura para almacenar la informaci�n de un empleado
typedef struct {
    int numero;
    char nombre[50];
    char departamento[50];
    char calle[50];
    char colonia[50];
    int codigo_postal;
    char ciudad[50];
    char telefono[20];
    float salario;
} EMPLEADO;

// Arreglo para almacenar la informaci�n de los empleados
EMPLEADO empleados[MAX_EMPLEADOS];
int num_empleados = 0;

// Funci�n para dar de alta un nuevo empleado
void alta() {
    EMPLEADO nuevo_empleado;

    // Solicitar la informaci�n del nuevo empleado
    printf("Ingrese el n�mero de empleado: ");
    scanf("%d", &nuevo_empleado.numero);
    printf("Ingrese el nombre y apellido: ");
    scanf("%s", nuevo_empleado.nombre);
    printf("Ingrese el departamento: ");
    scanf("%s", nuevo_empleado.departamento);
    printf("Ingrese la calle y n�mero: ");
    scanf("%s", nuevo_empleado.calle);
    printf("Ingrese la colonia: ");
    scanf("%s", nuevo_empleado.colonia);
    printf("Ingrese el c�digo postal: ");
    scanf("%d", &nuevo_empleado.codigo_postal);
    printf("Ingrese la ciudad: ");
    scanf("%s", nuevo_empleado.ciudad);
    printf("Ingrese el tel�fono: ");
    scanf("%s", nuevo_empleado.telefono);
    printf("Ingrese el salario: ");
    scanf("%f", &nuevo_empleado.salario);

    // Agregar el nuevo empleado al arreglo
    empleados[num_empleados] = nuevo_empleado;
    num_empleados++;

    printf("Empleado dado de alta correctamente.\n");
}

// Funci�n para dar de baja a un empleado
void baja() {
    int numero;

    // Solicitar el n�mero del empleado a dar de baja
    printf("Ingrese el n�mero de empleado: ");
    scanf("%d", &numero);

    // Buscar el empleado en el arreglo
    int i;
    for (i = 0; i < num_empleados; i++) {
        if (empleados[i].numero == numero) {
            // Eliminar el empleado del arreglo
            for (int j = i; j < num_empleados - 1; j++) {
                empleados[j] = empleados[j + 1];
            }
            num_empleados--;
            printf("Empleado dado de baja correctamente.\n");
            return;
        }
    }

    // Si no se encuentra el empleado, mostrar un mensaje
    printf("No se encontr� el empleado con el n�mero %d.\n", numero);
}

// Funci�n para listar los empleados de un departamento
void listado() {
    char departamento[50];

    // Solicitar el nombre del departamento
    printf("Ingrese el nombre del departamento: ");
    scanf("%s", departamento);

    // Buscar los empleados del departamento
    printf("Empleados del departamento %s:\n", departamento);
    for (int i = 0; i < num_empleados; i++) {
        if (strcmp(empleados[i].departamento, departamento) == 0) {
            printf("N�mero: %d\n", empleados[i].numero);
            printf("Nombre: %s\n", empleados[i].nombre);
            printf("Salario: %.2f\n", empleados[i].salario);
            printf("\n");
        }
    }
}

int main() {
    int opcion;

    // Men� principal
    while (1) {
        printf("Men�:\n");
        printf("1. Alta\n");
        printf("2. Baja\n");
        printf("3. Listado\n");
        printf("4. Salir\n");
        printf("Ingrese una opci�n: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                alta();
                break;
            case 2:
                baja();
                break;
            case 3:
                listado();
                break;
            case 4:
                return 0;
            default:
                printf("Opci�n inv�lida.\n");
        }
    }

    return 0;
}
