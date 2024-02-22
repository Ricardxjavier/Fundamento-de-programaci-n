#include <stdio.h>

int main() {
    int MES;
    double CAP, TAS, montoFinal;

    printf("Introduce el monto inicial (CAP): ");
    scanf("%lf", &CAP);

    printf("Introduce la tasa de interés mensual (TAS): ");
    scanf("%lf", &TAS);

    printf("Introduce el número de meses (MES): ");
    scanf("%d", &MES);

    montoFinal = CAP;
    for(int i = 0; i < MES; i++) {
        montoFinal += montoFinal * TAS;
    }

    printf("El monto final después de %d meses es: %lf\n", MES, montoFinal);

    return 0;
}
