#include <stdio.h>

int main() {
    float can; // Variable que representa la cantidad en d�lares
    float pesos; // Variable para almacenar la cantidad convertida en pesos
    const float tipoDeCambio = 12.48; // Tipo de cambio actual

    printf("Ingrese la cantidad en d�lares: ");
    scanf("%f", &can);

    // Convertir la cantidad en d�lares a pesos
    pesos = can * tipoDeCambio;

    printf("%.2f d�lares es igual a %.2f pesos.\n", can, pesos);

    return 0;
}
