#include <stdio.h>
#include <string.h>

// Estructura para un producto electr�nico
typedef struct {
    int id;
    char nombre[50];
    float precio;
    int cantidad;
} Producto;

// Funci�n para actualizar la informaci�n de un producto
void actualizarProducto(Producto *p, float nuevoPrecio, int nuevaCantidad) {
    p->precio = nuevoPrecio;
    p->cantidad = nuevaCantidad;
    printf("Producto actualizado: %s\n", p->nombre);
}

int main() {
    // Crear e inicializar un producto
    Producto telefono = {1, "Telefono M�vil", 299.99, 10};

    // Mostrar la informaci�n del producto
    printf("Producto: %s\nPrecio: %.2f\nCantidad: %d\n", telefono.nombre, telefono.precio, telefono.cantidad);

    // Actualizar la informaci�n del producto
    actualizarProducto(&telefono, 249.99, 20);

    // Mostrar la informaci�n actualizada del producto
    printf("Producto: %s\nPrecio: %.2f\nCantidad: %d\n", telefono.nombre, telefono.precio, telefono.cantidad);

    return 0;
}
