#include <stdio.h>

int main() {
    float can; // Variable que representa la cantidad en dólares
    float pesos; // Variable para almacenar la cantidad convertida en pesos
    const float tipoDeCambio = 12.48; // Tipo de cambio actual

    printf("Ingrese la cantidad en dólares: ");
    scanf("%f", &can);

    // Convertir la cantidad en dólares a pesos
    pesos = can * tipoDeCambio;

    printf("%.2f dólares es igual a %.2f pesos.\n", can, pesos);

    return 0;
}
