#include <stdio.h>

int main() {
    float PRE, PAG, cambio;

    printf("Ingrese el costo del articulo: ");
    scanf("%f", &PRE);

    printf("Ingrese la cantidad de dinero entregada por el cliente: ");
    scanf("%f", &PAG);

    if(PAG >= PRE) {
        cambio = PAG - PRE;
        printf("El cambio que se debe entregar al cliente es: %.2f\n", cambio);
    } else {
        printf("El dinero entregado no es suficiente para comprar el articulo.\n");
    }

    return 0;
}
