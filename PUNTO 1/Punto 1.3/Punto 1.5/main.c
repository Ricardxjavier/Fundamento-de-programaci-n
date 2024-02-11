#include <stdio.h>
#include <math.h>

int main() {
    float RAD;
    printf("Introduce el radio del círculo: ");
    scanf("%f", &RAD);

    float area = M_PI * pow(RAD, 2);
    float circunferencia = 2 * M_PI * RAD;

    printf("Área del círculo: %.2f\n", area);
    printf("Circunferencia del círculo: %.2f\n", circunferencia);

    return 0;
}
