#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUCTOS 100

// Estructura para almacenar la informaci�n de un producto
typedef struct {
    int clave;
    char nombre[50];
    int existencia;
} Producto;

// Estructura para almacenar las transacciones
typedef struct {
    char operacion;
    int clave;
    int cantidad;
} Transaccion;

// Funci�n para inicializar la tienda
void inicializarTienda(Producto tienda[], int n) {
    // Inicializa la tienda con productos vac�os
    for (int i = 0; i < n; i++) {
        tienda[i].clave = 0;
        strcpy(tienda[i].nombre, "");
        tienda[i].existencia = 0;
    }
}

// Funci�n para procesar las transacciones
void procesarTransacciones(Producto tienda[], int n, Transaccion transacciones[], int m) {
    // Recorre las transacciones
    for (int i = 0; i < m; i++) {
        // Encuentra el producto correspondiente a la clave de la transacci�n
        int j;
        for (j = 0; j < n; j++) {
            if (tienda[j].clave == transacciones[i].clave) {
                break;
            }
        }

        // Si se encontr� el producto, procesa la transacci�n
        if (j < n) {
            if (transacciones[i].operacion == 'c') {
                // Compra: aumenta la existencia
                tienda[j].existencia += transacciones[i].cantidad;
            } else if (transacciones[i].operacion == 'v') {
                // Venta: disminuye la existencia si hay suficiente stock
                if (tienda[j].existencia >= transacciones[i].cantidad) {
                    tienda[j].existencia -= transacciones[i].cantidad;
                } else {
                    printf("No hay suficiente stock para la venta.\n");
                }
            }
        } else {
            printf("No se encontr� el producto con clave %d.\n", transacciones[i].clave);
        }
    }
}

// Funci�n para imprimir la informaci�n de la tienda
void imprimirTienda(Producto tienda[], int n) {
    printf("Informaci�n de la tienda:\n");
    printf("------------------------\n");
    for (int i = 0; i < n; i++) {
        if (tienda[i].clave != 0) {
            printf("Clave: %d\n", tienda[i].clave);
            printf("Nombre: %s\n", tienda[i].nombre);
            printf("Existencia: %d\n\n", tienda[i].existencia);
        }
    }
}

int main() {
    // Define el n�mero de productos y transacciones
    int n = 5; // N�mero de productos
    int m = 3; // N�mero de transacciones

    // Crea la tienda y las transacciones
    Producto tienda[MAX_PRODUCTOS];
    Transaccion transacciones[MAX_PRODUCTOS];

    // Inicializa la tienda
    inicializarTienda(tienda, n);

    // Ingresa la informaci�n de los productos
    tienda[0].clave = 1;
    strcpy(tienda[0].nombre, "Televisor");
    tienda[0].existencia = 10;
    tienda[1].clave = 2;
    strcpy(tienda[1].nombre, "Celular");
    tienda[1].existencia = 20;
    tienda[2].clave = 3;
    strcpy(tienda[2].nombre, "Laptop");
    tienda[2].existencia = 15;

    // Ingresa las transacciones
    transacciones[0].operacion = 'c';
    transacciones[0].clave = 1;
    transacciones[0].cantidad = 5;
    transacciones[1].operacion = 'v';
    transacciones[1].clave = 2;
    transacciones[1].cantidad = 10;
    transacciones[2].operacion = 'c';
    transacciones[2].clave = 3;
    transacciones[2].cantidad = 3;

    // Imprime la informaci�n inicial de la tienda
    printf("Tienda Inicial:\n");
    imprimirTienda(tienda, n);

    // Procesa las transacciones
    procesarTransacciones(tienda, n, transacciones, m);

    // Imprime la informaci�n de la tienda despu�s de las transacciones
    printf("\nTienda Final:\n");
    imprimirTienda(tienda, n);

    return 0;
}
