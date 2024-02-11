#include <stdio.h>

int main() {
    int N, CLAi, CANi;
    double L1, L2, L3, L4, L5, L6, total = 0.0;

    printf("Introduce el valor de N: ");
    scanf("%d", &N);

    printf("Introduce los precios de las localidades L1, L2, L3, L4, L5 y L6: ");
    scanf("%lf %lf %lf %lf %lf %lf", &L1, &L2, &L3, &L4, &L5, &L6);

    for(int i = 1; i <= N; i++) {
        printf("Introduce el tipo de localidad (CLAi) y la cantidad de boletos (CANi) para la venta %d: ", i);
        scanf("%d %d", &CLAi, &CANi);

        switch(CLAi) {
            case 1:
                total += L1 * CANi;
                break;
            case 2:
                total += L2 * CANi;
                break;
            case 3:
                total += L3 * CANi;
                break;
            case 4:
                total += L4 * CANi;
                break;
            case 5:
                total += L5 * CANi;
                break;
            case 6:
                total += L6 * CANi;
                break;
            default:
                printf("Tipo de localidad no válida.\n");
                return 0;
        }
    }

    printf("La recaudación total es: %.2f\n", total);

    return 0;
}
