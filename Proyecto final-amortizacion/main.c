#include <stdio.h>

int main() {
    // Definici�n de variables
    float monto_prestamo, tasa_interes_anual, pago_mensual;
    int num_pagos;

    // Entrada de datos
    printf("Ingrese el monto del pr�stamo: ");
    scanf("%f", &monto_prestamo);

    printf("Ingrese la tasa de inter�s anual (en porcentaje): ");
    scanf("%f", &tasa_interes_anual);

    printf("Ingrese el n�mero de pagos: ");
    scanf("%d", &num_pagos);

    // Conversi�n de la tasa de inter�s anual a mensual
    float tasa_interes_mensual = tasa_interes_anual / 12 / 100;

    // C�lculo del pago mensual
    pago_mensual = (monto_prestamo * tasa_interes_mensual) / (1 - pow(1 + tasa_interes_mensual, -num_pagos));

    // Imprimir el resultado
    printf("\nEl pago mensual es: %.2f\n", pago_mensual);

    // Tabla de amortizaci�n
    printf("\nTabla de Amortizaci�n:\n");
    printf("Mes\tPago\t\tInter�s\t\tPrincipal\tSaldo Restante\n");

    float saldo_restante = monto_prestamo;
    for (int i = 1; i <= num_pagos; i++) {
        float interes = saldo_restante * tasa_interes_mensual;
        float principal = pago_mensual - interes;
        saldo_restante -= principal;

        printf("%d\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\n", i, pago_mensual, interes, principal, saldo_restante);
    }

    return 0;
}
