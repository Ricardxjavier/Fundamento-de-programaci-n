#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUCTOS 100

// Estructura para almacenar información del producto
struct Producto {
    int clave;
    char nombre[50];
    int existencia;
    float precio;
};

// Estructura para almacenar el inventario
struct Inventario {
    struct Producto productos[MAX_PRODUCTOS];
    int numProductos;
};

// Función para inicializar el inventario
void inicializarInventario(struct Inventario *inventario) {
    inventario->numProductos = 0;
}

// Función para agregar un producto al inventario
void agregarProducto(struct Inventario *inventario, int clave, char *nombre, int existencia, float precio) {
    if (inventario->numProductos < MAX_PRODUCTOS) {
        inventario->productos[inventario->numProductos].clave = clave;
        strcpy(inventario->productos[inventario->numProductos].nombre, nombre);
        inventario->productos[inventario->numProductos].existencia = existencia;
        inventario->productos[inventario->numProductos].precio = precio;
        inventario->numProductos++;
    } else {
        printf("Error: Inventario lleno.\n");
    }
}

// Función para buscar un producto en el inventario
int buscarProducto(struct Inventario *inventario, int clave) {
    int i;
    for (i = 0; i < inventario->numProductos; i++) {
        if (inventario->productos[i].clave == clave) {
            return i;
        }
    }
    return -1;
}

// Función para realizar una venta
void realizarVenta(struct Inventario *inventario) {
    int clave, cantidad, indice;
    float total = 0;

    printf("Ingrese la clave del producto: ");
    scanf("%d", &clave);

    indice = buscarProducto(inventario, clave);
    if (indice == -1) {
        printf("Error: Producto no encontrado.\n");
        return;
    }

    printf("Ingrese la cantidad a vender: ");
    scanf("%d", &cantidad);

    if (cantidad > inventario->productos[indice].existencia) {
        printf("Error: Cantidad a vender supera la existencia.\n");
        return;
    }

    inventario->productos[indice].existencia -= cantidad;
    total += inventario->productos[indice].precio * cantidad;

    printf("Venta exitosa.\n");
    printf("Total: %.2f\n", total);
}

// Función para reabastecer el inventario
void reabastecerInventario(struct Inventario *inventario) {
    int clave, cantidad, indice;

    printf("Ingrese la clave del producto: ");
    scanf("%d", &clave);

    indice = buscarProducto(inventario, clave);
    if (indice == -1) {
        printf("Error: Producto no encontrado.\n");
        return;
    }

    printf("Ingrese la cantidad a reabastecer: ");
    scanf("%d", &cantidad);

    inventario->productos[indice].existencia += cantidad;

    printf("Inventario reabastecido.\n");
}

// Función para agregar un nuevo producto al inventario
void agregarNuevoProducto(struct Inventario *inventario) {
    int clave, existencia;
    char nombre[50];
    float precio;

    printf("Ingrese la clave del producto: ");
    scanf("%d", &clave);

    printf("Ingrese el nombre del producto: ");
    scanf(" %[^\n]", nombre);

    printf("Ingrese la existencia: ");
    scanf("%d", &existencia);

    printf("Ingrese el precio: ");
    scanf("%f", &precio);

    agregarProducto(inventario, clave, nombre, existencia, precio);

    printf("Producto agregado.\n");
}

// Función para mostrar el inventario
void mostrarInventario(struct Inventario *inventario) {
    int i;

    printf("----------------------------------------\n");
    printf("Inventario:\n");
    printf("----------------------------------------\n");
    printf("Clave\tNombre\tExistencia\tPrecio\n");
    printf("----------------------------------------\n");

    for (i = 0; i < inventario->numProductos; i++) {
        printf("%d\t%s\t%d\t%.2f\n",
               inventario->productos[i].clave,
               inventario->productos[i].nombre,
               inventario->productos[i].existencia,
               inventario->productos[i].precio);
    }

    printf("----------------------------------------\n");
}

int main() {
    struct Inventario inventario;
    int opcion;

    inicializarInventario(&inventario);

    // Agregar productos al inventario
    agregarProducto(&inventario, 1, "Pintura Blanca", 100, 15.00);
    agregarProducto(&inventario, 2, "Impermeabilizante", 50, 20.00);

    while (1) {
        printf("\nMenu:\n");
        printf("1. Ventas\n");
        printf("2. Reabastecimiento\n");
        printf("3. Agregar nuevo producto\n");
        printf("4. Mostrar inventario\n");
        printf("5. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                realizarVenta(&inventario);
                break;
            case 2:
                reabastecerInventario(&inventario);
                break;
            case 3:
                agregarNuevoProducto(&inventario);
                break;
            case 4:
                mostrarInventario(&inventario);
                break;
            case 5:
                exit(0);
            default:
                printf("Opcion invalida.\n");
        }
    }

    return 0;
}
