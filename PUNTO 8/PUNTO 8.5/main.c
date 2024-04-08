#include <stdio.h>
#include <string.h>

// Estructura para un producto electrónico
typedef struct {
    int id;
    char nombre[50];
    float precio;
    int cantidad;
} Producto;

// Función para actualizar la información de un producto
void actualizarProducto(Producto *p, float nuevoPrecio, int nuevaCantidad) {
    p->precio = nuevoPrecio;
    p->cantidad = nuevaCantidad;
    printf("Producto actualizado: %s\n", p->nombre);
}

int main() {
    // Crear e inicializar un producto
    Producto telefono = {1, "Telefono Móvil", 299.99, 10};

    // Mostrar la información del producto
    printf("Producto: %s\nPrecio: %.2f\nCantidad: %d\n", telefono.nombre, telefono.precio, telefono.cantidad);

    // Actualizar la información del producto
    actualizarProducto(&telefono, 249.99, 20);

    // Mostrar la información actualizada del producto
    printf("Producto: %s\nPrecio: %.2f\nCantidad: %d\n", telefono.nombre, telefono.precio, telefono.cantidad);

    return 0;
}
