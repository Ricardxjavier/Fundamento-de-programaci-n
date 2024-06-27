#include <stdio.h>  // Se incluye la biblioteca estándar de entrada y salida
#include <stdlib.h> // Se incluye la biblioteca estándar para la gestión de memoria
#include <string.h> // Se incluye la biblioteca estándar para la manipulación de cadenas

#define TAM_MAX 100 // Se define una constante para el tamaño máximo del arreglo de clientes

typedef struct Cliente { // Se define una estructura para almacenar la información de un cliente
    int numeroCuenta;  // Número de cuenta del cliente
    char nombre[50];   // Nombre del cliente
    char domicilio[100]; // Domicilio del cliente
    char calle[50];    // Calle del domicilio del cliente
    char codigoPostal[10]; // Código postal del domicilio del cliente
    char colonia[50];   // Colonia del domicilio del cliente
    char ciudad[50];    // Ciudad del domicilio del cliente
    char telefono[20];  // Teléfono del cliente
    float saldo;       // Saldo de la cuenta del cliente
} Cliente;

Cliente clientes[TAM_MAX]; // Se declara un arreglo de clientes con tamaño máximo TAM_MAX
int numeroClientes = 0;    // Se declara una variable para almacenar el número de clientes registrados

// Función para buscar un cliente por su número de cuenta
int buscarCliente(int numeroCuenta) {
    for (int i = 0; i < numeroClientes; i++) { // Se recorre el arreglo de clientes
        if (clientes[i].numeroCuenta == numeroCuenta) { // Se compara el número de cuenta del cliente actual con el número de cuenta buscado
            return i; // Si se encuentra el cliente, se devuelve su índice
        }
    }

    return -1; // Si no se encuentra el cliente, se devuelve -1
}

// Función para realizar un depósito en la cuenta de un cliente
void realizarDeposito(int numeroCuenta, float monto) {
    int indiceCliente = buscarCliente(numeroCuenta); // Se busca el índice del cliente

    if (indiceCliente == -1) { // Si no se encuentra el cliente, se muestra un mensaje de error
        printf("Error: El número de cuenta no existe.\n");
        return;
    }

    clientes[indiceCliente].saldo += monto; // Se actualiza el saldo del cliente
    printf("Depósito realizado con éxito. El nuevo saldo es: %.2f\n", clientes[indiceCliente].saldo); // Se muestra un mensaje de confirmación
}

// Función para realizar un retiro de la cuenta de un cliente
void realizarRetiro(int numeroCuenta, float monto) {
    int indiceCliente = buscarCliente(numeroCuenta); // Se busca el índice del cliente

    if (indiceCliente == -1) { // Si no se encuentra el cliente, se muestra un mensaje de error
        printf("Error: El número de cuenta no existe.\n");
        return;
    }

    if (clientes[indiceCliente].saldo < monto) { // Si el saldo es insuficiente, se muestra un mensaje de error
        printf("Error: Saldo insuficiente.\n");
        return;
    }

    clientes[indiceCliente].saldo -= monto; // Se actualiza el saldo del cliente
    printf("Retiro realizado con éxito. El nuevo saldo es: %.2f\n", clientes[indiceCliente].saldo); // Se muestra un mensaje de confirmación
}

int main() {
    int numeroCuenta, opcion, monto; // Se declaran variables para almacenar el número de cuenta, la opción del menú y el monto

    while (1) { // Bucle infinito para el menú principal
        printf("\nMenú principal:\n"); // Se muestra el menú principal
        printf("1. Realizar depósito\n"); // Opción 1: Realizar depósito
        printf("2. Realizar retiro\n"); // Opción 2: Realizar retiro
        printf("3. Salir\n"); // Opción 3: Salir
        printf("Ingrese una opción: "); // Se solicita al usuario que ingrese una opción
        scanf("%d", &opcion); // Se lee la opción del usuario

        switch (opcion) { // Se utiliza una instrucción switch para manejar las opciones del menú
            case 1: // Opción 1: Realizar depósito
                printf("Ingrese el número de cuenta: "); // Se solicita al usuario que ingrese el número de cuenta
                scanf("%d", &numeroCuenta); // Se lee el número de cuenta
                printf("Ingrese el monto del depósito: "); // Se solicita al usuario que ingrese el monto
                scanf("%f", &monto); // Se lee el monto
                realizarDeposito(numeroCuenta, monto);
                break;
            case 2:
                printf("Ingrese el número de cuenta: ");
                scanf("%d", &numeroCuenta);
                printf("Ingrese el monto del retiro: ");
                scanf("%f", &monto);
                realizarRetiro(numeroCuenta, monto);
                break;
            case 3:
                printf("Saliendo del programa...\n");
                exit(0);
                break;
            default:
                        printf("Opción no válida.\n");
        }
    }

    return 0;
}
