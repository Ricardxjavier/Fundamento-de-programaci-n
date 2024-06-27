#include <stdio.h>  // Se incluye la biblioteca est�ndar de entrada y salida
#include <stdlib.h> // Se incluye la biblioteca est�ndar para la gesti�n de memoria
#include <string.h> // Se incluye la biblioteca est�ndar para la manipulaci�n de cadenas

#define TAM_MAX 100 // Se define una constante para el tama�o m�ximo del arreglo de clientes

typedef struct Cliente { // Se define una estructura para almacenar la informaci�n de un cliente
    int numeroCuenta;  // N�mero de cuenta del cliente
    char nombre[50];   // Nombre del cliente
    char domicilio[100]; // Domicilio del cliente
    char calle[50];    // Calle del domicilio del cliente
    char codigoPostal[10]; // C�digo postal del domicilio del cliente
    char colonia[50];   // Colonia del domicilio del cliente
    char ciudad[50];    // Ciudad del domicilio del cliente
    char telefono[20];  // Tel�fono del cliente
    float saldo;       // Saldo de la cuenta del cliente
} Cliente;

Cliente clientes[TAM_MAX]; // Se declara un arreglo de clientes con tama�o m�ximo TAM_MAX
int numeroClientes = 0;    // Se declara una variable para almacenar el n�mero de clientes registrados

// Funci�n para buscar un cliente por su n�mero de cuenta
int buscarCliente(int numeroCuenta) {
    for (int i = 0; i < numeroClientes; i++) { // Se recorre el arreglo de clientes
        if (clientes[i].numeroCuenta == numeroCuenta) { // Se compara el n�mero de cuenta del cliente actual con el n�mero de cuenta buscado
            return i; // Si se encuentra el cliente, se devuelve su �ndice
        }
    }

    return -1; // Si no se encuentra el cliente, se devuelve -1
}

// Funci�n para realizar un dep�sito en la cuenta de un cliente
void realizarDeposito(int numeroCuenta, float monto) {
    int indiceCliente = buscarCliente(numeroCuenta); // Se busca el �ndice del cliente

    if (indiceCliente == -1) { // Si no se encuentra el cliente, se muestra un mensaje de error
        printf("Error: El n�mero de cuenta no existe.\n");
        return;
    }

    clientes[indiceCliente].saldo += monto; // Se actualiza el saldo del cliente
    printf("Dep�sito realizado con �xito. El nuevo saldo es: %.2f\n", clientes[indiceCliente].saldo); // Se muestra un mensaje de confirmaci�n
}

// Funci�n para realizar un retiro de la cuenta de un cliente
void realizarRetiro(int numeroCuenta, float monto) {
    int indiceCliente = buscarCliente(numeroCuenta); // Se busca el �ndice del cliente

    if (indiceCliente == -1) { // Si no se encuentra el cliente, se muestra un mensaje de error
        printf("Error: El n�mero de cuenta no existe.\n");
        return;
    }

    if (clientes[indiceCliente].saldo < monto) { // Si el saldo es insuficiente, se muestra un mensaje de error
        printf("Error: Saldo insuficiente.\n");
        return;
    }

    clientes[indiceCliente].saldo -= monto; // Se actualiza el saldo del cliente
    printf("Retiro realizado con �xito. El nuevo saldo es: %.2f\n", clientes[indiceCliente].saldo); // Se muestra un mensaje de confirmaci�n
}

int main() {
    int numeroCuenta, opcion, monto; // Se declaran variables para almacenar el n�mero de cuenta, la opci�n del men� y el monto

    while (1) { // Bucle infinito para el men� principal
        printf("\nMen� principal:\n"); // Se muestra el men� principal
        printf("1. Realizar dep�sito\n"); // Opci�n 1: Realizar dep�sito
        printf("2. Realizar retiro\n"); // Opci�n 2: Realizar retiro
        printf("3. Salir\n"); // Opci�n 3: Salir
        printf("Ingrese una opci�n: "); // Se solicita al usuario que ingrese una opci�n
        scanf("%d", &opcion); // Se lee la opci�n del usuario

        switch (opcion) { // Se utiliza una instrucci�n switch para manejar las opciones del men�
            case 1: // Opci�n 1: Realizar dep�sito
                printf("Ingrese el n�mero de cuenta: "); // Se solicita al usuario que ingrese el n�mero de cuenta
                scanf("%d", &numeroCuenta); // Se lee el n�mero de cuenta
                printf("Ingrese el monto del dep�sito: "); // Se solicita al usuario que ingrese el monto
                scanf("%f", &monto); // Se lee el monto
                realizarDeposito(numeroCuenta, monto);
                break;
            case 2:
                printf("Ingrese el n�mero de cuenta: ");
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
                        printf("Opci�n no v�lida.\n");
        }
    }

    return 0;
}
